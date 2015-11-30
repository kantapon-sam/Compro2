#include<stdio.h>
void main()
{
    int i,n[5],*p;
    p=&n[0];
    for(i=0; i<5; i++)
    {
        printf("Input number %d : ",i+1);
        scanf("%d",p+i);
    }
    i=4;
    printf("Output : ");
    while(i>=0)
    {
        printf("%d ",*(p+i));
        i--;
    }
}
