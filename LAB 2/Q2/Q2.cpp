#include<bits/stdc++.h>
#include<chrono>
#include"firstvalpos.h"
#include"minindex.h"
using namespace std;


int main()
{
	int arr[SIZE];
	int i=0,e=0;
	for(i=0;i<SIZE;i++)
	{
		arr[i]=-1;
	}
	cout<<"Enter the members of the array"<<endl;
	for(i=0;i<SIZE;i++)
	{
		cin>>arr[i];
		if(arr[i]==-1)
			break;
	}
	
	//Method 1
	auto start=chrono::high_resolution_clock::now();
	ios_base::sync_with_stdio(false);
	
	cout<<"First -1 is found at "<<positionlin(arr,SIZE,-1)+1<<" position"<<endl;
	
	auto end=chrono::high_resolution_clock::now();
	double time_taken1=chrono::duration_cast<chrono::nanoseconds>(end-start).count();
	time_taken1 *=1e-9;

	cout<<"Time taken is "<<fixed<<time_taken1<<setprecision(10)<<" sec"<<endl;
	
	//Method 2
	start=chrono::high_resolution_clock::now();
	ios_base::sync_with_stdio(false);
	
	cout<<"First -1 is found at "<<positionbin(arr,SIZE,-1)+1<<" position"<<endl;
	
	end=chrono::high_resolution_clock::now();
	double time_taken2=chrono::duration_cast<chrono::nanoseconds>(end-start).count();
	time_taken2 *=1e-9;

	cout<<"Time taken is "<<fixed<<time_taken2<<setprecision(10)<<" sec"<<endl;	
	
	//Method 3
	start=chrono::high_resolution_clock::now();
	ios_base::sync_with_stdio(false);
	
	cout<<"First -1 is found at "<<position(arr,SIZE,-1,0)+1<<" postion"<<endl;
	
	end=chrono::high_resolution_clock::now();
	double time_taken3=chrono::duration_cast<chrono::nanoseconds>(end-start).count();
	time_taken3 *=1e-9;

	cout<<"Time taken is "<<fixed<<time_taken3<<setprecision(10)<<" sec"<<endl;
	
	double time[3]={time_taken1,time_taken2,time_taken3};
	cout<<"The logic "<<minindex(time,3)+1<<" takes least time"<<endl;
	
	return 0;
}
