#include<stdio.h>
#include<string.h>

main()
{
    char str1[10], str2[10], str3[20];
    int i = 0, j = 0;
    printf("Enter string 1: ");
    gets(str1);
    printf("\n\nEnter string 2: ");
    gets(str2);
    while (str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
        j++;
    }
    str3[j] = ' ';
    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("\n\nThe concatenated string is: %s.", str3);
}
