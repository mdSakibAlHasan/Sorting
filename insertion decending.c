#include<stdio.h>

int sort(int a[],int n);

int sort(int a[],int n)
{
    int i,j,t;

    for(i=2;i<n;i++)
    {
        t=a[i];

        for(j=i-1;j>=0&&t>a[j];j--)
           a[j+1]=a[j];
        a[j+1]=t;
    }
}



int main()
{
    int a[50]={29,30,4,49,13,44,33,40,32,22,24,8,0,28,43,14,11,13,21,0,23,17,19,44,38,17,36,32,38,34,7,44,11,47,18,33,31,43,23,0,39,38,20,32,34,16,21,47,46,22},n=50,i;

    sort(a,n);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

return 0;

}
