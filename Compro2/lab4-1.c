#include<stdio.h>
void main()
{
    int n[]= {20,15,50,20,90,80,21,52,99,54},i,even=0,odd=0,counteven=0,countodd=0;
    for(i=0; i<10; i++)
    {
        n[i]%2==0 ? (even+=n[i])&&counteven++ : (odd+=n[i])&&countodd++;
    }
    printf("There are %d even number and sum of all is %d.\n",counteven,even);
    printf("There are %d odd number and sum of all is %d.",countodd,odd);
}
