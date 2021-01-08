// bubble sort

#include<stdio.h>

int main()
{
    int n=20,i,j,t,a[20]={4,17,11,14,1,10,15,16,6,5,13,8,3,5,9,18,18,6,19,11};

    printf("how many number you want to sort\t");
    /*scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);*/


    for(i=0;i<n;i++)
        for(j=n-1;j>i;j--)
            {
        if(a[j]<a[j-1])
        {
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
        }
            }


    for(i=0;i<n;i++)
        printf("%d  ",a[i]);

return 0;

}
