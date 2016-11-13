#include<stdio.h>

main()
{
    main:;
    char empname[100], empid[10], empdept[20];
    int choice;
    FILE *f;
    printf("1. Enter new information (Note that this overwrites any present data).\n");
    printf("2. Update already present information (Note that this appends more data into the already present data).\n");
    printf("3. Display all information present in the file.\n");
    printf("4. Exit.\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    fflush(stdin); // Flushes the standard input so that the enter button (which means "\n") does not hinder with the gets(empname) input field.
    system("cls");
    switch(choice)
    {
        case 1:
            f = fopen("employee.txt", "w");
            printf("Enter employee name: ");
            gets(empname);
            fputs(empname, f);
            fprintf(f, "\n");
            printf("\nEnter employee ID: ");
            gets(empid);
            fputs(empid, f);
            fprintf(f, "\n");
            printf("\nEnter employee department: ");
            gets(empdept);
            fputs(empdept, f);
            fprintf(f, "\n");
            printf("\n\nFile updation complete!\n\n");
            fclose(f);
            goto main;
            break;

        case 2:
            f = fopen("employee.txt", "a");
            if (f == NULL)
                printf("Old data file couldn't be found!");
            printf("Enter employee name: ");
            gets(empname);
            fputs(empname, f);
            fprintf(f, "\n");
            printf("\nEnter employee ID: ");
            gets(empid);
            fputs(empid, f);
            fprintf(f, "\n");
            printf("\nEnter employee department: ");
            gets(empdept);
            fputs(empdept, f);
            fprintf(f, "\n");
            printf("\n\nFile updation complete!\n\n");
            fclose(f);
            goto main;
            break;

        case 3:
            f = fopen("employee.txt", "r");
            char c;
            while(!feof(f))
            {
                c = fgetc(f);
                printf("%c", c);
            }
            printf("\n\n");
            fclose(f);
            goto main;
            break;

        case 4:
            exit(0);
            break;

        default:
            system("cls");
            printf("Invalid Choice! Enter a valid choice:\n\n");
            goto main;
            break;
    }
}
