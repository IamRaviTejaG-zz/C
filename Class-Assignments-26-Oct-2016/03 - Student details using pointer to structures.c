#include<stdio.h>

struct student
{
    char name[50], id[10], branch[5];
};

getData()
{
    struct student std, *ptr;
    ptr = &std;
    printf("Enter student's name: ");
    gets(ptr->name);
    printf("Enter student's ID:  ");
    gets(ptr->id);
    printf("Enter student's branch: ");
    gets(ptr->branch);
}

printData()
{
    struct student std, *ptr;
    system("cls");
    ptr = &std;
    printf("Student's name: ");
    puts(ptr->name);
    printf("Student's ID:  ");
    puts(ptr->id);
    printf("Student's branch: ");
    puts(ptr->branch);
}

main()
{
    getData();
    printData();
}
