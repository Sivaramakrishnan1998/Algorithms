#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
char *removeDuplicates(char str[],int n)
{
	set<char>s (str,str+n-1);
	int i = 0;
	for(auto x:s)
		str[i++] = x;
	str[i] = '\0';
	return str;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char input[100];
    string str;
    int start,end,len,iptr,jptr,i,j,lim;int Freq[26] = {0};
    cin>>input;
    str = removeDuplicates(input,strlen(input)+1);
    cout<<str;
    return 0;
}