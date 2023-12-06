#include<stdio.h>
void main()
{ 
  int arr1[10],arr2[10],arr3[20],m,n,i,j,k=0;
  printf("Enter the size of array 1:");
  scanf("%d",&m);
  printf("Enter the sorted elements:");
  for(i=0;i<m;i++)
  { 
   scanf("%d",&arr1[i]);
  }
  printf("Enter the size of array 2:");
  scanf("%d",&n);
  printf("Enter the sorted elements:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr2[i]);
  }
  i=0;
  j=0;
  while(i<m&&j<n)
  {
   if(arr1[i]<arr2[j])
   { 
    arr3[k]=arr1[i];
    i++;
   }
   else
   { 
    arr3[k]=arr2[j];
    j++;
   }
   k++;
   }
   if(i>=m)
   { 
    while(j<n)
    { 
      arr3[k]=arr2[j];
      j++;
      k++;
    }
   }
   if(j>=n)
   {
     while(i<m)
     {
      arr3[k]=arr1[i];
      i++;
      k++;
     }
   }
   printf("After merging:\t");
   for(i=0;i<m+n;i++)
   {
    printf("%d\t",arr3[i]);
   }
  }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 
