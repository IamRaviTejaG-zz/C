#include <stdio.h>
#include <math.h>

void main()
{
    int c, i=0, n, a[50];
    float sum=0.0, mean=0.0, varsum=0.0, var=0.0, dev=0.0;

    printf("Enter the number of values: ");
    scanf ("%d", &n);
    for (i=0; i<n; i++)
    {
        printf ("\nEnter value %d: ", i+1);
        scanf ("%d", &a[i]);
    }
    printf("\n\nEnter 1 for mean of the data.\nEnter 2 for variance of the data.\nEnter 3 for standard deviation of the data.\nEnter 4 to view all.\n\nEnter your choice: ");
    scanf ("%d", &c);
    switch(c)
    {
        case 1:
            sum = 0.0;
            for (i=0; i<n; i++)
            {
                sum+=a[i];
            }
            mean = sum/n;
            printf("\n\nMean of the data is: %f", mean);
            break;

        case 2:
            for (i=0; i<n; i++)
            {
                sum+=a[i];
            }
            mean = sum/n;
            for (i=0; i<n; i++)
            {
                varsum+=pow((a[i]-mean), 2);
            }
            var = varsum/n;
            printf("\n\nVariance of the data is: %f", var);
            break;

        case 3:
            for (i=0; i<n; i++)
            {
                sum+=a[i];
            }
            mean = sum/n;
            for (i=0; i<n; i++)
            {
                varsum+=pow((a[i]-mean), 2);
            }
            var = varsum/n;
            dev = sqrt(var);
            printf("\n\nStandard Deviation of the data is: %f", dev);
            break;

        case 4:
            for (i=0; i<n; i++)
            {
                sum+=a[i];
            }
            mean = sum/n;
            for (i=0; i<n; i++)
            {
                varsum+=pow((a[i]-mean), 2);
            }
            var = varsum/n;
            dev = sqrt(var);
            printf("\n\nMean of the data is: %f", mean);
            printf("\n\nVariance of the data is: %f", var);
            printf("\n\nStandard Deviation of the data is: %f", dev);
            break;

        default:
            printf("\n\nInvalid Choice.");
            break;

    }
}
