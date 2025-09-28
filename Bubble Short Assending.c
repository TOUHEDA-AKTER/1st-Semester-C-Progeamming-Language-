#include<stdio.h>
int main()
{
    int i,n,a[100],pass,com,temp;
    printf("\n Enter the rang of array:");
    scanf("%d",&n);
    printf("\n Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n After Traversing:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    for(pass=n-1;pass>0;pass--)
        for(com=0;com<pass;com++)

       if(a[com]>a[com+1])
       {
           temp=a[com];
           a[com]=a[com+1];
           a[com+1]=temp;
        }
        printf("\n After sorting:");

    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
