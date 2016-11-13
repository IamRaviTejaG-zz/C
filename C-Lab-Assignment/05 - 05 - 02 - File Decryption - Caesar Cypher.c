#include<stdio.h>
#include<string.h>

main()
{
    int i, j, k, r;
    char cypher[100], decypher[100], shift[2];
    FILE *f, *g;
    f = fopen("encrypted.txt", "r");
    g = fopen("decrypted.txt", "w");
    fscanf(f,"%[^\n]", cypher);
    r = strlen(cypher);
    shift[0] = cypher[r-2];
    shift[1] = cypher[r-1];
    j = atoi(shift);
    for (i=0; i<r-2; i++)
    {
        k = (int)cypher[i];
        k-=j;
        decypher[i] = (char)k;
    }
    decypher[i] = '\0';
    printf("Encrypted Message: %s", cypher);
    printf("\n\nDecrypted Message: %s", decypher);
    fprintf(g, "%s", decypher);
    fclose(f);
    fclose(g);
    printf("\n\nDecrypted message has been printed to file. Please check \"decrypted.txt\" for the decrypted message.");
}
