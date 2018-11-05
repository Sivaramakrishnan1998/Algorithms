#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::vector<int> vec;

	// stdandard functions

	vec.empty();//check whether vector is empty;

	vec.size()://prints size of the vector

	std::vector<int> vec2(vec);//copies contents of vec ->  vec2

	vec.empty();//removes all contents of vec 

	vec2.swap(vec);//vec2 data is shifted or swapped to vec ;vec2 becomes empty



	return 0;
}