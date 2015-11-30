#include<stdio.h>
void main()
{
    int n,num[20],i,sum[3]= {0,0,0},count[3]= {0,0,0};
    do
    {
        printf("How many integer (4-20) : ");
        scanf("%d",&n);
    }
    while(n<4||n>10);
    for(i=0; i<n; i++)
    {
        printf("Number[%d] : ",i);
        scanf("%d",&num[i]);
        if(num[i]<10)
        {
            sum[0]+=num[i];
            count[0]++;
        }
        else if(num[i]<100)
        {
            sum[1]+=num[i];
            count[1]++;
        }
        else if(num[i]<1000)
        {
            sum[2]+=num[i];
            count[2]++;
        }
    }
    printf("Count of One-digit number is %d and sum of them is %d.\n",count[0],sum[0]);
    printf("Count of Two-digit number is %d and sum of them is %d.\n",count[1],sum[1]);
    printf("Count of Three-digit number is %d and sum of them is %d.\n",count[2],sum[2]);
    printf("Sum off all number is %d.",sum[0]+sum[1]+sum[2]);
}
