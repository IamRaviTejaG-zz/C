#include<stdio.h>

main()
{
    float a, b;
    printf("Enter temperature in Celsius to convert it into Farhenheit: ");
    scanf("%f", &a);
    b = 32 + (1.8*a);
    printf("\n\n%.2f Celsius is %.2f Farhenheit.", a, b);
}
