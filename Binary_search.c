#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter a array size:");
    scanf("%d",&size);
    int array[size];
    int adj[size/2];
    printf("Enter a array element:");
    for( i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int pass=0;pass<size-1;pass++)
    {
       int sorted_array[size];
         for(i=0;i<(size-1)-pass;i++)
         {
            if(array[i]>array[i+1])
            {
                int temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            }
         } 
        }
        printf("Which element you Find:");
        int low=0,high=size-1,mid,element,Found=0;
        scanf("%d",&element);
     while(low<=high)
     {
       mid=(low+high)/2;
      if(element==array[mid])
      {
        printf("Element are found :Index:%d ",mid);
        Found=1;
        break;
      }
      else if(element<array[mid])
      {
        high=mid-1;  // Find element in left side of mid
      }
      else if(element>array[mid])
      {
         low=mid+1;  // Find element in right side of mid
      }
    }
    if(Found==0)
      {
        printf("Element are not found");  // element are not found in array
      }
   return 0;
  }