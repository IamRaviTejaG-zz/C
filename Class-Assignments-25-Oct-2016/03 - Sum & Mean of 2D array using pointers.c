#include<stdio.h>

main()
{
    int i, j, m, n;
    float arr[100][100];
    float sum, mean = 0;
    printf("Enter the dimensions of the array: ");
    scanf("%d%d", &m, &n);
    printf ("\n\nEnter values of array:\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            sum += *(*(arr+i)+j);
        }
    }
    mean = sum/(m*n);
    printf("\n\nSum: %f", sum);
    printf("\n\nMean:  %f", mean);
}
