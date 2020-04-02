#include<bits/stdc++.h>
#include"test1.h"

using namespace std;

int main()
{

	int n1;
	cout<<"enter the size of array"<<endl;
	cin>>n1;
	int arr1[n1];
	cout<<"enter"<<n1<<"elements"<<endl;
	for (int i = 0; i < n1; ++i)
	{
		cin>>arr1[i];
		/* code */
	}
	struct test1 t1=comp1(arr1,n1);
	cout<<"max="<<t1.max1<<endl;
	cout<<"min="<<t1.min1<<endl;
}
