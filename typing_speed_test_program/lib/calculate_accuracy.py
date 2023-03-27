def calculate_accuracy(input_text, test_text):
    input_words = input_text.strip().split()
    test_words = test_text.strip().split()
    correct_words = 0
    
    for i in range(min(len(test_words), len(input_words))):
        if input_words[i].lower() == test_words[i].lower():
            correct_words += 1
    
    accuracy = (correct_words / len(test_words)) * 100
    return accuracy
