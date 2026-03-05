#include <stdio.h>
void main()
{
int a;
printf("Enter your marks:");
scanf("%d", &a);
if (a>100 || a<0)
{
    printf("Enter correct marks!");
}
else if (a>=80)
{
    printf("DISTINCTION!");
}
else if (a>=60)
{
    printf("FIRST CLASS!");
}
else if (a>=40)
{
    printf("SECOND CLASS!");
}
else
{
    printf("FAIL!");
}
}