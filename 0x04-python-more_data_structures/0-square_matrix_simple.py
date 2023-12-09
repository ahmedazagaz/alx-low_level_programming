#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    square = [list(row) for row in matrix]
    for i in square:
        for j in range(len(i)):
            i[j] = i[j] ** 2
    return square
