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