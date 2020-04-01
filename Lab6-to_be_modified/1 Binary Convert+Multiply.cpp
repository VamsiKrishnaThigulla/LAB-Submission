#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int binaryAddition(int binary1,int binary2)
{
 
    int i=0,remainder = 0,sum[20];
 
    int binarySum=0;
 
    while(binary1!=0||binary2!=0)
 
{
 
         sum[i++] =  (binary1 %10 + binary2 %10 + remainder ) % 2;
 
         remainder = (binary1 %10 + binary2 %10 + remainder ) / 2;
 
         binary1 = binary1/10;
 
         binary2 = binary2/10;
 
    }
 
    if(remainder!=0)
 
         sum[i++] = remainder;
 
    --i;
 
    while(i>=0)
 
         binarySum = binarySum*10 + sum[i--];
 
 
    return binarySum;
}

int main()
{
	int c;
	cout<<"Enter the number"<<endl;
	cin>>c;
	int i=0,j=0;
	stack<int> bin;
	while(c>0)
	{
		bin.push(c%2);
		c/=2;
	}
	int n=bin.size();
	int a[n];
	cout<<"Number in binary is"<<endl;
	for(i=0;i<n;i++)
	{
		if(!bin.empty())
		{
			a[i]=bin.top();
			bin.pop();
		}
		cout<<a[i]<<" ";
	}
	int binary1=0,binary2=0;
	for(i=0;i<n;i++)
	{
		binary1+=a[n-1-i]*pow(10,i);
		binary2+=a[n-1-i]*pow(10,i);
	}
	cout<<binary1<<endl;
	int digit,factor=1;
	int multiply;
	while(binary2!=0)
 
	{
        digit =  binary2 %10;
 
        if(digit ==1)
 
		{
		    binary1=binary1*factor;
 
            multiply = binaryAddition(binary1,multiply);
 
        }
 
        else
            binary1=binary1*factor;
 
        binary2 = binary2/10;
 
        factor = 10;
 
    }
 	cout<<"Binary product of the number is"<<endl;
    cout<<multiply;
    
	return 0;
}
