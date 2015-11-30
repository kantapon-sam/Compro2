#include<stdio.h>
#include<string.h>
void main()
{
    int stu,i,j,total=0;
    char name[10][40],temp[40],indexname;

    do
    {
        printf("How many studens <1-10> : ");
        scanf("%d",&stu);
        if(stu<1||stu>10)
        {
            printf("Invalid Input , Try again\n");
        }
    }
    while(stu<1||stu>10);
    for(i=0; i<stu; i++)
    {
        for(j=0; j<sizeof(name[i]); j++)
        {
            printf("Student %d : ",i+1);
            scanf(" %[^\n]",&name[i][j]);
            break;
        }
    }
    printf("\nBefore Sorting\n");

    for(i=0; i<stu; i++)
    {
        printf("Student %d : %s\n", i+1, name[i]);
    }
    printf("\nAfter Sorting\n");
    for(i=1; i<stu; i++)
    {
        for(j=0; j<stu-1; j++)
        {
            if(strcasecmp(name[j], name[j+1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    for(i=0; i<stu; i++)
    {
        printf("Student %d : %s\n", i+1, name[i]);
    }
    printf("Search for name start with a character : ");
    scanf(" %c",&indexname);
    for(i=0; i<stu; i++)
    {
        for(j=0; j<strlen(name[i]); j++)
        {
            if(name[i][0]==indexname)
            {
                printf("%s\n",name[i]);
                total++;
                break;
            }

        }

    }
    printf("Total found = %d",total);
}


