#include<stdio.h>

main()
{
    int a, b, *c, *d, prod;
    printf("Enter the numbers: ");
    scanf("%d%d", &a, &b);
    c = &a;
    d = &b;
    prod = *c * *d;
    printf("\n\nSum of the numbers is: %d", prod);
}
