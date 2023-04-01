#!/usr/bin/python3
"""
An AI has infected a text with a character!!

This text is now fully mutated to this character.

If the text or the character are empty, return an empty string.
There will never be a case when both are empty as nothing is going on!!

Note: The character is a string of length 1 or an empty string.
"""


def contamination(text, char):
    # if the text or char are empty string, return empty string
    if text == "" or char == "":
        return ""
    # if the char is not empty, return the char multiplied by the length of the text
    new_text = "".join(char for _ in text)
    return new_text
