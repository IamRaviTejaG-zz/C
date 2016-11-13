#include<stdio.h>

main()
{
    int i, j, m, n, sum = 0;
    printf("Enter dimensions of the array: \n");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    printf("\n\nEnter the array elements:\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i == j)
                sum+=arr[i][j];
        }
    }
    printf("\n\nSum of diagonal elements is: %d.", sum);
}
