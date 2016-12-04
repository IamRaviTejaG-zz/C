#include<stdio.h>

main()
{
    int count1 = 0, count3 = 0, count5 = 0, count7 = 0, count9 = 0;
    char c;
    FILE *f, *g;
    f = fopen("IntegerStream.txt", "r");
    g = fopen("Frequency.txt", "w");
    while (!feof(f))
    {
        c = fgetc(f);
        if (c == '1')
            count1++;
        else if (c == '3')
            count3++;
        else if (c == '5')
            count5++;
        else if (c == '7')
            count7++;
        else if (c == '9')
            count9++;
    }
    printf("Frequency of 1: %d\n", count1);
    printf("Frequency of 3: %d\n", count3);
    printf("Frequency of 5: %d\n", count5);
    printf("Frequency of 7: %d\n", count7);
    printf("Frequency of 9: %d\n", count9);
    fprintf(g, "Frequency of 1: %d\n", count1);
    fprintf(g, "Frequency of 3: %d\n", count3);
    fprintf(g, "Frequency of 5: %d\n", count5);
    fprintf(g, "Frequency of 7: %d\n", count7);
    fprintf(g, "Frequency of 9: %d", count9);
    printf("\n\nPrinting to file complete! Closing file now!");
    fclose(f);
    fclose(g);
}
