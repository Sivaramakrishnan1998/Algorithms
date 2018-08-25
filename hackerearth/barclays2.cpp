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