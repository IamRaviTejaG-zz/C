#include <stdio.h>

main()
{
    int a, b, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &a);
    b = a;
    while(a != 0)
    {
        rem = a%10;
        rev = rev*10 + rem;
        a /= 10;
    }

    printf("%d in reverse is: %d", b, rev);
}
