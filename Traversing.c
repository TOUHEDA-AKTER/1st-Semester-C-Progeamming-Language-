  #include<stdio.h>
  int main()
  {
    int n,i,a[100];
    printf("\n Enter the range of array:");
    scanf("%d",&n);
    printf("\n Enter the element of array:");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("\n after traversing:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
  }
