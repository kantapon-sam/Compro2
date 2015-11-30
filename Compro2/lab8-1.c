#include<stdio.h>
void main()
{
    int i,j;
    float num[5],tmp;
    for(i=0; i<5; i++)
    {
        printf("r[%d] : ",i);
        scanf("%f",&num[i]);
    }
    printf("Sorting data in ascending order...\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(num[j]>num[j+1])
            {
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }

        }
    }
    for(i=0; i<5; i++)
    {
        printf("r[%d] = %.2f\n",i,num[i]);

    }
}
