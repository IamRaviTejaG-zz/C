#include<stdio.h>
#include<string.h>

main()
{
    char str1[20][20], str2[20][20], temp[20];
    int a = 0, b = 0, c = 0;
    printf("Enter the number of names you want to enter: ");
    scanf("%d", &c);
    printf("\n\nEnter the names: ");
    for (a=0; a<=c; a++)
    {
        gets(str1[a]);
        strcpy(str2[a], str1[a]);
    }

    for (a=0; a<=c-1; a++)
    {
        for (b=a+1; b<=c; b++)
        {
            if (strcmp(str1[a], str2[b]) > 0)
            {
                strcpy(temp, str1[a]);
                strcpy(str1[a], str1[b]);
                strcpy(str1[b], temp);
            }
        }
    }
    printf("\n\nSorted names are as follows:\n");
    for (a=0; a<=c; a++)
    {
        printf("\n%s", str1[a]);
        printf("\n");
    }
}
