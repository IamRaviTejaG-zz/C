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
    sum = dig1+dig2+dig3;
    printf("\n\nSum of digits of the number %d is: %d", a, sum);
}
