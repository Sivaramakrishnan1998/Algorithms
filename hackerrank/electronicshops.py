#!/bin/python3

import sys

def getMoneySpent(keyboards, drives, s,n,m):
    # Complete this function
    org =[]
    for i in range(len(keyboards)):
        for j in range(len(drives)):
            c = keyboards[i]+drives[j]
            org.append(c)
    for i in range(len(org)):
        if org[i]>s:
            org[i]=0

    x = max(org)
    
    if x>0:
        return x
    else: 
        return -1    
s,n,m = input().strip().split(' ')
s,n,m = [int(s),int(n),int(m)]
keyboards = list(map(int, input().strip().split(' ')))
drives = list(map(int, input().strip().split(' ')))
#  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
moneySpent = getMoneySpent(keyboards, drives, s,n,m)
print(moneySpent)
