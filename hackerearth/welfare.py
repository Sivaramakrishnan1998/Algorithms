
import numpy as np

##for rounding off function upto 4 decimal places 
##not advised exceeds time limit
# from math import ceil, floor
# def float_round(num, places = 0, direction = floor):
#     return direction(num * (10**places)) / float(10**places)



c = []





for i in range(7):

	a = int(input())
# 	b = [int(x) for x in str(a)]
	b =list(filter((0).__ne__, [int(x) for x in str(a)]))#for input removing zeros
	j = len(b)
	c.append(j)
dec = np.std(c)#standard deviation
print (format(dec, '7.4f'))#for format specifier

# print (np.std(c))
	


