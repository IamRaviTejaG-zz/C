#include<stdio.h>

struct emp_sales
{
    int exp;
    char dept[10];
};

struct sales_info
{
    int custid, sales;
    char name[50];
    struct emp_sales status;
}s;

main()
{
    printf("Enter Customer Name: ");
    gets(s.name);
    printf("\nEnter Customer ID: ");
    scanf("%d", &s.custid);
    printf("\n\nEnter sales person info. \n\n");
    printf("Enter Sales Person Department: ");
    scanf("%s", s.status.dept);
    printf("\nEnter Sales Person's number of sales: ");
    scanf("%d", &s.sales);
    printf("\nEnter Sales Person's experience: ");
    scanf("%d", &s.status.exp);
    system("cls");
    printf("Customer Name: ");
    puts(s.name);
    printf("\nCustomer ID: %d\n", s.custid);
    printf("\nSales Person Dept: ");
    puts(s.status.dept);
    printf("\nSales Person Experience: %d\n", s.status.exp);
    printf("\nSales Person Number of Sales: %d", s.sales);
}
