#include<stdio.h>

main()
{
    int a, i;
    char c;
    FILE *e, *o;
    e = fopen("even.txt", "w");
    o = fopen("odd.txt", "w");
    fprintf(e, "Even Numbers\n\n");
    fprintf(o, "Odd Numbers\n\n");
    printf("Enter size of array: ");
    scanf("%d", &a);
    int arr[a];
    printf("\n\nEnter the numbers:\n\n");
    for (i=0; i<a; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]%2==0)
            fprintf(e, "%d\n", arr[i]);
        else
            fprintf(o, "%d\n", arr[i]);
    }
    fclose(e);
    fclose(o);
    system("cls");
    printf("Printing to file complete! Now reading from file:\n\n");
    e = fopen("even.txt", "r");
    o = fopen("odd.txt", "r");
    while(!feof(e))
    {
        c = fgetc(e);
        printf("%c", c);
    }
    printf("\n\n");
    while(!feof(o))
    {
        c = fgetc(o);
        printf("%c", c);
    }
    fclose(e);
    fclose(o);
}
