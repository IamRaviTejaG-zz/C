#include<stdio.h>
#include<string.h>

main()
{
    char str[20];
    int f = 0, i;
    printf("Enter the string: ");
    gets(str);
    for (i=0; i<strlen(str); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            f++;
        }
        else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            f++;
        }
    }
    printf("\n\nVowels occur %d times in the string \"%s\".", f, str);
}
