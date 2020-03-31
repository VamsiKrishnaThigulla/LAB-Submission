#include<bits/stdc++.h>
using namespace std;


void TOWERS(int n, char starting, char destination, char middle) //n is number of disks
{
	if(n==1)
	{
		cout<<"Move disk 1 from "<<starting<<" to "<<destination<<endl;
		return;
	}
	else
	{
		TOWERS(n-1,starting,middle,destination);
		cout<<"Move disk "<<n<<" from "<<starting<<" to "<<destination<<endl;
		TOWERS(n-1,middle,destination,starting);
	}
}

int TOWERScount(int n, char starting, char destination, char middle)
{	
	int steps=0;
	if(n>0)
	{
		steps=TOWERScount(n-1,starting,middle,destination);
		steps++;
		steps+=TOWERScount(n-1,middle,destination,starting);
	}
	return steps;
}

void Towers_of_Hanoi(int n, char starting, char destination, char middle)
{
	cout<<"The steps to move "<<n<<" disks from "<<starting<<" rod to "<<destination<<" rod are "<<endl;
	TOWERS(n,starting,destination,middle);
	
	cout<<"The number of steps needed to accomplish the task is "<<TOWERScount(n,starting,destination,middle);
}
