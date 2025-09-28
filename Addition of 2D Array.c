// Addition 2D Array
#include<stdio.h>
int main()
{
    int i,j,r,c,a[100][100],m,n,b[100][100],d[100][100];
    printf("\n Enter the range of row1:");
    scanf("%d",&r);
    printf("\n Enter the range of column1:");
    scanf("%d",&c);
    printf("\n Enter the element of 2D Array1:");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
       printf("\n After Traversing2D array1:\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
     printf("\n Enter the range of row2:");
    scanf("%d",&m);
    printf("\n Enter the range of column2:");
    scanf("%d",&n);
    printf("\n Enter the element of 2D Array2:");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
           scanf("%d",&b[i][j]);
       }
       printf("\n After Traversing 2D array2:\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    if(r==m & c==n)
    {
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
        printf("\n after Addition:\n");
        for(i=0;i<r;i++)
        {
          for(j=0;j<c;j++)
          {
              printf("%4d",d[i][j]);
          }
          printf("\n");
        }
    }
        else
        {
            printf("\n 2D array addition is impossible:");
        }


   return 0;
}
