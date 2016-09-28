#include<stdio.h>

int gcd(int a, int b)
{
    int i, gcd;
    for(i=2; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
    return gcd;
}

main()
{
    int a, b;
    printf("Enter the numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));
}
