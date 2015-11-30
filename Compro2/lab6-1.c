#include<stdio.h>
void main()
{
    int i;
    char str[5],*pstr;
    pstr=&str[0];
    for(i=0; i<5; i++)
    {
        printf("str[%d]: ",i);
        scanf(" %c",pstr+i);
    }
    for(i=0; i<5; i++)
    {
        printf("Value of str[%d] = %c and its address is %p\n",i,*(pstr+i),pstr+i);
    }
}
