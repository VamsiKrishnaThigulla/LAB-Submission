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

int binaryMultiply(int binary1,int binary2)
{
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
    return multiply;
}

long int binaryAddition(long int binary1,long int binary2)
{
    long i=0,remainder = 0,sum[20];
    long int binarySum=0;
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

long int binaryMultiply(long int binary1,long int binary2)
{
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
    return multiply;
}
