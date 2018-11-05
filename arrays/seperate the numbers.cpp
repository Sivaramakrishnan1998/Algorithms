#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::string str,temp;
    getline(cin,str);
    int len = str.size(),iptr,jptr,i,num1,num2,arr[len],generatedArr[len],num;
    i = 0;
    while(str[i])
    {
        num = str[i]-'0';
        arr[i]= num;
        i++;
    }
    i = 0;
    int k=0;
    iptr = i;
    jptr = i+1;
    while(jptr<len&&iptr!=len-1)
    {
        iptr = i;
        jptr = i+1;
        if(arr[jptr]>arr[iptr])
        {
            generatedArr[k] = arr[iptr];k++;
            i=  jptr;
            iptr =i;

        }
        else if(arr[jptr]<arr[iptr])
        {
            num2 = arr[jptr]*10 + arr[jptr+1];
            generatedArr[k] = arr[i];
            k++;
            i = jptr+1;
            arr[i] = num2;


        }


    }

 for(i=0;i<k;printf("%d ",generatedArr[i]),i++);


    return 0;
}
