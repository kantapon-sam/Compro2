#include<stdio.h>
int prime(int *,int);
void main()
{
    int n,num[7],i,c=0;

    do
    {
        printf("How many number (3-7) : ");
        scanf("%d",&n);
    }
    while(n<3||n>7);
    i=0;
    while(i<n)
    {

        if(num[i]<1||num[i]>20)
        {
            printf("number %d (1-20) : ",i+1);
            scanf("%d",&num[i]);
        }
        else
        {
            i++;
        }

    }
    printf("Before calling a function\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\nAfter calling a function\n");
    prime(num,n);

    for(i=0; i<n; i++)
    {
        if(num[i]!=0)
        {
            c++;
        }
        printf("%d ",num[i]);
    }
    printf("\nAll prime number = %d",c);
}
int prime(int *num,int n)
{
    int i,j,count=0;


    for(i=0; i<n; i++)
    {
        for(j=2; j<=*(num+i); j++)
        {
            if((*(num+i))%j==0)
            {
                count++;
            }
            if(count>1)
            {
                *(num+i)=0;
                break;
            }
        }
        count=0;
    }
    for(i=0; i<n; i++)
    {
        if(*(num+i)==1)
        {
            *(num+i)=0;
        }
        return (*(num+i));
    }

}
