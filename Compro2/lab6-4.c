#include<stdio.h>
void main()
{
    int n,i,count=0;
    char ch[8],*p;
    do
    {
        printf("How many character (4-8): ");
        scanf("%d",&n);
    }
    while(n<4||n>8);
    p=&ch[0];
    for(i=0; i<n; i++)
    {
        printf("ch[%d]: ",i);
        scanf(" %c",p+i);
    }
    printf("Output: ");
    for(i=0; i<n; i++)
    {
        if(*(p+i)%2==1)
        {
            printf("%c ",*(p+i));
            count++;
        }
    }
    printf("\nCount = %d",count);
}
