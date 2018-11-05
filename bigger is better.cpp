#include<cstring>
#include <bits/stdc++.h>

using namespace std;

//#***next lexicographical permutation algorithm***#
// 1.find longest non-increasing suffix array
// 2.find pivot element
//3.next big element of pivot
// 4.replace pivot element with successor of pivot element in the suffix array (i.e)swap(pivot,pivotSuccesor)
// 5.reverse the suffix subarray

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int   i,j,greaterPivot,start,end,length,suffixStart_Index,temp,temp2=0,pivot,check=0,count=0;
        char ch;
        char word[100];
        cin>>word;
        i = strlen(word)-1;
        while(i>0&&word[i-1]>=word[i])
        {
            i--;
        }
        if(i<=0)
        {
                cout<<"no answer"<<endl;

        }
        else
        {

        pivot = i-1;

        //cout<<pivot;

        greaterPivot = strlen(word)-1;
        while(word[greaterPivot]<=word[pivot])
            greaterPivot--;

        ch = word[pivot];
        word[pivot] = word[greaterPivot];
        word[greaterPivot] = ch;

        j = strlen(word)-1;

        while(i<j)
        {
            ch = word[i];
            word[i]=word[j];
            word[j]=ch;
            i++;
            j--;
        }
          cout<<word<<endl;
        }


    }
return 0;
}
