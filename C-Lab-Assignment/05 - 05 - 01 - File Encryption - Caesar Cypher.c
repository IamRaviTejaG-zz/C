#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main()
{
    int i, j, r;
    char st[100], cypher[100];
    srand(time(NULL));
    r = rand() % 27;
    if (r == 0)
        r = rand() % 27;
    printf("Enter string: ");
    gets(st);
    for (i=0; st[i]!='\0'; i++)
    {
        int j = (int)st[i];
        j = j+r;
        cypher[i] = (char)j;
    }
    cypher[i] = '\0';
    printf("Encrypted message is as follows:\n\n%s", cypher);
    FILE *f;
    f = fopen("encrypted.txt", "w");
    if (r>9)
        fprintf(f, "%s%d", cypher, r);
    else
        fprintf(f, "%s0%d", cypher, r);
    fclose(f);
    printf("\n\nEncrypted message has been printed to file. Please check \"encrypted.txt\" for the encrypted message.");
}
