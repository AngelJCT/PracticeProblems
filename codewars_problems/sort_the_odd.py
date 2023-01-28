def sort_array(source_array):
    even_numbers = list(filter(lambda x: x % 2 == 0, source_array))
    odd_numbers = list(filter(lambda x: x % 2 != 0, source_array))
    odd_numbers.sort()
    
    new_list = []
    for i in source_array:
        if i % 2 == 0:
            new_list.append(even_numbers.pop(0))
        else:
            new_list.append(odd_numbers.pop(0))
    print(new_list)
    return new_list
