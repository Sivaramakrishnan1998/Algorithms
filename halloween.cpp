
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int start,d,m,price,count=0,sum=0;
    cin>>start>>d>>m>>price;

    while(sum<=price)
    {
    sum += start;

    //cout<<start<<endl;
    start -= d;
    if(start<m)
    {
    start = m;
    }
    count++;

    }
cout<<count-1<<endl;
    return 0;
}
