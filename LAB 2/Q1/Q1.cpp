#include<bits/stdc++.h>
#include<chrono>
#include"Sumexist.h"
#include"minindex.h"
using namespace std;



int main()
{
	int size,p;
	cout<<"Enter the number of integers in the array"<<endl;
	cin>>size;
	cout<<"Enter the integer for which sum should exist"<<endl;
	cin>>p;
	cout<<"Enter the members of the array"<<endl;
	int i;
	int A[size];
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	
	//Method 1
	auto start=chrono::high_resolution_clock::now();
	ios_base::sync_with_stdio(false);
	
	if(sumexistlin(A,size,p))
	{
		cout<<"There exist two integers in the array such that their sum is equal to "<<p<<endl;
	}
	else
		cout<<"There exist no two integers in the array such that their sum is equal to "<<p<<endl;

	auto end=chrono::high_resolution_clock::now();
	double time_taken1=chrono::duration_cast<chrono::nanoseconds>(end-start).count();
	time_taken1 *=1e-9;

	cout<<"Time taken is "<<fixed<<time_taken1<<setprecision(10)<<" sec"<<endl;

	//Method 2
	start=chrono::high_resolution_clock::now();
	ios_base::sync_with_stdio(false);
	
	if(sumexistbin(A,size,p))
	{
		cout<<"There exist two integers in the array such that their sum is equal to "<<p<<endl;
	}
	else
		cout<<"There exist no two integers in the array such that their sum is equal to "<<p<<endl;

	end=chrono::high_resolution_clock::now();
	double time_taken2=chrono::duration_cast<chrono::nanoseconds>(end-start).count();
	time_taken2 *=1e-9;

	cout<<"Time taken is "<<fixed<<time_taken2<<setprecision(10)<<" sec"<<endl;	
	
	//Method 3
	start=chrono::high_resolution_clock::now();
	ios_base::sync_with_stdio(false);
	
	if(sumexisthash(A,size,p))
	{
		cout<<"There exist two integers in the array such that their sum is equal to "<<p<<endl;
	}
	else
		cout<<"There exist no two integers in the array such that their sum is equal to "<<p<<endl;

	end=chrono::high_resolution_clock::now();
	double time_taken3=chrono::duration_cast<chrono::nanoseconds>(end-start).count();
	time_taken3 *=1e-9;

	cout<<"Time taken is "<<fixed<<time_taken3<<setprecision(10)<<" sec"<<endl;
	
	double time[3]={time_taken1,time_taken2,time_taken3};
	cout<<"The logic "<<minindex(time,3)+1<<" takes least time"<<endl;
	
	return 0;
}
