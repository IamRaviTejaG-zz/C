#include<stdio.h>

main()
{
    int a, b, *x, *y, temp, c, d;
    printf("Enter the two numbers: \n\n");
    scanf("%d\t%d", &a, &b);
    system("cls");
    x = &a;
    y = &b;
    printf("Initially, numbers were:\n\n");
    printf("A: %d", *x);
    printf("\nB: %d", *y);
    temp = x;
    x = y;
    y = temp;
    c = *x;
    d = *y;
    printf("\n\n\nNow, numbers are:\n\n");
    printf("A: %d", *x);
    printf("\nB: %d", *y);
}
