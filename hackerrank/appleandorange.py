#!/bin/python3

import sys

def countApplesAndOranges(s, t, a, b, apples, oranges):
    # Complete this function
    c,c1 = 0,0
    for i in range(len(apples)):
        apples[i]=a+apples[i]
        if s <= apples[i]<=t:
            c+=1
    for i in range(len(oranges)):
        oranges[i]=b+oranges[i]
        if s<=oranges[i]<=t:
            c1+=1    
    print (c)
    print (c1)
    
if __name__ == "__main__":
    s, t = input().strip().split(' ')
    s, t = [int(s), int(t)]
    a, b = input().strip().split(' ')
    a, b = [int(a), int(b)]
    m, n = input().strip().split(' ')
    m, n = [int(m), int(n)]
    apple = list(map(int, input().strip().split(' ')))
    orange = list(map(int, input().strip().split(' ')))
    countApplesAndOranges(s, t, a, b, apple, orange)
