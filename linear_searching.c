#include<stdio.h>
int main()
{

  int size;  ///////// linear search
  printf("Enter a size:");
  scanf("%d",&size);
  int array[size];
  printf("Enter array Element:");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("Which element you Find:");
  int Find_element;
  scanf("%d",&Find_element);
  for(int i=0;i<size;i++)
  {
    if(array[i]==Find_element)
    {
        printf("Ok you search the element:%d",array[i]);
    }
  }
  return 0;
}