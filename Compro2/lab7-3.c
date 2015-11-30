#include<stdio.h>
void main()
{
    int numch,i,sum=0;
    char ch[10],*p;
    do
    {
        printf("How many a character (3-10) : ");
        scanf("%d",&numch);
    }
    while(numch<3||numch>10);
    p=&ch[0];
    for(i=0; i<numch; i++)
    {
        printf("ch[%d] : ",i);
        scanf(" %c",p+i);
    }
    printf("Output : ");
    for(i=0; i<numch; i++)
    {
        if((*(p+i))%2==0)
        {
            printf("%c ",*(p+i));
            sum+=(*(p+i));
        }
    }
    printf("\nSum of ASCII-Even-Number is %d.",sum);
}
