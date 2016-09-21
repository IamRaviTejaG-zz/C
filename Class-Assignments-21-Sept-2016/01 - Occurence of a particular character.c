#include<stdio.h>
#include<string.h>

main()
{
    char str[20], a;
    int len = 0, count = 0, i;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    printf("\n\nEnter the character to check occurence: ");
    a = getchar();
    for (i=0; i<len; i++)
    {
        if(str[i]==a)
        {
            count++;
        }
    }
    printf("\n\n%c occurs %d times in the string \"%s\".", a, count, str);
}
