#include <stdio.h>
void main()
{
    int i,j;
    int l,b;
    
    printf("Enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&b);
    
for (i=0;i<b;i++)
{
 for (j=0;j<l;j++)
{
    if (i==0 || i==b-1 || j==0 || j==l-1)
    {
        printf("@ ");
    }
    else
    printf("  ");
 
}
printf("\n");
}

}