# -*- coding: utf-8 -*-    
# number = raw_input("Enter the secret number")
# numberString = str( number )
# guess = raw_input("Enter M2's guess\n")
# count =0
def game(numberString,guess):

	while guess != numberString:
	    cows, bulls = 0, 0
	    for i in range( len( guess ) ):
	        if guess[ i ] == numberString[ i ]:
	            cows += 1
	        elif guess[ i ] in numberString:
	            bulls += 1
	    print ("Enter M1’s hint\n"+str(cows)+"A"+str(bulls)+"B\n")
	    count+=1
	    a = count
	    guess = raw_input( "Enter M2's guess\n" )
	return a

#print ("You guessed it! The number was", numberString,count+1)
#print ("Correct!!! M2 took "+str(count+1)+" guesses!!!")
number = raw_input("Enter the secret number")
numberString = str( number )
guess = raw_input("Enter M2's guess\n")
a = game(numberString,guess)
print(a)