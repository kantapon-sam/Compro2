#include<stdio.h>
void main()
{
    int n[5],*p,i,sum=0;
    p=&n[0];
    i=0;
    while(i<5)
    {
        printf("n[%d] : ",i);
        scanf("%d",p+i);
        sum+=*(p+i);
        i++;
    }
    for(i=0; i<5; i++)
    {
        printf("The value of n[%d] us %d and the address of n[%d] is at %p\n",i,*(p+i),i,p+i);
    }
    printf("Total = %d",sum);
}
