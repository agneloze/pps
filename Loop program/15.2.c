#include <stdio.h>

void main()
{
    int i,j;
    char a='A';
    for (i=5; i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%c",a);
        }
         printf("\n");
         a++;
    }
}