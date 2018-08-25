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





// find unique charactters
// generate strings from given string ,by removing unique characters 
// do lexicographical sorting
#include<bits/stdc++.h>
using namespace std;;
int main()
{
	string org,dup,temp;
	char  c;
	cin>>org;
	
	set<char> uniq;
	for(int i=0;i<org.size();i++){
		c = org[i];
		uniq.insert(c);
	}
	int lim,len = uniq.size();
	string str[len];

	std::vector<char> output(uniq.begin(), uniq.end()); 
   
	// for(auto const & c:output)
	// 	cout<<c<<" ";

    dup = org;
	for(int i=0;i<len;i++){
        char temp = output[i];
		dup.erase(std::remove(dup.begin(), dup.end(), temp), dup.end());
		str[i] = dup;
		//cout<<str[i]<<"\n";
		dup    = org;
	}

	// lexicographical sorting 
	lim =  len;
	for(int i = 0; i < lim; i++){
	 for( int j = i+1; j < lim; j++){
	    if(str[i] > str[j]){
	      temp = str[i];
	      str[i] = str[j];
	      str[j] = temp;
	    }
	    }
    }

  cout<<str[0];

	return 0;
}



// sort the string in ascending order
// construct substrings
// search given key is present in substrings if present count++

#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cin>>input;
    std::set<string> vec;
	sort(input.begin(),input.end());
    //substring construction
	for(int out=0;out<input.size();out++){
		string temp;
		for(int in=out;in<input.size();in++){
			temp += input[in];
			vec.insert(temp);
		}
		temp = "";
	}
	//set -> vector

	std::vector<string> subStr(vec.begin(), vec.end());

	 

	for(auto const &n:vec) cout<<n<<"  ";

	return 0;
}


