#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char date[10], name[50], stat[5], entry[5], ex[5], hp[5];
};

int main()
{
    struct student s;
    FILE *f;
    f = fopen("student.dat", "ab");

    /* This part takes the user input. */
    printf("Enter Date: ");
    gets(s.date);
    printf("\nEnter Name: ");
    gets(s.name);
    printf("\nEnter entry time (in HHMM): ");
    gets(s.entry);
    printf("\nEnter exit time (in HHMM): ");
    gets(s.ex);
    /* User input complete. */

    /* This part until the next comment consists of the time calculation part. */
    char enthh[2], entmm[2], exhh[2], exmm[2];
    int enth = 0, entm = 0, exh = 0, exm = 0, min = 0, hr = 0;
    enthh[0] = s.entry[0];
    enthh[1] = s.entry[1];
    enth = atoi(enthh);
    exhh[0] = s.ex[0];
    exhh[1] = s.ex[1];
    exh = atoi(exhh);
    entmm[0] = s.entry[2];
    entmm[1] = s.entry[3];
    entm = atoi(entmm);
    exmm[0] = s.ex[2];
    exmm[1] = s.ex[3];
    exm = atoi(exmm);
    printf("\n\n\n%d\n%d\n%d\n%d", enth, exh, entm, exm);
    hr = exh - enth;
    min = exm - entm;
    if (min < 0)
    {
        min += 60;
        hr -= 1;
    }
    /* Here ends the time calculation part. */

    /* This code below stores the amount of time present into its
    respective structure variable. */
    if (hr < 10)
    {
        s.hp[0] = '0';
        s.hp[1] = (char)(hr);
        if (min < 10)
        {
            s.hp[3] = '0';
            s.hp[4] = (char)(min);
        }
        if (min > 10)
        {
            int a1, a2;
            a1 = min/10;
            a2 = min%10;
            s.hp[3] = (char)(a1);
            s.hp[4] = (char)(a2);
        }
    }
    else if (hr > 10)
    {
        int h1, h2;
        h1 = hr/10;
        h2 = hr%10;
        s.hp[0] = itoa(h1, s.hp[0], 10);
        s.hp[1] = itoa(h1, s.hp[0], 10);
        if (min < 10)
        {
            s.hp[3] = '0';
            s.hp[4] = (char)(min);
        }
        if (min > 10)
        {
            int a1, a2;
            a1 = min/10;
            a2 = min%10;
            s.hp[3] = (char)(a1);
            s.hp[4] = (char)(a2);
        }
    }
    s.hp[2] = ':';
    s.hp[5] = '\0';
    /* Stored the hours present into its respective structure variable. */

    /* Calculates the status according to the hours present. */
    if (hr >= 4)
        strcpy(s.stat, "HP");

    if (hr >= 7)
    {
        if (min >= 30)
            strcpy(s.stat, "FP");
        else
            strcpy(s.stat, "HP");
    }

    else
        strcpy(s.stat, "HD");
    /* Assigned the status to the structure variable stat. */

    /* Writing to file now. */
    printf("Now, writing to file.");
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
    /* Writing to file complete. */

    system("cls");
    printf("Now, reading from file.");
    f = fopen("student.dat", "rb");
    while(!feof(f))
    {
        fread(&s, sizeof(s), 1, f);
        printf("Date: %s", s.date);
        printf("\nName: %s", s.name);
        printf("\nEntry time: %s", s.entry);
        printf("\nExit time: %s", s.ex);
        printf("\nHours present: %s", s.hp);
        printf("\nStatus: %s", s.stat);
    }
    fclose(f);
}
