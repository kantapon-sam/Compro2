#include<stdio.h>
void main()
{
    int i;
    char ch[10];
    do
    {
        printf("Please enter a string (5-10 characters) : ");
        scanf("%[^\n]",&ch);
        if(strlen(ch)<5)
        {
            printf("You have entered %d characters. It is too short!\n",strlen(ch));
        }
        else if(strlen(ch)>10)
        {
            printf("You have entered %d characters. It is too long!\n",strlen(ch));
        }
    }
    while(strlen(ch)<5||strlen(ch)>10);
    printf("Reverse of string : ");
    for(i=strlen(ch)-1; i>=0; i--)
    {
        printf("%c",ch[i]);
    }
}
