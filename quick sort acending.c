#include<stdio.h>

int partition(int a[],int left,int right);
int median(int a[],int left,int right);
int swap(int a[],int x,int y);

int qsort(int a[],int left,int right)
{
    if(left<right)
    {
       int p,x=0;

       p=partition(a,left,right);

            qsort(a,left,p-1);
            qsort(a,p+1,right);

    }
}

int partition(int a[],int left,int right)
{
    median(a,left,right);

    int pivot=a[left];

    int l=left+1,r=right;

        while(l<r)
            {
                while(l<right&&a[l]<pivot)
                    l++;
                while(r>left&&a[r]>=pivot)
                    r--;
                    if(l<r)
                        swap(a,l,r);

            }

            a[left]=a[r];
            a[r]=pivot;



            return r;

}

int median(int a[],int left,int right)
{
    int mid=(left+right)/2;

    if((a[left]>a[mid]&&a[mid]>a[right])||(a[left]<a[mid]&&a[mid]<a[right]))
        swap(a,left,mid);
    if((a[left]<a[right]&&a[mid]>a[right])||(a[left]<a[right]&&a[mid]>a[right]))
        swap(a,left,mid);
}

int swap(int a[],int x,int y)
{
    int t=a[x];
    a[x]=a[y];
    a[y]=t;

}

int main()
{
    int a[150]={17,11,41,24,37,9,6,15,31,43,17,23,8,49,26,13,49,18,10,45,9,37,31,12,29,3,14,28,8,18,31,49,12,41,22,39,33,33,32,17,29,15,17,41,28,23,3,49,35,
    56,20,96,78,50,62,93,86,3,52,36,92,30,37,49,29,12,79,88,49,62,46,64,30,28,86,40,50,85,29,44,14,63,6,96,82,50,15,82,65,96,50,50,53,3,18,98,26,79,31,31,25,90,11,65,64,57,47,42,80,23,27,41,99,43,25,84,79,51,87,52,63,20,67,69,45,21,55,54,48,46,25,89,50,63,92,66,53,49,95,60,65,49,45,33,69,21,90,19,27,47},i;

    qsort(a,0,149);

    for(i=0;i<=149;i++)
        printf("%d ",a[i]);
}
