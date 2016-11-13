#include<stdio.h>

main()
{
    char str1[100], str2[100], str3[200];
    int i, j, k, l;
    printf("Enter string 1: ");
    gets(str1);
    printf("\nEnter string 2: ");
    gets(str2);
    for (i=1; str1[i]!='\0'; i++);
    for (j=1; str2[j]!='\0'; j++);
    k = i + j;
    for (l=0; l<i; l++)
    {
        str3[l] = str1[l];
    }
    for (l; l<k; l++)
    {
        str3[l] = str2[l-i];
    }
    str3[l] = '\0';
    printf("\n\nConcatenated String: %s", str3);
}
