#include<iostream>
#include<math.h>
using namespace std;
int func(int a)
{
	int i,j,k,count=2,tot=1;
	if(a==1)
	return tot;
		for(j=2;j<=a;j++)
		{
			count=1;
			k=sqrt(j);
			for(i=2;i<=k;i++)
			{
				if(j%i==0) 
				count++;
			} 
				tot=tot+count;
		}
			return tot; 
}
int main()
{
	int num;
	cin>>num;
	cout<<func(num)<<endl;
	return 0;

}