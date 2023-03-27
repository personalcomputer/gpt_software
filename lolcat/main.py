import argparse
from input_handler import get_input_text
from output_handler import colorize_text
import animations

def parse_args():
    parser = argparse.ArgumentParser(description='Emulate the "lolcat" program with Python!')
    parser.add_argument('-a', '--animate', action='store_true', help='animate the output text (default: False)')
    parser.add_argument('-f', '--files', nargs='*', help='files to concatenate (default: None)')
    return parser.parse_args()

def main():
    args = parse_args()
    input_text = get_input_text(args.files)
    colored_text = colorize_text(input_text)
    if args.animate:
        animations.animate_scroll(colored_text, 'vertical')
    else:
        print(colored_text)

if __name__ == '__main__':
    main()
