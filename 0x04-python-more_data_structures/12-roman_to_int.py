#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str):
        return 0
    roman = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    sum = 0
    prev = 0
    for i in roman_string:
        if i in roman:
            current = roman[i]
            if current > prev:
                sum += current - prev * 2
            else:
                sum += current
            prev = current
        else:
            return 0
    return sum
