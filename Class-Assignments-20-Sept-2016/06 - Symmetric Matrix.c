#include <stdio.h>

main()
{
    int a[10][10], b[10][10], i, j, m, n, p, q, count=0;
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
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if (b[i][j] == a[i][j])
            {
                count++;
            }
        }
    }

    if (count == 9)
    {
        printf("\n\nThe matrix is symmetric.");
    }

    else
    {
        printf("\n\nThe matrix is not symmetric.");
    }

}
