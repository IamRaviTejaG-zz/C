#include<stdio.h>

int factorial (int x)
{
    if (x == 0)
        return 1;
    else
        return x*factorial (x-1);
}

main()
{
    int a, b;
    printf("Enter the number to find its factorial: ");
    scanf("%d", &a);
    printf("%d", factorial (a));
}
