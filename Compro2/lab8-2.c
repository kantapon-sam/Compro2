#include<stdio.h>
void main()
{
    int numch,i,index=-1,total=0;
    char ch[10];
    do
    {
        printf("How many character (1-10) : ");
        scanf("%d",&numch);
    }
    while(numch<1||numch>10);
    i=0;
    while(i<numch)
    {
        printf("ch[%d] (a-z): ",i);
        scanf(" %c",&ch[i]);
        if(ch[i]>='a'&&ch[i]<='z')
        {
            i++;
        }
    }
    for(i=0; i<numch; i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            index=i;
            printf("Found vowel \"%c\" at index %d\n",ch[i],index);
            total++;
        }
    }
    printf("Total found = %d",total);
}
