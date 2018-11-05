#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int low,int data,int high)
{
if(low>high)
return 0;

int mid = (low+high)/2;
if(data==mid)
return true;

if(data<mid)
return binarySearch(arr,low,data,(mid-1));
else
return binarySearch(arr,(mid+1),data,high);

}
int main()
{
int sizee,d;
cin>>sizee>>d;
int arr[sizee];
for(int i=0;i<sizee;scanf("%d",&arr[i]),i++);

int ct=0,i;

for(i=0;i<sizee;i++)
{
int c = arr[i]+d;
if(binarySearch(arr,0,c,sizee-1))
{
if(binarySearch(arr,0,c+d,sizee-1))ct++;


}
else
continue;


}
cout<<ct<<endl;

return 0;
}
