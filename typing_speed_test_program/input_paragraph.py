import random


def get_paragraph():
    with open("assets/paragraphs.txt", "r") as f:
        paragraphs = f.readlines()
        paragraph = random.choice(paragraphs)
    return paragraph.strip()
