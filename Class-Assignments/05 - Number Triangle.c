#include<stdio.h>

main()
{
    int a,b,c,d;
    printf("Enter the number of lines: ");
    scanf("%d", &a);
    for (b=1; b<=a; b++)
    {
        for (c=1; c<=b; c++)
        {
            printf("%d", c);
        }
        for (d=b-1; d>0; d--)
        {
            printf("%d", d);
        }
        printf("\n");
    }
}
