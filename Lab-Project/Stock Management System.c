#include<stdio.h>
#include<time.h>

void delay(unsigned int mseconds) //  The delay() definition cause delay() cannot be directly used in CodeBlocks. Refer StackOverflow for more.
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

struct info
{
    char itemName[80], itemID[10], itemSupp[40], rem;
    int itemQty;
};

mainmenu()
{
    system("cls");
    int choice, i;
    char str1[120] = "------------------------------------------------------- M E N U -------------------------------------------------------";
    char str2[100] = "1. Add stock details to database.";
    char str3[100] = "2. Update stock details from database.";
    char str4[100] = "3. Display stock details from database.";
    char str5[100] = "4. Search stock details from database.";
    char str6[100] = "5. Delete stock details from database.";
    char str7[100] = "6. Exit.";
    char str8[100] = "\n\nEnter your choice: ";
    for(i=0; str1[i]!='\0'; i++)
    {
        delay(5); printf("%c", str1[i]);
    }
    printf("\n\n\t\t\t\t\t");
    for(i=0; str2[i]!='\0'; i++)
    {
        delay(5); printf("%c", str2[i]);
    }
    printf("\n\t\t\t\t\t");
    for(i=0; str3[i]!='\0'; i++)
    {
        delay(5); printf("%c", str3[i]);
    }
    printf("\n\t\t\t\t\t");
    for(i=0; str4[i]!='\0'; i++)
    {
        delay(5); printf("%c", str4[i]);
    }
    printf("\n\t\t\t\t\t");
    for(i=0; str5[i]!='\0'; i++)
    {
        delay(5); printf("%c", str5[i]);
    }
    printf("\n\t\t\t\t\t");
    for(i=0; str6[i]!='\0'; i++)
    {
        delay(5); printf("%c", str6[i]);
    }
    printf("\n\t\t\t\t\t");
    for(i=0; str7[i]!='\0'; i++)
    {
        delay(5); printf("%c", str7[i]);
    }
    printf("\n\n");
    for(i=0; str8[i]!='\0'; i++)
    {
        delay(5); printf("%c", str8[i]);
    }
    scanf("%d",  &choice);
    fflush(stdin);
    if (choice == 1)
        add();
    else if (choice == 2)
        update();
    else if (choice == 3)
        display();
    else if (choice == 4)
        search();
    else if (choice == 5)
        del();
    else if (choice == 6)
        exit(0);
    else
    {
        printf("\n\nInvalid Choice. Try again!!!");
        mainmenu();
    }
    return 0;
}

add()
{
    system("cls");
    struct info s;
    int c;
    printf("------------------------------------------------------ ADD STOCK ------------------------------------------------------\n\n\n");
    FILE *f;
    f = fopen("stockdb.dat", "ab");
    printf("Enter stock details:\n\n");
    printf("Item Name: ");
    gets(s.itemName);
    printf("\nItem ID: ");
    gets(s.itemID);
    printf("\nItem Supplier Name: ");
    gets(s.itemSupp);
    printf("\nItem Quantity: ");
    scanf("%d", &s.itemQty);
    s.rem = 1;
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
    printf("\n\n\nItem added to the list!!!");
    printf("\n\n1. View the main menu.\n2. Exit.\n\nEnter your choice: ");
    scanf("%d",  &c);
    switch(c)
    {
        case 1:
            system("cls");
            mainmenu();
            break;

        case 2:
            exit(0);
            break;
    }
}

update()
{
    system("cls");
    struct info s;
    int ch;
    char c;
    printf("---------------------------------------------------- UPDATE  STOCK ----------------------------------------------------\n\n\n");
    FILE *f;
    f = fopen("stockdb.dat", "ab");
    printf("Enter 1 to search by ID and update.\nEnter 2 to search by item name and update.\nEnter 3 to search by item supplier and update.\nEnter 4 to exit.\n\n\nEnter your choice: ");
    scanf("%d", &ch);
    fflush(stdin);
    if (ch == 1)
    {
        system("cls");
        char str[10];
        int flag = 0;
        printf("Enter ID to search: ");
        gets(str);
        while (f)
        {
            if (f!=EOF)
            {
                fread(&s, sizeof(s),1, f);
                if (strcmp(str, s.itemID) == 0)
                {
                    printf("\n\nEntry found!");
                    printf("\n\nOld Entries: %s\n%s\n%s\n%d", s.itemID, s.itemName, s.itemSupp, s.itemQty);
                    delay(5000);
                    system("cls");
                    printf("Enter new entries: ");
                    printf("\nItem Name: ");
                    gets(s.itemName);
                    printf("\nItem ID: ");
                    gets(s.itemID);
                    printf("\nItem Supplier Name: ");
                    gets(s.itemSupp);
                    printf("\nItem Quantity: ");
                    scanf("%d", &s.itemQty);
                    fwrite(&s, sizeof(s), 1, f);
                    fclose(f);
                }

                else
                {
                    printf("\n\nEntry Not Found. Redirecting to main menu in 5 seconds.");
                    delay(5000);
                    mainmenu();
                }
            }

            if (feof(f))
                break;
        }
    }

    else if (ch == 2)
    {
        system("cls");
        char str[80];
        int flag = 0;
        printf("Enter item name to search: ");
        gets(str);
        while (f)
        {
            if (f!=EOF)
            {
                fread(&s, sizeof(s),1, f);
                if (strcmp(str, s.itemName) == 0)
                {
                    printf("\n\nEntry found!");
                    printf("\n\nOld Entries: %s\n%s\n%s\n%d", s.itemID, s.itemName, s.itemSupp, s.itemQty);
                    delay(5000);
                    system("cls");
                    printf("Enter new entries: ");
                    printf("\nItem Name: ");
                    gets(s.itemName);
                    printf("\nItem ID: ");
                    gets(s.itemID);
                    printf("\nItem Supplier Name: ");
                    gets(s.itemSupp);
                    printf("\nItem Quantity: ");
                    scanf("%d", &s.itemQty);
                    fwrite(&s, sizeof(s), 1, f);
                    fclose(f);
                }

                else
                {
                    printf("\n\nEntry Not Found. Redirecting to main menu in 5 seconds.");
                    delay(5000);
                    mainmenu();
                }
            }

            if (feof(f))
                break;
        }
    }

    else if (ch == 3)
    {
        system("cls");
        char str[40];
        int flag = 0;
        printf("Enter item supplier to search: ");
        gets(str);
        while (f)
        {
            if (f!=EOF)
            {
                fread(&s, sizeof(s),1, f);
                if (strcmp(str, s.itemSupp) == 0)
                {
                    printf("\n\nEntry found!");
                    printf("\n\nOld Entries: %s\n%s\n%s\n%d", s.itemID, s.itemName, s.itemSupp, s.itemQty);
                    delay(5000);
                    system("cls");
                    printf("Enter new entries: ");
                    printf("\nItem Name: ");
                    gets(s.itemName);
                    printf("\nItem ID: ");
                    gets(s.itemID);
                    printf("\nItem Supplier Name: ");
                    gets(s.itemSupp);
                    printf("\nItem Quantity: ");
                    scanf("%d", &s.itemQty);
                    fwrite(&s, sizeof(s), 1, f);
                    fclose(f);
                }

                else
                {
                    printf("\n\nEntry Not Found. Redirecting to main menu in 5 seconds.");
                    delay(5000);
                    mainmenu();
                }
            }

            if (feof(f))
                break;
        }
    }

    else if (ch == 4)
    {
        exit(0);
    }

    else
    {
        printf("\n\n\nInvalid Choice!!! Redirecting to main menu in 5 seconds.");
        delay(5000);
        mainmenu();
    }
    /*fwrite(&s, sizeof(s), 1, f);
    fclose(f);*/
    printf("\n\n\nItem modified in the list!!!");
    printf("\n\n1. View the main menu.\n2. Exit.\n\nEnter your choice: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            system("cls");
            mainmenu();
            break;

        case 2:
            exit(0);
            break;
    }
}

display()
{
    system("cls");
    struct info s;
    printf("----------------------------------------------------- VIEW  STOCK -----------------------------------------------------\n\n\n");
    FILE *f;
    f = fopen("stockdb.dat", "rb");
    printf("Displaying stock details:\n\n");
    while(f)
    {
        if (f!=EOF)
        {
            fread(&s, sizeof(s),1, f);
            if (s.rem != 0)
                printf("%s\n%s\n%s\n%d\n", s.itemName, s.itemID, s.itemSupp, s.itemQty);
        }
        if (feof(f))
            break;
    }
    fclose(f);
    printf("\n\n1. View the main menu.\n2. Exit.\n\nEnter your choice: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            system("cls");
            mainmenu();
            break;

        case 2:
            exit(0);
            break;
    }
}

search()
{
    system("cls");
    int flag = 0;
    int ch;
    struct info s;
    printf("---------------------------------------------------- SEARCH  STOCK ----------------------------------------------------\n\n\n");
    FILE *f;
    f = fopen("stockdb.dat", "rb");
    printf("Enter 1 to search by ID.\nEnter 2 to search by item name.\nEnter 3 to search by item supplier.\nEnter 4 to exit.\n\n\nEnter your choice: ");
    scanf("%d", &ch);
    fflush(stdin);

    if (ch == 1)
    {
        system("cls");
        char str[10];
        printf("Enter ID to search: ");
        gets(str);
        while (f)
        {
            fread(&s, sizeof(s),1, f);
            if (strcmp(str, s.itemID) == 0)
            {
                flag = 1;
                printf("\n\nEntry found!");
                printf("\n\n%s\n%s\n%s\n%d", s.itemID, s.itemName, s.itemSupp, s.itemQty);
                break;
            }

        }
        if(flag == 0)
            printf("Entry Not Found");
        fclose(f);
    }

    else if (ch == 2)
    {
        system("cls");
        char str[80];
        printf("Enter item name to search: ");
        gets(str);
        while (f)
        {
            fread(&s, sizeof(s),1, f);
            if (strcmp(str, s.itemName) == 0)
            {
                flag = 1;
                printf("\n\nEntry found!");
                printf("\n\n%s\n%s\n%s\n%d", s.itemID, s.itemName, s.itemSupp, s.itemQty);
                break;
            }

        }
        if(flag == 0)
            printf("Entry Not Found");
        fclose(f);
    }

    else if (ch == 3)
    {
        system("cls");
        char str[40];
        printf("Enter item supplier to search: ");
        gets(str);
        while (f)
        {
            fread(&s, sizeof(s),1, f);
            if (strcmp(str, s.itemSupp) == 0)
            {
                flag = 1;
                printf("\n\nEntry found!");
                printf("\n\n%s\n%s\n%s\n%d", s.itemID, s.itemName, s.itemSupp, s.itemQty);
                break;
            }

        }
        if(flag == 0)
            printf("Entry Not Found");

        fclose(f);
    }

    else if (ch == 4)
    {
        exit(0);
    }

    else
    {
        printf("Invalid Choice! Redirecting to main menu in 5 seconds.");
        delay(5000);
        system("cls");
        mainmenu();
    }
}

del() // For deleting/shift
{
    system("cls");
    struct info s;
    int ch, a;
    char c;
    printf("---------------------------------------------------- DELETE  STOCK ----------------------------------------------------\n\n\n");
    FILE *f;
    f = fopen("stockdb.dat", "rb+");
    char delstr[10];
    fflush(stdin);
    printf("Enter ID to delete: ");
    gets(delstr);
    while (f)
    {
        fread (&s, sizeof(s), 1, f);
        if (strcmp(delstr, s.itemID) == 0)
        {
            printf("Entry Found! Enter Y to delete: ");
            scanf("%c", &c);
            if (c == 'Y' || c == 'y')
            {
                s.rem = 0;
                fseek(f, -1*(sizeof(s)), SEEK_CUR);
                fwrite (&s, sizeof(s), 1, f);
                printf("\n\nSuccessfully Deleted! Enter 3 to view the new database.");
                scanf("%d", &a);
                fclose(f);
                if (a == 3)
                {
                    display();
                }
            }
        }

        else
        {
            printf("Entry not found!! Redirecting to main menu!");
            delay(5000);
            mainmenu();
        }
    }
}

main()
{
    mainmenu();
}
