#include<stdio.h>

struct student
{
    char name[50], br[10], id[10];
};

main()
{
    struct student s;
    printf("Enter name, branch, ID: ");
    gets(s.name);
    gets(s.br);
    gets(s.id);
    printf("\n\n");
    printf("Name: ");
    puts (s.name);
    printf("Branch: ");
    puts (s.br);
    printf("Student ID: ");
    puts (s.id);
}
