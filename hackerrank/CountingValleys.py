#!/bin/python3

import sys

def countingValleys(n, s):
    # Complete this function
    upW,dwW,ans=0,0,0
    for i in range(len(s)):
        temp = upW
        if s[i]=="U":
            upW+=1
        else:
            upW-=1
        if upW==0 and temp<0:
            ans+=1
    return ans            

if __name__ == "__main__":
    n = int(input().strip())
    s = input().strip()
    result = countingValleys(n, s)
    print(result)
