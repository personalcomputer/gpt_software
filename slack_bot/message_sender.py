import os
from slack_sdk import WebClient
from slack_sdk.errors import SlackApiError


def get_user_input():
    channel_id = input("Enter channel ID or username: ")
    message_text = input("Enter message text: ")
    return channel_id, message_text


def send_message_to_slack(channel_id, message_text):
    api_token = os.environ["SLACK_API_TOKEN"]
    client = WebClient(token=api_token)
    try:
        response = client.chat_postMessage(
            channel=channel_id,
            text=message_text
        )
        print("Message sent: ", response["ts"])
    except SlackApiError as e:
        print("Error sending message: {}".format(e))


if __name__ == "__main__":
    channel_id, message_text = get_user_input()
    send_message_to_slack(channel_id, message_text)
