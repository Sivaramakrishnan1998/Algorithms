#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
void sorting(char *ptr,int ind,int start,int end,int size){
  //char *ptr = *(ptr+ind);
  int i,j;
  for(i=0;i<size;i++){
    for(j= start;j<end-i-1;j++){
      if(*(ptr+j)>*(ptr+j+1)){
        char temp = *(ptr+j);
        *(ptr+j)  = *(ptr+j+1);
        *(ptr+j+1) = temp;

      }
    }
  }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char input[20];
    int start,end,len,iptr,jptr,i,j,size,ind;

    cin>>input>>size;
    len = strlen(input);
    for(i=0;i<=len-size;i++){
       ind = i;
       sorting(&input[0],ind,i,i+size,size);
    }

    cout<<input;


    return 0;
}
