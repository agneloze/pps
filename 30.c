
#include <stdio.h>

void main() 
{
char a[200];
printf("Enter string A: ");
fgets(a,200,stdin);
char b[200];
printf("Enter string B: ");
fgets(b,200,stdin);
int len1 = 0, len2 = 0;
while (a[len1]|='\0')
{
    len1= len1+1;
}
while (b[len2]|='\0')
{
    len2= len2+1;
}
if (len2>len1)
{
    printf("String B is greater");
}
else
{
    printf("String A is greater");
}
}