/* Read, Print, Add & Multiply two complex numbers using structure.
By: Ravi Teja Gannavarapu, B216023, ETC (2016-20). */

#include<stdio.h>
#include<stdlib.h> // For the abs() value function.

struct complex
{
    int Re, Im;
};

int main()
{
    struct complex z = {0,0}, z1 = {0,0}, z2 = {0,0};
    int choice;
    printf("Enter Re(z1) (real part of z1): ");
    scanf("%d", &z1.Re);
    printf("\nEnter Im(z1) (imaginary part of z1): ");
    scanf("%d", &z1.Im);
    printf("\nEnter Re(z1) (real part of z2): ");
    scanf("%d", &z2.Re);
    printf("\nEnter Im(z1) (imaginary part of z2): ");
    scanf("%d", &z2.Im);
    printchoices:;
    printf("\n\nPress 1 to print both the complex numbers.");
    printf("\nPress 2 to add both the complex numbers.");
    printf("\nPress 3 to multiply both the complex numbers.");
    printf("\nPress 4 to exit.");
    choice:;
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
    fflush(stdin);
    system("cls");
    switch(choice)
    {
        case 1:
            if (z1.Im < 0)
                printf("z1 = %d - %di.", z1.Re, abs(z1.Im));
            else
                printf("z1 = %d + %di.", z1.Re, abs(z1.Im));
            if (z2.Im < 0)
                printf("\nz2 = %d - %di.", z2.Re, abs(z2.Im));
            else
                printf("\nz2 = %d + %di.", z2.Re, abs(z2.Im));
            printf("\n\nPress 2 to add both the complex numbers.\nPress 3 to multiply both the complex numbers.\nPress 4 to exit.");
            goto choice;
            break;

        case 2:
            z.Im = z1.Im + z2.Im;
            z.Re = z1.Re + z2.Re;
            if (z.Im < 0)
                printf("z1 + z2 = %d - %di.", z.Re, abs(z.Im));
            else
                printf("z1 + z2 = %d + %di.", z.Re, abs(z.Im));
            printf("\n\nPress 1 to print both the complex numbers.\nPress 3 to multiply both the complex numbers.\nPress 4 to exit.");
            goto choice;
            break;

        case 3:
            z.Re = (z1.Re * z2.Re) - (z1.Im * z2.Im);
            z.Im = (z1.Re * z2.Im) + (z1.Im * z2.Re);
            if (z.Im < 0)
                printf("z1 * z2 = %d - %di.", z.Re, abs(z.Im));
            else
                printf("z1 * z2 = %d + %di.", z.Re, abs(z.Im));
            printf("\n\nPress 1 to print both the complex numbers.\nPress 2 to add both the complex numbers.\nPress 4 to exit.");
            goto choice;
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid Choice! Enter again!\n\n");
            goto printchoices;
            break;
    }
    return 0;
}
