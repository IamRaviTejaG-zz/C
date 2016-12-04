#include<stdio.h>

main()
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int date, mon, year, i, s = 0;
    char week[7][10];
    system("cls");
    strcpy(week[0], "Monday");
    strcpy(week[1], "Tuesday");
    strcpy(week[2], "Wednesday");
    strcpy(week[3], "Thursday");
    strcpy(week[4], "Friday");
    strcpy(week[5], "Saturday");
    strcpy(week[6], "Sunday");
    printf("Enter a valid date (dd/mm/yyyy): ");
    scanf("%d / %d / %d", &date, &mon, &year);
    for (i=1; i<year; i++)
    {
        if((year % 4) == 0 && (year % 100) == 0 && (year % 400) == 0)
            s += 366;
        else
            s += 365;
    }
    for (i=0; i<mon-1; i++)
    {
        if((year % 4) == 0 && (year % 100) == 0 && (year % 400) == 0)
            month[1] = 29;
        s += month[i];
    }
    s += date;
    s = s%7;
    printf("\nThe day is: %s", week[s]);
}
