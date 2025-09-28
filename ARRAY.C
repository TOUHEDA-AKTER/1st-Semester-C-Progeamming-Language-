#include<stdio.h>
int main ()
{
    int size,found;
    printf("enter array size:");
    scanf("%d",&size);
    int array[size];
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<size;i++)
    {
        printf("array value are:%d\n",array[i]);
    }
    int sum=0;

    for(i=0;i<size;i++)
    {
        sum=sum+array[i];
    }
    printf("summation of array values is:%d\n",sum);
    int max=array[0];
    int min=array[0];
    for(i=0;i<size;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    printf("maximum is:%d\n",max);
    for(i=0;i<size;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    printf("minimum is:%d\n",min);
    int num;
    found=0;
    printf("enter array search number:");
    scanf("%d",&sum);
    for(i=0;i<size;i++)
    {
        if(num==array[i])
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("\n%d is found as position:%d\n",num,i+1);
    }
    else
    {
        printf("\n%d is not found\n",num);
    }
    int tem,j;
     for(i=0;i<size;i++)
     {
        for(j=i+1;j<size;j++)
        {
         if(array[j]<array[i])
         {
             tem=array[i];
             array[i]=array[j];
             array[j]=tem;
         }
        }
    }
    printf("\n sorting array in ascanding is:\n",array[j]);
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
     for(i=0;i<size;i++)
     {
        for(j=i+1;j<size;j++)
        {
            if(array[j]>array[i])
            {
                tem=array[i];
                array[i]=array[j];
                array[j]=tem;
            }
        }
     }
     printf("\n sorting array in desanding is:\n",array[j]);

      for(i=0;i<size;i++)
      {
          printf("%d\t",array[i]);
      }
      return 0;
}
