#include<stdio.h>

main()
{
    int num, dig1, dig2, dig3, sum;
    printf("Enter a three digit number to see its digits' sum: ");
    scanf("%d", &num);
    dig1 = num/100;
    dig2 = (num%100)/10;
    dig3 = num%10;
    sum = dig1 + dig2 + dig3;
    printf("\n\nThe sum of digits of the number %d is %d.", num, sum);
}
