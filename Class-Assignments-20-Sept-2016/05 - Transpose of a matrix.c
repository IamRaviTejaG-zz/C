#include <stdio.h>

main()
{
    int a[10][10], b[10][10], i, j, m, n, p, q;
    printf("Enter order of matrix: ");
    scanf ("%d%d", &m, &n);
    printf("\n\nEnter elements of matrix:\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("\n\nOriginal matrix is:\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n\nTranspose of above matrix is:\n\n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d", b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
