import os
from slack_sdk import WebClient
from slack_sdk.errors import SlackApiError


def authenticate(api_token):
    client = WebClient(token=api_token)
    return client


def send_message(web_client, channel_id, message_text):
    try:
        response = web_client.chat_postMessage(
            channel=channel_id,
            text=message_text
        )
        print("Message sent: ", response["ts"])
    except SlackApiError as e:
        print("Error sending message: {}".format(e))


def get_channel_id(web_client, channel_name):
    try:
        channel_id = web_client.conversations_list(
            types="public_channel,private_channel"
        )["channels"].find(
            lambda x: x["name"] == channel_name
        )["id"]
        return channel_id
    except SlackApiError as e:
        print("Error retrieving channel ID: {}".format(e))
