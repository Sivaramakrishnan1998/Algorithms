#!/bin/python3

import sys

def divisibleSumPairs(n, k, ar):
    c = 0
    for i in range(len(ar)):
        for j in range(1,len(ar)):
            o = ar[i]+ar[j]
            if o%k==0 and i<j:
                c+=1
    return c

    # Complete this function

n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
result = divisibleSumPairs(n, k, ar)
print(result)
