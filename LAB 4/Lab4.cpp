#include<bits/stdc++.h>

#include"makefiles4/arrgcdrecdiv.h"
#include"makefiles4/Count.h"
#include"makefiles4/towerhanoi.h"
#include"makefiles4/sorting.h"

using namespace std;

int main()
{
	cout<<"Q1. Given 'n' numbers, compute GCD using DC.   Similarly, LCD."<<endl;
	
	int n; //Number of integers denoted by n
	cout<<"Enter the number of integers in the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the integers in the array"<<endl;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	
	cout<<"GCD of the array of integers is "<<gcdivcon(arr,0,n-1)<<endl;
	cout<<"LCM of the array of integers is "<<lcmdivcon(arr,0,n-1)<<endl;
	
	
	cout<<endl;
	cout<<"Q2. Count the number of 1's in a binary array using DC"<<endl;
	
	int a[100],s;
	cout<<"Enter the size of the array"<<endl;
	cin>>s;
	cout<<"Enter the array"<<endl;
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<"The count of 1's in the array is "<<ct1(a,0,s/2,s)<<endl;
	
	
	cout<<endl;
	cout<<"Q3. Count the number of negative numbers in an integer array using DC"<<endl;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>s;
	cout<<"Enter the array"<<endl;
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<"The count of negative numbers in the array is "<<ctn(a,0,s/2,s)<<endl;
	
	
	cout<<endl;
	cout<<"Q4. Implement Towers of Hanoi."<<endl;
	
	cout<<"Enter the number of disks to be transferred"<<endl;
	cin>>n;
	char rodA='A',rodB='B',rodC='C';
	Towers_of_Hanoi(n,rodA,rodB,rodC);
	cout<<endl;
	
	
	cout<<endl;
	cout<<"Q5. Implement 2-way, 3-way merge sort."<<endl;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int x[n],y[n];
	cout<<"Enter the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		y[i]=x[i];
	}
	cout<<"The sorted array through 2-way MergeSort is "<<endl;
	MergeSort(x,0,n);
	for(i=1;i<n+1;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
	cout<<"The sorted array through 3-way MergeSort is "<<endl;
	MergeSort(y,n);
	cout<<endl;
	
	
	return 0;
}
