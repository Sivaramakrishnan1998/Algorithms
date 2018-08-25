#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str[10], temp;
  int lim;
  cin>>lim;
  for(int i = 0; i < lim;cin>>str[i],i++);
  for(int i = 0; i < lim; i++)
     for( int j = i+1; j < lim; j++)
     {
        if(str[i] > str[j])
        {
          temp = str[i];
          str[i] = str[j];
          str[j] = temp;
        }
  }

cout << "     lexicographical order:   " << endl;

  for(int i = 0; i < lim ; i++)
  {
     cout << str[i] << endl;
  }
  return 0;
}