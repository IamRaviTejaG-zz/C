#include<stdio.h>

struct stud1
{
    char name[50], branch[5], id[10];
}s1, s2;

main()
{
    printf("Enter details into Structure #1\n\n");
    printf("Enter name: ");
    gets(s1.name);
    printf("Enter branch: ");
    gets(s1.branch);
    printf("Enter student ID: ");
    gets(s1.id);
    s2 = s1;
    printf("\n\nDetails in Structure #2\n\n");
    printf("Student Name: ");
    puts(s2.name);
    printf("Student Branch: ");
    puts(s2.branch);
    printf("Student ID: ");
    puts(s2.id);
}