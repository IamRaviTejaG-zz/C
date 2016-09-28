#include<stdio.h>

int fibonacci(int n)
{
    static int j = 0, k = 1, sum;
    if (n>0)
    {
        sum = j + k;
        j = k;
        k = sum;
        printf("\t%d", sum);
        fibonacci(n-1);
    }
}

main()
{
        int a, b, i;
        printf("Enter the number of digits you want to see of the Fibonacci Sequence: ");
        scanf("%d", &a);
        printf("%d\t%d", 0, 1);
        fibonacci(a);
}
