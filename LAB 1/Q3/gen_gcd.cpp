#include<stdio.h>
#include<math.h>
#include"gen_gcdi.h"
#include"gen_gcdr.h"

int main()
{
	int n;
	printf("Enter the no. of integers\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integers\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int g=gen_gcdr(a,n);
	printf("GCD by recursion is %d\n",g);
	int gi=gen_gcdi(a,n);
	printf("GCD by iteration is %d\n",gi);
	return 0;
}