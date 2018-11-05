#include <bits/stdc++.h>
using namespace std;

int compare(const void*ap,const void*bp){
	const int* a= (int*)ap;
	const int* b= (int*)bp;

	if(*a<*b)
		return -1;
	else if(*a>*b)
		return 1;
	else
		return 0;

}


int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10,369};
    int arr_size = sizeof(a)/sizeof(a[0]);
	int key = 369;
	sort(a,a+arr_size);

    // int *p1 = (int *)std::bsearch(&key,a,arr_size,sizeof(arr[0]),compare);
    
    int *p1 = (int *)std::bsearch(&key,a,arr_size,sizeof(a[0]),compare);
    if(p1)
    	cout<<"Index Found "<<p1-a;
	return 0;
}

// loop for displaying an container in cpp

// for(auto const &c: datastructure_name)
//     cout<< c << " ";

