#!/bin/python3

import sys

def solve(year):
    # Complete this function
    if year == 1918:
        d = "26"+"."+"09"+"."+"1918"
        
    else:
        
        if ((year<1918 and year%4==0) or (year%4==0 and year%100!=0) or year%400==0):
            a='12'
            b='09'
            c=str(year)
            d = a+"."+b +"."+c
        else:
            a='13'
            b='09'
            c=str(year)
            d = a+"."+b +"."+c
    return d    

year = int(input().strip())
result = solve(year)
print(result)
