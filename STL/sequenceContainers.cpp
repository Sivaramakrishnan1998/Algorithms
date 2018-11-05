#include<bits/stdc++.h>
#include <list>
using namespace std;
int main()
{
	//vector******/
	std::vector<int> vec;

	// stdandard functions

	vec.empty();//check whether vector is empty;

	vec.size()://prints size of the vector

	std::vector<int> vec2(vec);//copies contents of vec ->  vec2

	vec.empty();//removes all contents of vec 

	vec2.swap(vec);//vec2 data is shifted or swapped to vec ;vec2 becomes empty

	// properties of std::vector<> v;

	// fast insert or remove at the beginning
	// slow insert or remove at the middle::o(n)
	// slow search::o(n)

// *****************************************************************************************************************************************************************




    // deque

    deque<int> deq = {4,6,7};
    deq.push_back(9);
    deq.push_front(3);



	// properties of std::deque<int> deq;

	// fast insert or remove at the beginning and the end
	// slow insert or remove at the middle::o(n)
	// slow search::o(n)



// *****************************************************************************************************************************************************************




    //list



    list<int> listA = {4,6,7,5,54};
    listA.push_back(9);// 4 6 7 5 54 9
    listA.push_front(3);//3 4 6 7 5 54 9 


    list<int>::iterator itr = find(listA.begin(),listA.end(),6);//itr->6
    listA.insert(itr,8);// 3 4 8 6 7 5 54 9
                        //o(n) faster insertion

    itr++;//itr-> 7

    //splice function ,cuts an subarray or portion from any large subarray in linear time


    list<int> mylist1;
    list<int> mylist2={1,2,3,4,5,6,7,8,9,10};

    mylist1.splice(itr,mylist2,itr_a,itr_b);

    //itr->mylist1 starting position
    //itr_a->subarray starting position
    //itr_b->subarray ending position




	// properties of std::list<int> listA;

	// fast insert or remove at any place
	// no random access (i.e) no '[]' operator
	// slow search::o(n)
    	



// *****************************************************************************************************************************************************************


//array container

    array<int ,3> a={1,2,3};

    a.begin();
    a.end();
    a.swap();
    a.size();



// *****************************************************************************************************************************************************************



	return 0;
}