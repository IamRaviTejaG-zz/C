#include<stdio.h>
#include<string.h>

main()
{
    char str1[20], str2[20];
    int a, b;
    printf("Enter first string: ");
    gets(str1);
    printf("\n\nEnter second string: ");
    gets(str2);
    a = str1[0];
    b = str2[0];
    if (a>b)
    {
        printf("\n\n%s", str2);
    }
    else if (a<b)
    {
        printf("\n\n%s", str1);
    }
    else
    {
        printf("\n\nBoth start with the same alphabet.");
    }
}
