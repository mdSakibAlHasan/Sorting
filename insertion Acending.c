// insertion sort

#include<stdio.h>

void sort(int a[],int n);


void sort(int a[],int n)
{
    int i,j,t;

    for(i=1;i<n;i++)
        {
            t=a[i];
        for(j=i;((j>0)&&(t<a[j-1]));j--)        //find where its neat small value
            a[j]=a[j-1];

            a[j]=t;
        }
}


int main()
{
    int n=20,i,j,a[20]={4,17,11,14,1,10,15,16,6,5,13,8,3,5,9,18,18,6,19,11};

    /* printf("how many number you want to sort\t");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);*/

        sort(a,n);

        for(i=0;i<n;i++)
            printf("%d  ",a[i]);

        return 0;


}


