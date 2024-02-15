Python 3.9.13 (tags/v3.9.13:6de2ca5, May 17 2022, 16:36:42) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def find_largest_number(numbers):
    if not numbers:
        return None  # Return None for an empty list
    max_num = numbers[0]  # Initialize max_num with the first element of the list
    for num in numbers:
        if num > max_num:
            max_num = num  # Update max_num if a larger number is found
    return max_num

# Example list of numbers
numbers_list = [23, 56, 12, 89, 43, 7]

# Call the function and print the result
largest_number = find_largest_number(numbers_list)
print(f"The largest number in the list {numbers_list} is: {largest_number}")
