#include<stdio.h>
#include<string.h>

main()
{
    char str1[20];
    int i, k, l = 0;
    printf("Enter the string: ");
    gets(str1);
    k = strlen(str1);
    for (i=0; i<k; i++)
    {
        if (str1[i] != str1[k-i-1])
        {
            l++;
            break;
        }
    }
    if (l==0)
    {
        printf("\n\nThe string is palindrome.");
    }
    else
    {
        printf("\n\nThe string is not palindrome.");
    }
}
