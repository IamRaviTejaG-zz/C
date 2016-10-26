#include<stdio.h>
#include<ctype.h>

main()
{
    char st[50], *ptr;
    int count = 0;
    printf("Enter the string: ");
    gets(st);
    ptr = st;
    while (*ptr)
    {
        if(toupper(*ptr) == 'A' || toupper(*ptr) == 'E' || toupper(*ptr) == 'I' || toupper(*ptr) == 'O' || toupper(*ptr) == 'U')
            count++;
        ptr++;
    }
    printf("\n\nNumber of vowels in the string \"%s\": %d", st, count);
}
