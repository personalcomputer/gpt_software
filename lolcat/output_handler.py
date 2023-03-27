from termcolor import colored

def colorize_text(text):
    colors = ['red', 'green', 'yellow', 'blue', 'magenta', 'cyan', 'white']
    colored_text = ''
    color_index = 0
    for char in text:
        if char != '\n':
            color = colors[color_index % len(colors)]
            colored_text += colored(char, color)
            color_index += 1
        else:
            colored_text += '\n'
    return colored_text
