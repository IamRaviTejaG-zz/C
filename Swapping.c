#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	int temp = a;
	a = b;
	b = temp;
	printf("A: %d",a);
	printf("\n");
	printf("B: %d",b);
	return 0;
}
