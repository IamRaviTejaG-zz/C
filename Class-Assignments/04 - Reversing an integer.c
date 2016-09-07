#include<stdio.h>

main()
{
    int dig1, dig2, dig3, a, b, sum;
    printf("Enter the number: ");
    scanf("%d", &a);
    dig1 = a/100;
    b = a%100;
    dig2=b/10;
    dig3=b%10;
    while(dig1!=0)
    {
        printf("\n\nDigits of the number %d in reverse is: %d%d%d", a, dig3, dig2, dig1);
        break;
    }
    while(dig1==0)
    {
        printf("\n\nDigits of the number %d in reverse is: %d%d", a, dig3, dig2);
        break;
    }
}
