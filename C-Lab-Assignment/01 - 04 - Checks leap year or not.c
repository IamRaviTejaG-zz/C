#include<stdio.h>

main()
{
    int year;
    printf("Enter a year to check if its a leap year or not: ");
    scanf("%d", &year);
    if (year%4==0)
        printf("\n\n%d is a leap year.", year);
    else
        printf("\n\n%d is not a leap year.", year);
}
