//a c++ program to find max number formed from an given integer
//eg: input::123456 output::654321
#include <iostream>
using namespace std;
void printmax(int num)
{
	int count[10] = {0};//hash array 
	string str = to_string(num);
	for (int i =0;i<str.length();i++)
		count[str[i]-'0']++;
	int result =0,multiplier =1;
	for(int j=0;j<=9;j++)
	{
		while(count[j]>0)
		{
			result = result + (j*multiplier);
			count[j]--;
			multiplier = multiplier*10;
		}
	}
	cout<<result;
}
int main()
{
	cout<<"Enter the number";
	int num;
	cin>>num;
	printmax(num);
	return 0;
}