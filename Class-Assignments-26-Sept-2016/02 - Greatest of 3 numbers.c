#include<stdio.h>

int greatest (int x[3])
{
    int i, big = x[0];
    for (i=0; i<3; i++)
    {
        if (x[i] > big)
        {
            big = x[i];
        }
    }
    return big;
}

int sum (int x[3])
{
    int i, sum = 0;
    for (i=0; i<3; i++)
    {
        sum+=x[i];
    }
    return sum;
}

main()
{
    int n, i;
    int big, a[3];
    for (i=0; i<3; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);
        printf("\n");
    }
    printf("\n\nLargest of the three numbers is: %d", greatest(a));
    printf("\n\nSum of the three numbers is: %d", sum(a));
}
