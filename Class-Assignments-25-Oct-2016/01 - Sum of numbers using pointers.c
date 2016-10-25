#include<stdio.h>

main()
{
    int a, b, *c, *d, sum;
    printf("Enter the numbers: ");
    scanf("%d%d", &a, &b);
    c = &a;
    d = &b;
    sum = *c + *d;
    printf("\n\nSum of the numbers is: %d", sum);
}
