#include<stdio.h>
void main()
{
    char ch[10];
    do
    {
        printf("Enter a String (4-10 Characters) : ");
        gets(ch);
    }
    while(strlen(ch)<4||strlen(ch)>10);
    update(ch);
}
void update(char ch[])
{
    int i;
    printf("String \"%s\" raplace consonant to \"",ch);
    for(i=0; i<strlen(ch); i++)
    {
        if(!(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'))
        {
            printf("*");
        }
        else
        {
            printf("%c",ch[i]);
        }

    }
    printf("\"");
}
