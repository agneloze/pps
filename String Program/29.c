
#include <stdio.h>

void main()
{
char a[200];
printf("Enter string A: ");
fgets(a,200,stdin);
char b[200];
printf("Enter string B: ");
fgets(b,200,stdin);
char c[200];
int i = 0, j = 0;
while (a[i]!='\n')
{
    c[i]=  a[i];
    i++;
}
while (b[j]|='\0')
{
    c[i]=  b[j];
    i++;
    j++;
}
    c[i]='\0' ;
    printf("Concatenated string: %s", c);
}
