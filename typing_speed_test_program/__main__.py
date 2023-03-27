import random
from lib import calculate_accuracy, calculate_speed, display_results, start_timer, stop_timer
from input_paragraph import get_paragraph


def main():
    # Retrieve paragraph from input_paragraph
    paragraph = get_paragraph()

    # Shuffle the words of the paragraph
    words = paragraph.strip().split()
    random.shuffle(words)
    shuffled_paragraph = " ".join(words)

    # Prompt user to start typing the shuffled paragraph
    print(f"Type this paragraph: \n{shuffled_paragraph}\n")
    input_text = input()

    # Calculate time taken for user to complete typing
    start_time = start_timer()
    end_time = stop_timer()
    time_taken = calculate_time_taken(start_time, end_time)

    # Calculate typing speed, accuracy, and display results
    speed = calculate_speed(time_taken, input_text)
    accuracy = calculate_accuracy(input_text, paragraph)
    display_results(speed, accuracy, time_taken)


if __name__ == "__main__":
    main()
