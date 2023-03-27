def calculate_speed(time_taken, input_text):
    num_chars = len(input_text)
    words_per_minute = (num_chars / 5) / (time_taken / 60)
    return words_per_minute
