#include<stdio.h>

main()
{
    FILE *f;
    char st[100], c;
    int count = 0;
    f = fopen("file.txt", "w");
    printf("Enter string: ");
    gets (st);
    fprintf(f, "%s", st);
    fclose(f);
    f = fopen("file.txt", "r");
    while (!feof(f))
    {
        c = getc(f);
        if (toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I' || toupper(c) == 'O' || toupper(c) == 'U')
            count++;
    }
    fclose(f);
    printf("\n\nNumber of vowels: %d", count);
}
