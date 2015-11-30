#include<stdio.h>
void main()
{

    struct student
    {
        char name[30],dept[20],id[8];
        float gpa;
    };
    struct student a;
    printf("Student. . .\n");
    printf("%-9sID : ","");
    gets(a.id);
    printf("%-9sName : ","");
    gets(a.name);
    printf("%-9sdept : ","");
    gets(a.dept);
    printf("%-9sGPA : ","");
    scanf("%f",&a.gpa);

    printf("\nID: %s\n",a.id);
    printf("Name: %s\n",a.name);
    printf("Dept: %s\n",a.dept);
    printf("Name: %.2f\n",a.gpa);
}
