#include<stdio.h>
int main()
{
    int n,i,a[100],p;
    printf("\n Enter the range of array:");
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
    printf("\n Enter the position to delete:");
    scanf("%d",&p);
    if(p<0||p>n)
    {
        printf("Delete is impossible:");
    }
    else
    {
        for(i=p+1;i<n;i++)
            a[i-1]=a[i];
        n--;
    }
     printf("\n After traversing:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
return 0;
}
