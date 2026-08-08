#include<stdio.h>
int main()
{
    int size,i,a;
    int G_element;
        printf("Enter the size of the array:");
        scanf("%d", &size);
    int array[size];
        printf("Enter a array element:");
        for(i=0 ; i<size ; i++)
        {
          scanf("%d",&array[i]);
        }
        printf("How many you want element in group:");
          scanf("%d",&G_element);
    int adje[G_element];
        for(i=0;i<size;i++)
        {
           a=i;
           if(i==0)
           {
             for(i=0;i<G_element;i++)
             {
                adje[i]=array[i];
                printf("%d ",adje[i]);
             }
             i=a;
           }
         else
         {
           for(i=a;i<G_element+a;i++)
           {
            adje[i-a]=array[i];
            printf("%d ",adje[i-1]);
           }
         }
         printf("\n");
         i=a; 
         if(i>=G_element-1)
         {
          break;
         }
        }

}