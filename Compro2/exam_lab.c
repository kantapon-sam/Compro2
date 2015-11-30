#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j,k,t[5]= {0};
    char str[5][50];

    do
    {
        printf("How many name (4-10) : ");
        scanf("%d",&n);
    }
    while(n<1||n>10);
    for(i=0; i<n; i++)
    {
        printf("Name[%d]: ",i+1);
        for(j=0; j<sizeof(str[i]); j++)
        {
            scanf(" %[^\n]",&str[i][j]);
            break;

        }

    }
    printf("Output...\n");

    for(i=0; i<n; i++)
    {
        printf("Name[%d]: ",i+1);
        for(j=0; j<strlen(str[i]); j++)
        {
            printf("%c",str[i][j]);
            if(str[i][j]==' ')
            {
                k=j+1;

                while(k<strlen(str[i]))
                {
                    printf("%c",str[i][k]);
                    k++;
                    t[i]++;
                }
                printf("\n%-9s","");
            }
        }
        printf("\n%-9sTotal lastname is %d character\n","",t[i]);
    }
}

