#include<stdio.h>

int fact (int x)
{
    int i, fact = x;
    for (i=2; i<x; i++)
    {
        fact*=i;
    }
    return fact;
}

main()
{
    int a, c, n, r;
    printf("Enter 1 to find factorial of a number.\nEnter 2 to find nCr.\nEnter your choice: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        {
            printf("\n\nEnter the number: ");
            scanf("%d", &a);
            printf("Factorial of %d is %d.", a, fact(a));
            break;
        }

        case 2:
        {
            printf("\n\nEnter n & r: ");
            scanf("%d%d", &n, &r);
            printf("%dC%d = %d.", n, r, (fact(n)/(fact(r)*fact(n-r))));
            break;
        }

        default:
        {
            printf("\n\nInvalid Choice.");
            break;
        }
    }
}
