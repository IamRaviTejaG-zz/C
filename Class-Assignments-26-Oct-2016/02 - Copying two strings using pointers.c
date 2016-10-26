#include<stdio.h>
#include<string.h>

main()
{
    char st1[50], st2[50], *ptr;
    int i = 0;
    printf("Enter the string: ");
    gets(st1);
    ptr = st1;
    for (i=0; i<strlen(st1); i++)
    {
        st2[i] = *ptr;
        ptr++;
    }
    st2[i] = '\0';
    printf("\n\n\nString 2: %s", st2);
}
