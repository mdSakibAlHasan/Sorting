// selection sort decending

#include<stdio.h>

int sort(int a[],int n);

int sort(int a[],int n)
{
    int i,j,t,max;

    for(i=0;i<n;i++)
    {
        t=a[i];
        max=i;
        for(j=i;j<n;j++)
        {
           if(t<a[j]){
            t=a[j];
           max=j;}
        }
        a[max]=a[i];
        a[i]=t;
    }

}

int main()
{
    int n=50,i,a[50]={18,1,6,26,19,21,31,42,5,5,46,38,5,18,29,10,44,6,40,4,20,17,9,28,4,46,42,1,0,14,13,22,24,32,9,47,45,39,36,21,32,34,35,15,43,12,12,5,6,14};

    sort(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
