import sys

def get_input_text(files):
    if files:
        lines = []
        for filename in files:
            with open(filename, 'r') as f:
                lines.extend(f.readlines())
        return ''.join(lines)
    else:
        return sys.stdin.read()
