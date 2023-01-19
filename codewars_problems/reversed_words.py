def reverse_words(s):
    return " ".join(reversed(s.split()))
    # return " ".join(s.split()[::-1])  # another way to do it
    # split the string into a list of words, then reverse the list, then join the list with a space in between each word