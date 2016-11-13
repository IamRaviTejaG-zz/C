#include<stdio.h>

main()
{
    int a, i;
    printf("Enter a number to see the list of its divisors: ");
    scanf("%d", &a);
    printf("\n\n");
    for (i=2; i<a; i++)
    {
        if (a%i==0)
            printf("%d\t", i);
    }
}
