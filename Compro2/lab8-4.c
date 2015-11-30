#include<stdio.h>
void main()
{

    int n[16]= {32,25,18,99,76,3,12,86,40,69,52,21,9,73,38,20};
    int i,j,low=0,high=15,mid,index=-1,found=0,tmp,key;
    printf("Original Data : ");
    for(i=0; i<16; i++)
    {
        printf("%d ",n[i]);
    }
    printf("\nSorted Data : ");
    for(i=0; i<15; i++)
    {
        for(j=0; j<15; j++)
        {
            if(n[j]>n[j+1])
            {
                tmp=n[j];
                n[j]=n[j+1];
                n[j+1]=tmp;
            }
        }
    }
    for(i=0; i<16; i++)
    {
        printf("%d ",n[i]);
    }
    printf("\nSearching for number : ");
    scanf("%d",&key);
    while(low<=high&&!found)
    {
        mid = (low+high)/2;
        if(key==n[mid])
        {
            found = 1;
            index = mid;

        }
        else
        {
            if(key<n[mid])
            {
                high = mid-1;

            }
            else
            {
                low = mid + 1;
            }
        }
    }

    if(index == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Found number %d at index %d\n",key,index);
    }
}


