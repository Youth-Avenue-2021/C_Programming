#include<stdio.h>
int main()
{
  int a1[25],a2[25];
  int i,j,n,count;

  printf("enter the size of array:\n");
  scanf("%d",&n);

  printf("enter the elements of array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a1[i]);
    a2[i]=-1;
  }

  for(i=0;i<n;i++)
  {
   count=1;
   for(j=i+1;j<n;j++)
   {
    if(a1[i]==a1[j])
    {
      count++;
      a2[j]=0;
    }
   }
   if(a2[i]!=0)
   {
    a2[i]=count;
   }
  }

  printf("unique elements in array are:\n");
  for(i=0;i<n;i++)
  {
   if(a2[i]==1)
   {
    printf("%d \t",a1[i]);
   }
  }
  
  printf("\n duplicate elemnets in array are:\n");
  for(i=0;i<n;i++)
  {
   if(a2[i]>1)
   {
    printf("%d \t",a1[i]);
   }
  }
  return 0;
}