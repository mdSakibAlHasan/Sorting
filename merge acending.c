//merge sort

#include<stdio.h>


#define max 8

int temp[max],first[max]={2,5,8,4,1,0,7,3};

int merge(int left,int center,int right)
{
    int i,a,b;

    a=left;
    b=center+1;;

    for(i=left;((a<=center)&&(b<=right));i++)
    {
        if(first[a]<=first[b])
            temp[i]=first[a++];
        else
           temp[i]=first[b++];
    }

       while(a<=center)
            temp[i++]=first[a++];

        while(b<=right)
            temp[i++]=first[b++];

            for(i=left;i<=right;i++)
                first[i]=temp[i];

}


int msort(int left,int right)
{
    int center;
    if(left<right)
        {
    center=(left+right)/2;
    msort(left,center);
    msort(center+1,right);
    merge(left,center,right);

        }
}


int main()
{
    int i;

    msort(0,max-1);

    for(i=0;i<max;i++)
        printf("%d ",first[i]);
}





