#include<stdio.h>
void main()
{
    int num,i,n[10],sum=0,count=0;
    do
    {
        printf("How many number (5-10): ");
        scanf("%d",&num);
    }
    while(num<5||num>10);
    for(i=0; i<num; i++)
    {
        printf("Number %d : ",i+1);
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    for(i=0; i<num; i++)
    {
        count++;
        printf("%d ",n[i]);
        if(count<num)
        {
            printf("+ ");
        }
    }
    printf("= %d",sum);
}
