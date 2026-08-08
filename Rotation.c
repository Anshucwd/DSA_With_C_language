#include<stdio.h>
int main()
{
    int size; 
    printf("Enter a array size:");
    scanf("%d",&size);
    int array[size];
    printf("Enter array element:");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=(size-1);i>=0;i--)
    {
        printf("%d ",array[i]);       // Revers Rotation
    }
     printf("=Reverse Rotaion\n");
    for(int i=0;i<size;i++)
    {
         int adj[size];
        adj[i+1]=array[i];
        if(i==0)
        {
           adj[i]=array[size-1];       // Right Rotation
        } 
        printf("%d ",adj[i]);
    }
    printf("=Right Rotaion\n");
    for(int i=0;i<size;i++)
    {
       int adj[size];
       adj[i]=array[i+1];
       if(i==size-1)
       {
          adj[i]=array[0];
       }
       printf("%d ",adj[i]);             // left Rotation
    }
     printf("=Left Rotaion\n");

}