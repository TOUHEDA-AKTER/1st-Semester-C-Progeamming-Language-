#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0;
    float ave;
    printf("\n Enter the range of array:");
    scanf("%d",&n);
    printf("\n Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n After traversing:");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\n sum is:%d",sum);
    for(i=0;i<n;i++)
    {
        ave=sum/n;
    }
    printf("\n Average is:%f",ave);
    return 0;
}
