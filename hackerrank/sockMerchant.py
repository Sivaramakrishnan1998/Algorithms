
no = int(input())
pairs = list(map(int,input().split()))
# data structure stack
class Stack:

	def __init__(self):
		self.items = []

	def isEmpty(self):
		return self.items == []

	def push(self, item):
		self.items.append(item)

	def pop(self):
		return self.items.pop()
pairs = sorted(pairs)
s = Stack()
count = 0
for i in range(len(pairs)):
	if pairs[i] in s.items:
		s.pop()
		count+=1
	else:
		s.push(pairs[i])

print (count)
# print (s.items)		




