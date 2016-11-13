#include<stdio.h>

main()
{
    char str[100], i, j, flag = 0;
    printf("Enter the string to check if its palindrome: ");
    gets(str);
    for (i=1; str[i]!='\0'; i++);
    for (j=0; j<i; j++)
    {
        if (str[j]!=str[i-j-1])
            flag = 1;
    }
    if (flag == 1)
        printf("\n\nThe entered string is not palindrome.");
    else
        printf("\n\nThe entered string is palindrome.");
}
