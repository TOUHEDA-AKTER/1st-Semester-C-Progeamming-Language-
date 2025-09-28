#include<stdio.h>
int main()
{
    FILE*P;
    P=fopen("pub.txt","r");
    int array[100];
    int size,i,j,temp;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter element of array:");
    for(i=0;i<size;i++)
    {
        fscanf(P,"%d",&array[i]);
    }
     for(i=0;i<size;i++)
     {
       for(j=i+1;j<size;j++)
       {
           if (array[j]<array[i])
           {
               temp=array[i];
               array[i]=array[j];
               array[j]=temp;
           }

           }
       }
       printf("elements of array in sorted ascending:\n");
        for(i=0;i<size;i++)
        {
            printf("%d\t,array[i]");
        }
        return 0;
     }




























































