#include<bits/stdc++.h>
using namespace std;
int main()
{

	//SET

	set<int> myset;

	myset.insert(2);
	myset.insert(1);
	myset.insert(0);//myset={0,1,2} //set sorts  during insertion itself
 
 	set<int>::iterator it;

 	it = myset.find(2);//o(log(n))

 	pair<set<int>::iterator,bool> ret;

 	ret = myset.insert(2);//2 already exists in myset so no insertions takes place


 	if(ret.second==false){
 		it = ret.first;
 	}

 	myset.insert(it,9);//myset={0,1,2,9}
 	                   //it acts as a hint in insert operation ,leads to faster insertion

 	myset.erase(it);//myset={0,1,9}

 	myset.erase(0);//myset={1,9}

 	/***************************************************************************************************************************************************************************/
 
 	//multiset

 	//it is a set but it allows duplicate elements 
 	//value in the multiset cannot be modified
 	//it is read only


 	//properties 
 	//faster search
 	//traversing is slow
 	//no random access that is no '[]' operator



 	/***************************************************************************************************************************************************************************/

    //map
    
    map<char,int> mymap;

    mymap.insert(pair<char,int>('a',100));

    mymap.insert(make_pair('z',200));

    std::map<char, int>::iterator it = mymap.begin();

    mymap.insert(it,make_pair('b',300));

    it = mymap.find('z');



    for(auto const &c : mymap){
    	cout<<c.first<<"=>"<<c.second<<'\n';
    }	


    //multimap multimap<char,int> multimap_name;

    //it is expressed as
    //multimap<const char,const int> multimap_name;







	return 0;
}	