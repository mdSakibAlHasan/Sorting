//merge
#include<stdio.h>


void merge(int sakib[],int hasan[],int left,int center,int right)
{
    int a,b,i,jishan;

    a=left;
    b=center+1;

    for(i=left;(a<=center&&b<=right);i++)
        if(sakib[a]<=sakib[b])
            hasan[i]=sakib[b++];
        else
            hasan[i]=sakib[a++];

            while(a<=center)
                hasan[i++]=sakib[a++];

            while(b<=right)
                hasan[i++]=sakib[b++];

        for(jishan=left;jishan<=right;jishan++)
            sakib[jishan]=hasan[jishan];
}

void msort(int sakib[],int hasan[],int left,int right)
{
    int center;

    if(left<right)
    {
        center=(left+right)/2;
        msort(sakib,hasan,left,center);
        msort(sakib,hasan,center+1,right);
        merge(sakib,hasan,left,center,right);
    }
}




int main()
{
    int sakib[100],n,i,hasan[100];

    printf("input array size");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&sakib[i]);

       msort(sakib,hasan,0,n-1);

         for(i=0;i<n;i++)
            printf("%d ",sakib[i]);

         return 0;

}
