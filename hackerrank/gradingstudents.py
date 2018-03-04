#!/bin/python3

import sys

def solve(grades):
    # Complete this function
    for i in range(len(grades)):
        a = int(grades[i]/5)
        b = a*5+5
        if b-grades[i]<3 and grades[i]>=38:
            grades[i]=b
    return grades        

n = int(input().strip())
grades = []
grades_i = 0
for grades_i in range(n):
   grades_t = int(input().strip())
   grades.append(grades_t)
result = solve(grades)
print ("\n".join(map(str, result)))


