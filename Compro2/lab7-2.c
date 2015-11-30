#include<stdio.h>
void display(int *,char);
void main()
{
    int i,n[3];
    char ch;

    i=0;
    while(i<3)
    {
        printf("Enter number%d (1-5) : ",i+1);
        scanf("%d",&n[i]);
        if(n[i]<1||n[i]>5)
        {
            printf("Invalid number, try again...\n");
        }
        else
        {
            i++;
        }
    }

    do
    {
        printf("Enter character (A-H) : ");
        scanf(" %c",&ch);
        if(ch<'A'||ch>'H')
        {
            printf("Invalid character, try again...\n");
        }
    }
    while(ch<'A'||ch>'H');
    display(n,ch);
}

void display(int *n,char ch)
{

    int i,sum=0;
    for(i=0; i<3; i++)
    {
        sum+=(*(n+i));
    }
    printf("Output : of %c + %d = %c",ch,sum,ch+sum);
}
