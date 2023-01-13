# Description: Return a descending order of a number
def descending_order(num):
    # Convert the number to a string
    # Sort the string in reverse order
    # Convert the string back to an integer
    # Return the integer
    return int("".join(sorted(str(num), reverse=True)))