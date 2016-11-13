#include<stdio.h>

main()
{
    int i, j, m, n, big, small;
    printf("Enter the dimensions of the array: \n\n");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    printf("\n\nEnter the elements of the array:\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == 0 && j == 0)
                big = small = arr[i][j];
            if(big < arr[i][j])
                big = arr[i][j];
            if (small > arr[i][j])
                small = arr[i][j];
        }
    }
    printf("\n\nLargest Digit: %d\nSmallest Digit: %d", big, small);
}
