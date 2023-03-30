#!/usr/bin/python3
"""
Given a mixed array of number and string representations of integers,
add up the non-string integers and subtract the total of the string integers.
Return as a number.
"""


# first code version
def div_con(x):
    numbers = []
    letters = []
    
    for i in x:
        if type(i) == int:
            numbers.append(i)
    for j in x:
        if type(j) == str:
            j = int(j)
            letters.append(j)
    total_numbers = sum(numbers)
    total_letters = sum(letters)
    return total_numbers - total_letters


# refactored code (1):
def div_con(x):
    letters = []
    numbers = [i for i in x if type(i) == int]
    for j in x:
        if type(j) == str:
            j = int(j)
            letters.append(j)
    total_numbers = sum(numbers)
    total_letters = sum(letters)
    return total_numbers - total_letters


# refactored code (2):
def div_con(x):
    sum_integers = 0
    sum_strings = 0
    
    for item in x:
        if isinstance(item, int):
            sum_integers += item
        elif isinstance(item, str):
            sum_strings += int(item)
    
    return sum_integers - sum_strings
