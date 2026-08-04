#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter a array size:");
    scanf("%d",&size);
    int array[size];
    
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
        printf("Sorted array=");
           for(i=0;i<size;i++)
         {
           printf("%d ",array[i]);
         }
 return 0;
}