#include<stdio.h>

int xn(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    else if (n == 1)
    {
        return x;
    }

    else
    {
        return x*xn(x, n-1);
    }
}

main()
{
    int a, b;
    printf("Enter the values x and n: ");
    scanf("%d%d", &a, &b);
    printf("%d", xn (a, b));
}
