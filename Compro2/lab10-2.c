#include<stdio.h>
#include<ctype.h>
void main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("data.txt","wt");
    printf("Input a string : ");
    do
    {
        scanf("%c",&ch);
        if(ch>='a'&&ch<='z')
        {
            ch=toupper(ch);

        }
        else if(ch>='A'&&ch<='Z')
        {
            ch=tolower(ch);

        }
        else if(ch!='\n')
        {
            ch='*';
        }
        fprintf(fptr,"%c",ch);
    }
    while(ch!='\n');
    fclose(fptr);
}
