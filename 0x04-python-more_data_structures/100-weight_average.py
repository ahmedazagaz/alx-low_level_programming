#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0
    else:
        x = sum([i[0] * i[1] for i in my_list]) / sum([i[1] for i in my_list])
        return x
