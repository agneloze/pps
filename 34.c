#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;    
}
void main()
{
    int x,y;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);
    swap(&x,&y);
    printf(" swapped: x= %d y=%d",x,y);
}
