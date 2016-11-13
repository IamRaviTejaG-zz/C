#include<stdio.h>

main()
{
    int i, size, srch;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int num[size];
    printf("\n\nEnter the elements:\n\n");
    for (i=0; i<size; i++)
    {
        scanf("%d", &num[i]);
    }
    system("cls");
    printf("Enter an element to search for in the array: ");
    scanf("%d", &srch);
    printf("\n\nSearching...\n\n");
    for (i=0; i<size; i++)
    {
        if (num[i] == srch)
            printf("\n%d was found at index %d.", srch, i);
    }
}
