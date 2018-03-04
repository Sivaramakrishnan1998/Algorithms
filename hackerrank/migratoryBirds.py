#!/bin/python3
no = int(input())
types =map(int,input().split())
# data structure stack
# n = len(arr)
# c = []
# for i in range(0, n):
	
# 	if arr[abs(arr[i])] >= 0:
# 		arr[abs(arr[i])] = -arr[abs(arr[i])]
# 	else:
# 		ii = abs(arr[i])
# 		c.append(ii)

# print (min(c))

count = {}
for t in types:
    if t in count.keys():
        count[t] += 1
    else:
        count[t] = 1


max_value = max(count.values())
required_keys = [k for k, v in count.items() if v == max_value]
print (min(required_keys)) 