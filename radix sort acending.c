#include<stdio.h>

int large(int a[],int n)
{
    int i,max=a[0];

    for(i=1;i<n;i++)
        if(a[i]>max)
            max=a[i];

    return max;

}

int rsort(int a[],int n)
{
    int i,j,k,b[n][10],div=10,div1=1,max,num=0,digit;

    max=large(a,n);

    while(max>0)
    {
        max=max/10;
        num++;
    }

    while(num-->0)
    {
        int count[10]={0};

        for(i=0;i<n;i++)
        {
            digit=(a[i]/div1)%div;
            b[count[digit]++][digit]=a[i];
        }

        digit=0;
        for(i=0;i<10;i++)
           for(j=0;j<count[i];j++)
                a[digit++]=b[j][i];



        div1*=10;

    }

}
int main()
{
    int a[100],i,n;

    printf("input number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    rsort(a,n);

    printf("Sorted array \n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}
