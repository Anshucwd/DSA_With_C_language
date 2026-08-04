#include<stdio.h>
int main()
{
    int size_1,size_2,marge_size;
    printf("Enter 1st array size:");
     scanf("%d",&size_1);
     printf("Enter %d element:",size_1);
     int array_1[size_1];
     for(int i=0;i<size_1;i++)
     {
       scanf("%d",&array_1[i]);
     }
     printf("Enter 2nd array size:");
       scanf("%d",&size_2);
     int array_2[size_2];
     printf("Enter %d array element:",size_2);
      for(int j=0;j<size_2;j++)
      {
;            scanf("%d",&array_2[j]);
      }
      printf("Marge array:");
      marge_size=size_1+size_2;
      int marge_array[marge_size];
      for(int i=0;i<size_1;i++)
       {
        marge_array[i]=array_1[i];
      }
         for(int j=0;j<size_2;j++)
        {
           marge_array[size_1+j]=array_2[j];
        }
      for(int i=0;i<marge_size;i++)
      {
        printf("%d ",marge_array[i]);
      }
}



