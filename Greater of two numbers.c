#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the two numbers: \n\n");
	scanf("%d\n%d", &a, &b);
	if (a>b)
	{
		printf("\n%d is larger.", a);
	}
	else
	{
		printf("\n%d is larger.", b);
	}
	
	return 0;
}
