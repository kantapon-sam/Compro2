#include<stdio.h>
void main()
{
    int num,i;
    float x[5],*ptr;
    do
    {
        printf("How many number (2-5): ");
        scanf("%d",&num);
        if(num<2||num>5)
        {
            printf("!!! Error Number !!!\n");
        }
    }
    while(num<2||num>5);
    ptr=&x[0];
    for(i=0; i<num; i++)
    {
        printf("Input real number x[%d]: ",i);
        scanf("%f",ptr+i);
    }
    for(i=0; i<num; i++)
    {
        printf("x[%d] = %.2f, pointer is pointer to address %p\n",i,*(ptr+i),ptr+i);

    }
}
