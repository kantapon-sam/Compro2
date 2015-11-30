#include<stdio.h>
#include<ctype.h>
typedef struct
{
    char name[30],tel[15];
} record;
void main()
{
    int i;
    record member[3];
    FILE *bfile;
    bfile=fopen("student.bin","wb");
    for(i=0; i<3; i++)
    {
        printf("Member %d\n",i+1);
        printf("Enter name: ");
        scanf(" %[^\n]",member[i].name);
        printf("Enter tel. number: ");
        scanf(" %[^\n]",member[i].tel);
    }
    fwrite(member,sizeof(member),1,bfile);
    fclose(bfile);
}
