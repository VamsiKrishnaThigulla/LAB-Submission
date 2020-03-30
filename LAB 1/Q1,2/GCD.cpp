#include<stdio.h>
#include"gcd_euclid.h"
#include"gcd_brute.h"
#include "gcd_binary.h"

int main()
{
	int a,b;
	printf("Enter the two integers \n");
	scanf("%d%d",&a,&b);
	int g, gi;
	g=gcd_euc(a,b);
	printf("The gcd of %d and %d is %d by euclid's algoritm(recursion)\n",a,b,g);
	gi=gcdi_euc(a,b);
	printf("The gcd of %d and %d is %d by euclid's algoritm (iteration)\n",a,b,gi);
	g=gcd_brute(a,b);
	printf("The GCD of %d and %d is %d by brute force (recursion)\n",a,b,g);
	gi=gcdi_brute(a,b);
	printf("The GCD of %d and %d is %d by brute force (iteration)\n",a,b,gi);
    g=gcd_bin(a,b);
	printf("The GCD of %d and %d is %d by binary method (recursion)\n",a,b,g);
	gi=gcdi_bin(a,b);
	printf("The GCD of %d and %d is %d by binary method (iteration)\n",a,b,gi);
    return 0;
}