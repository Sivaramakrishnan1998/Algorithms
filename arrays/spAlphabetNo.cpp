  // CPP program to find type of input character
  #include<bits/stdc++.h>
  using namespace std;

  void charCheck(char input_char)
  {
  	// CHECKING FOR ALPHABET
  	if ((input_char >= 65 && input_char <= 122))
  		cout << " Alphabet ";

  	// CHECKING FOR DIGITS
  	else if (input_char >= 48 && input_char <= 57)
  	cout << " Digit ";

  	// OTHERWISE SPECIAL CHARACTER
  	else
  	cout << " Special Character ";
  }

  // Driver Code
  int main()
  {
  char input_cha[1000];
  fgets(input_cha,1000,stdin);
  int small =0,dig = 0,sp = 0,big = 0;
  int len = strlen(input_cha);
  for(int i=0;i<len;i++)
  {
      char input_char = input_cha[i];

      // CHECKING FOR ALPHABET
      if ((input_char >= 65 && input_char <= 90))
       {
        big++;
        if(big>1) big =1;}

      else if((input_char >= 97 && input_char <= 122))
      {
       small++;
       if(small>1) small =1;
      }

      // CHECKING FOR DIGITS
      else if (input_char >= 48 && input_char <= 57)
      {
       dig++;
       if(dig>1) dig =1;}

      // OTHERWISE SPECIAL CHARACTER
      else
      {
       sp++;
       if(sp>1) sp =1;
     }
  }
  int sum = dig + big + small + sp;
  if(sum!=4&&len>5)
  cout<<4-sum;
  else if(sum==4 && len<6)
  cout<<6-len;

  return 0;
  }
