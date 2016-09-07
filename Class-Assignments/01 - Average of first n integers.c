#include<stdio.h>

main()
{
    int a, b=1;
    float sum=0.0, avg;
    printf("Enter the number upto which you want to see the average of: ");
    scanf("%d", &a);
    while(b<=a)
    {
        sum+=b;
        b++;
    }
    avg = sum/a;
    printf("\n\nAverage of numbers upto %d is: %f", a, avg);
}
