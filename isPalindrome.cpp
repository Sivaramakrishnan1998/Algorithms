#include<bits/stdc++.h>
#include<string>
using namespace std;

int isPalindrome(std::string s)
{
  string s1=s;

  reverse(s1.begin(), s1.end());
   int x = s1.compare(s);

  return x;
}

int main()
{
  string str;
  char input[100],a;


  fgets(input,100,stdin);

  int i=0,j,k,iptr,len=strlen(input);
  //cout<<len;
  for(;i<len;i++)
  {
    if(input[i]!=' ') {
        a = input[i];

        str += a;
    }

    if(input[i]==' '||i==len-1)
    {

      if(isPalindrome(str))
      {
        cout<<str+" ";
      }

      str.clear();
    }

  }
  return 0;
}
