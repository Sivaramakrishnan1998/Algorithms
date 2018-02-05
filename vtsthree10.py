import random
def cowsAndBulls(answer, guess):
	cow=0
	bull=0
	for x in range(0,4):
		if answer[x]==guess[x]:
			cow+=1
		if answer.find(guess[x])!=-1:
			bull+=1
	return cow, bull		

if __name__ == "__main__":
	answer = str(random.randint(1000,9999))
	print("Cows and Bulls")
	print("**************")
	#print(answer)
	print("Enter a four digit guess")
	win=False
	attempts=1
	while win==False:
		guess=str(input("Guess a number:"))
		cows, bulls = cowsAndBulls(answer, guess)
		cows=str(cows)
		bulls=str(bulls)
		if cows=="1":
			if bulls=="1":
				print(cows, "cow,",bulls,"bull")
			else:
				print(cows, "cow,",bulls,"bulls")
		else:
			if bulls=="1":
				print(cows, "cows,",bulls,"bull")
			else:
				print(cows, "cows,",bulls,"bulls")
		if cows=="4":
			win=True
			print ("You guessed the number in",attempts,"tries!")

			break
		attempts+=1