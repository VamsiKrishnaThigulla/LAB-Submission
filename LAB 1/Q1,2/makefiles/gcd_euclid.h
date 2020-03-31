#include<math.h>

int gcd_euc(int a,int b)
{
	if(a==0)
	{	
		return abs(b);
	}
	else	
		return gcd_euc(b%a,a);	
}

int gcdi_euc(int a,int b)
{
	int temp;
	while(a!=0)
	{
		temp=a;
		a=b%a;
		b=temp;
	}
	return abs(b);
}
