#include<stdio.h>

main()
{
    int a, i;
    printf("Enter a number to see its multiplication table till 10: ");
    scanf("%d", &a);
    for (i= 1; i<=10; i++)
    {
        printf("\n%d x %d = %d", a, i, a*i);
    }
}
