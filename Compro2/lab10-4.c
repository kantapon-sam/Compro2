#include<stdio.h>
#include<ctype.h>
void main()
{
    int choice;
    printf("Please select your choice.\n");
    printf("%-9sPress 1 to open file \"data.txt\"\n","");
    printf("%-9sPress 2 to open file \"student.bin\"\n","");
    printf("%-9sPress 3 to exit program!!!\n","");

    do
    {
        printf("you selextion (1-3): ");
        scanf("%d",&choice);
        if(choice<1||choice>3)
        {
            printf("Invalid Number !!!\n");
        }
        switch(choice)
        {
        case 1 :
            printf("Read file \"data.txt\"\n");
            FILE *fptr;
            char ch;
            fptr = fopen("data.txt","r");
            do
            {
                ch=getc(fptr);
                putchar(ch);
            }
            while(ch!='\n');
            fclose(fptr);
            break;
        case 2 :
            printf("Read file \"student.bin\"\n");
            typedef struct
            {
                char name[30],tel[15];
            } record;
            int i;
            record member[3];
            FILE *bfile;
            bfile=fopen("student.bin","rb");
            fread(member,sizeof(member),1,bfile);
            for(i=0; i<3; i++)
            {
                printf("Name %d : %s\n",i+1,member[i].name);
                printf("%-9sTel : %s\n","",member[i].tel);
            }
            fclose(bfile);
        }
    }
    while(choice!=3);
}

