#!/usr/bin/python3
def uniq_add(my_list=[]):
    result = 0
    list = []
    for i in my_list:
        if i not in list:
            list.append(i)
            result += i
    return result
