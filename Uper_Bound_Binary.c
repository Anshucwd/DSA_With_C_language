#include<stdio.h>

     int main()
     {
          int size;
          printf("Enter a array size:");
          scanf("%d",&size);
          int array[size];
          printf("Enter a %d element:",size);
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
                int temp;
                temp=array[indx+1];
                array[indx+1]=array[indx];
                array[indx]=temp;
               }
          }
          }
           printf("Enter Your target:");
           int target,mid,found=0,low=0,high=size-1;
           scanf("%d",&target);
           while(low<=high)
           {
                  mid=(low+high)/2;
                  if(target<array[mid] && target>array[mid-1])
                    {
                     printf("This Element Uper Bound: %d",array[mid]);
                     found=1;
                     break;
                     }
                   else if(target > array[mid])
                    {
                     low=mid+1;                         //This is Find target Right side
                    }
                   else if(target < array[mid])
                    {
                     high=mid-1;                      //This is Find target left side
                    }
                    else if(array[mid]==target)
                    {
                        printf("! Uper_bound : but keep array:");   // !(not)Uper_bound but target keep in array
                        found=1;
                        break;
                    }
            }
             
            if(found==0)
            {
               printf("This Target not Found:");
            }   
          }
          
     

