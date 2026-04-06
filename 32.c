#include <stdio.h>
int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
    return n*fact(n-1);
    }
}
int main()
    {
        int a;
        printf("enter number to calc factorial: ");
        scanf("%d",&a);
        if(a<0)
        {
            printf("enter a positive no");
        
        }
        else{
            printf("the factorial is %d",fact(a));
        }
    }
