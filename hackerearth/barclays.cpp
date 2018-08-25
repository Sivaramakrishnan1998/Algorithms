#include <bits/stdc++.h>
using namespace std;

int isSeqOne(int num){
	int prev,now,next,bin;
	prev = now = 0;
	while (num)
    {
        bin = num % 2;
        now = bin;
        if(now&prev)
        	return 1;
        num /= 2;
        prev = now;
    }
    return 0;
}
int main()
{
	int lim;
	cin>>lim;
	int arr[lim+1],dp[lim+1];

	memset(dp,-999,lim);

	for(int i=0;i<lim;scanf("%d",&arr[i]),i++);

	for(int i=0;i<lim;i++){
		dp[i] = isSeqOne(arr[i]);
	}	

    printf("|");
	for(int i=0;i<lim;printf("%d |",dp[i]),i++);
	


	return 0;
}