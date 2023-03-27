import time

def animate_scroll(text, direction):
    rows, columns = map(int, os.popen('stty size', 'r').read().split())
    text = '\n'.join(text.split())
    padding = rows - text.count('\n')
    for i in range(padding // 2):
        text = '\n' + text
    for i in range(padding // 2):
        text = text + '\n'
    if direction == 'vertical':
        for i in range(rows):
            print(text[-i:-i+rows])
            time.sleep(0.1)
    elif direction == 'horizontal':
        text = text.replace('\n', ' ')
        for i in range(len(text)):
            print(text[:i] + '\n' + ' ' * (rows - 1) + text[i])
            time.sleep(0.05)
