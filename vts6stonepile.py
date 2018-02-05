n = int(input())
stone = list(map(int,raw_input.split()))
stone = sorted(stone)
if(len(stone)%2==0):
	mid = len(stone)/2
	val = stone[mid]-1
	for i in range(stone(0,len(stone))):
		while stone[i]<=val:
			stone[i]+=1
			count+=1
			pass



else:
	mid = (len(stone)+1)/2
	val = stone[mid]-1
	for i in range(stone(0,len(stone))):
		while stone[i]<=val:
			stone[i]+=1
			count+=1
			pass	
print(count)