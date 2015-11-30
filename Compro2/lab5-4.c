#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,n,t[5]= {0},min=999,s_min;
    char s[5][50],ch[50];
    do
    {
        printf("How many string (3-5) : ");
        scanf("%d",&n);
    }
    while(n<3||n>5);
    for(i=0; i<n; i++)
    {
        printf("String %d: ",i+1);
        for(j=0; j<50; j++)
        {
            scanf(" %[^\n]",&s[i][j]);
            break;
        }

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<strlen(s[i]); j++)
        {
            t[i]++;
        }
        if(t[i]<min)
        {
            min=t[i];
            s_min=i;
        }
        printf("\n");

    }
    printf("String \"");
    for(j=0; j<strlen(s[s_min]); j++)
    {
        printf("%c",s[s_min][j]);
        ch[j]=s[s_min][j];
    }

    printf("\" is shortest and the langth is %d.\n",min);
    vowel(ch);

}
void vowel(char ch[])
{
    int i,count[2]= {0};
    printf("\nIn function vowel()...\n");
    printf("The vowel is \"");
    for(i=0; i<strlen(ch); i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            printf("%c",ch[i]);
            count[0]++;
        }

    }
    printf("\" and count is %d\n",count[0]);
    printf("The consonant is \"");
    for(i=0; i<strlen(ch); i++)
    {
        if(!(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'))
        {
            printf("%c",ch[i]);
            count[1]++;
        }

    }
    printf("\" and count is %d",count[1]);
}
