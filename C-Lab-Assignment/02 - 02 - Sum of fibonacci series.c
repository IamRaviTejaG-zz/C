#include<stdio.h>

fib(int n)
{
    static int a = 0, b = 1, sum = 0, total = 0;
    while (n>0)
    {
        sum = a + b;
        a = b;
        b = sum;
        n-=1;
        fib(n);
    }
    printf("\n\nSum: %d", total);
}

main()
{
    int a;
    printf("Enter a number to see the sum of Fibonacci series till there: ");
    scanf("%d", &a);
    fib(a);
}
