#include<cstdlib>
#include<vector>
#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;

int compare(void *a,void *b)
{
    return (*(int *)a - *(int *)b);

}

int decimaltobinary(int num)
{
    int decimalval=0,rem,base=1;
    while(num>0)
    {
        rem = num%10;
        decimalval+=rem*base;
        base*=2;
        num/=10;
    }
    return decimalval;
}
int bitwiseAdd(string topic1,string topic2)
{
  string output;int i,count=0;
  output.resize(topic1.size());
    for(i=0;i<topic1.size();i++)
    {
        output[i] = (topic1[i]=='1'||topic2[i]=='1')?'1':'0';
        if(output[i]=='1')count++;
    }
    return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num,sub,i,iptr,jptr;
    cin>>num>>sub;

    vector<string>topic(num);

    for(i=0;i<num;i++)
    {
        cin>>topic[i];
    }
    vector<int>countOnes;

    for(iptr=0;iptr<num;iptr++)
    {
        for(jptr=iptr+1;jptr<num;jptr++)
        {
            countOnes.push_back(bitwiseAdd(topic[iptr],topic[jptr]));

        }
    }

    //qsort(countOnes,size,sizeof(int),compare);
    sort(countOnes.begin(),countOnes.end(),greater<int>());

    for(i=1;countOnes.size();i++)
    {
      if(countOnes[i]!=countOnes[0])
      {
          cout<<countOnes[0]<<endl<<i<<endl;
          break;
      }
    }
    return 0;

}
