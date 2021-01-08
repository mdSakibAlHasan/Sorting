// selection sort

#include<stdio.h>

int sort(int a[],int n);

int sort(int a[],int n)
{
    int i,j,t,min;

    for(i=0;i<n;i++)
        {
            t=a[i];
            min=i;
        for(j=i+1;j<n;j++)
        {
            if(t>a[j]){
                t=a[j];
                min=j;
        }
        }

        a[min]=a[i];
        a[i]=t;

        }
}


int main()
{
    int n,i,a[20];

     printf("how many number you want to sort\t");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        sort(a,n);

        for(i=0;i<n;i++)
            printf("%d  ",a[i]);

        return 0;


}
