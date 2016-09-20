#include <stdio.h>

main()
{
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q, i, j;
    printf("Enter matrix 1 order: ");
    scanf ("%d%d", &m, &n);
    printf("\n\nEnter matrix 2 order: ");
    scanf ("%d%d", &p, &q);
    if (m == p && n == q)
    {
        printf("\n\nEnter matrix 1: \n\n");
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\n\nEnter matrix 2: \n\n");
        for (i=0; i<p; i++)
        {
            for (j=0; j<q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("\n\n");
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                printf("%d", c[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\nOrder of matrices is not same. Aborting!!!");
    }
}
