#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(1);

	// iterating the vector

	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i){
		cout<<*i	<<" ";	
	} 
	//sort function

	sort(v.begin(), v.end());
	cout<<'\n';

	//loop for printing out the contents of the vector


	for(auto const& c : v) 
		cout<<c<<' ';






	return 0;
}