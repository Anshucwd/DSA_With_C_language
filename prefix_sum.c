#include<stdio.h>
int main()
{
   int size;
   printf("Enter a Array size:");
   scanf("%d",&size);
    int array[size],prefix_sum[size];
    printf("Enter a array element");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++)
    {    
        if(i==0)
        {
         prefix_sum[i]=array[i];
        }
        else
        {
         prefix_sum[i]=prefix_sum[i-1]+array[i];
        } 
        printf("%d ",prefix_sum[i]);
    }
 return 0;
}