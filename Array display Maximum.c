#include<stdio.h>
int main()
{
    int n,i,a[100],max;
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
        printf("%4d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\n Maximum=%d",max);
    return 0;
}
