#include<stdio.h>

main()
{
    int a, b=2, count=0;
    printf("Enter a number to check if its prime or composite: ");
    scanf("%d", &a);
    while(b<a)
    {
        if(a%b==0)
        {
            count++;
        }
        b+=1;
    }
    if (count==0)
    {
        printf("%d is prime.", a);
    }
    else
    {
        printf("%d is composite.", a);
    }
}
