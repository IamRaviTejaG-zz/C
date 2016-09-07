#include <stdio.h>

void main()
{
	int a,n,x;
	printf("Enter the value of n & x: ");
	scanf("%d\n%d", &n, &x);
	
	if (n==1)
	{
		a = 1+x;
		printf("\n%d", a);
	}
	
	else if (n==2)
	{
		a = 1+(x/n);
		printf("\n%d", a);
	}
	
	else if (n==3)
	{
		a = 1+(x^n);
		printf("\n%d", a);
	}
	
	else
	{
		a = 1+(x*n);
		printf("\n%d", a);
	}
}
