#include<stdio.h>
int main()
{
  int size;
   printf("Enter a array size:");
   scanf("%d",&size);
   int array[size];
   printf("Enter %d element:",size);
   for(int indx=0;indx<size;indx++)
    {
        scanf("%d",&array[indx]);
    }
   for(int pass=0;pass<size;pass++)
    {
       for(int indx=0;indx<(size-1)-pass;indx++)
        {
            if(array[indx]>array[indx+1])
             {
                int temp=array[indx+1];
                array[indx+1]=array[indx];
                array[indx]=temp;
             }
        }
    }
   printf("Enter your Target:");
   int target,low=0,high=size-1,mid,Found=0;
   scanf("%d",&target);
   mid=(low+high)/2;
  while(mid>=2)
  {
    mid=(low+high)/2;
      if(mid==1)
        {
          if(target==array[mid])
          {
            printf("Element are found in First_Occurss:");
            Found=1;
            break;
          }
        }
      else if(target>=array[mid])
        {
            break;
        }
      else if(target<array[mid])
        {
          high=mid-1;
          if(mid==2)
          {
            low=1;
          }
        }
  }
  if(Found==0)
  {
    printf("Element not Found First occurss:");
  }
   return 0;      
}
  