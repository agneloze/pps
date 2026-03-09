#include <stdio.h>

void main()
{
    int n,sum=0;
  printf("Enter the no of terms:");
  scanf("%d",&n);
  
  printf("The series is");
  
  for (int i=1;i<n;i++)
  {
      printf(" %d\u00B2+", i);
      
  }
  printf(" %d\u00B2", n);
  for (int i=1;i<=n;i++)
  {
      sum=sum+(i*i);
  }
   printf("\nThe sum is %d",sum);
  
}