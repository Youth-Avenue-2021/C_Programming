#include<stdio.h>
int main()
{
   int i, a1[10], a2[10], a3[10],sum[10];
   printf("Enter first array\n");
   for(i=0; i<=9; i++)
   {
     printf("a1[%d] = ",i) ;  
    scanf("%d", &a1[i]);
   }
   printf("Enter second array\n");
   for(i=0; i<=9; i++)
   {
    printf("a2[%d] = ",i);
    scanf("%d", &a1[i]);
   }
   
//adds two 1-d arrays and stores into third arrays
   for(i=0; i<=9; i++)
   {
       sum[i] = a1[i] + a2[i];
   }
   printf("\n Sum of array : ");
  for(i=0; i<=9; i++)
   {
        printf("\n Sum [%d] = %d",i,sum[i]);
   }
   return 0;
}