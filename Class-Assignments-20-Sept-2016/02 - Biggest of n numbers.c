#include <stdio.h>

main()
{
    int n, i;
    float big, a[100];
    printf("Enter the number of entries: ");
    scanf ("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("\nEnter number %d: ", i+1);
        scanf("%f", &a[i]);
    }
    big = a[0];
    for (i=0; i<n; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
    }
    printf("\n\nLargest of the entered numbers is: %f", big);
}
