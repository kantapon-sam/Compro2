#include<stdio.h>
#include<string.h>
void main()
{

    int n,i,j,t[7]= {0},max=0,str_max;
    char str[7][50];

    do
    {
        printf("How many string (4-7) : ");
        scanf("%d",&n);
    }
    while(n<4||n>7);
    for(i=0; i<n; i++)
    {
        printf("String %d: ",i+1);
        for(j=0; j<sizeof(str[i]); j++)
        {
            scanf(" %[^\n]",&str[i][j]);
            break;
        }

    }
    printf("Output...\n");

    for(i=0; i<n; i++)
    {
        printf("String %d: \"",i+1);
        for(j=0; j<strlen(str[i]); j++)
        {
            printf("%c",str[i][j]);
            t[i]++;
            if(t[i]>=50)
            {
                break;
            }
        }
        if(t[i]>max)
        {
            max=t[i];
            str_max=i;
        }
        printf("\" = %d\n",t[i]);
    }

    printf("String \"");
    for(j=0; j<strlen(str[str_max]); j++)
    {
        printf("%c",str[str_max][j]);
    }

    printf("\" is longest.");
}
