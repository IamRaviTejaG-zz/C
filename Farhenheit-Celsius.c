#include<stdio.h>

void main()
{
	system("cls");
	int a;
	float b,c,d,e;
	printf("Press 1 to convert Farhenheit to Celsius.\nPress 2 to convert Celsius to Farhenheit.\n\nEnter your choice: ");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			printf("\n\nEnter temperature in Farhenheit: ");
			scanf("%f", &b);
			c = ((b - 32)*5)/9;
			printf("\n\n");
			printf("%f", c);
			break;
		case 2:
			printf("\n\nEnter temperature in Celsius: ");
			scanf("%f", &e);
			d = (e*(1.8)) + 32;
			printf("\n\n");
			printf("%f", d);
			break;
		default:
			printf("\n\nInvalid Choice.");
			break;
	}
}
