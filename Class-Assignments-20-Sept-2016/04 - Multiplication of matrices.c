#include <stdio.h>

main()
{
    int a[10][10], b[10][10], c[10][10];
    int k, m, n, p, q, i, j, sum = 0;
    printf("Enter matrix 1 order: ");
    scanf ("%d%d", &m, &n);
    printf("\n\nEnter matrix 2 order: ");
    scanf ("%d%d", &p, &q);
    if (n == p)
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
        for (i=0; i<n; i++)
        {
            for (j=0; j<p; j++)
            {
                for (k=0; k<p; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;
            }
        }
        printf("\n\n");
        for (i=0; i<m; i++)
        {
            for (j=0; j<q; j++)
            {
                printf("%d", c[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\nOrder of matrices is unexpected. Aborting!!!");
    }
}
