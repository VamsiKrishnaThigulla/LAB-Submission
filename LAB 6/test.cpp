#include<bits/stdc++.h>
#include"test.h"

using namespace std;

int main()
{
	int number;
	cout<<"enter the size"<<endl;
	cin>>number;
	int arr[number];
	cout<<"enter"<<number<<"elements"<<endl;
	for (int i = 0; i < number; ++i)
	{
		cin>>arr[i];
	}
	struct test t=comp(arr,number);
	cout<<"max="<<t.max<<endl;
	cout<<"min="<<t.min<<endl;

}
