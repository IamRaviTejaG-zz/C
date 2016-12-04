#include<stdio.h>

main()
{
    char c, d;
    FILE *f, *g;
    f = fopen("File1.txt", "r");
    g = fopen("File.txt", "w");
    while (!feof(f))
    {
        c = fgetc(f);
        if (c!=EOF)
        {
            d = c;
            fprintf(g, "%c", d);
        }
    }
    fclose(f);
    fclose(g);
    f = fopen("File2.txt", "r");
    g = fopen("File.txt", "a");
    while(!feof(f))
    {
        c = fgetc(f);
        if (c!=EOF)
        {
            d = c;
            fprintf(g, "%c", d);
        }
    }
    fclose(f);
    fclose(g);
}
