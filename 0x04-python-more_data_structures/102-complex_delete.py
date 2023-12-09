#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    delt = [key for key, val in a_dictionary.items() if val == value]
    for key in delt:
        del a_dictionary[key]
    return a_dictionary
