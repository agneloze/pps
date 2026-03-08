#include <stdio.h>
void main()
{
int n,temp=0;
printf("Enter the number: ");
scanf("%d",&n);

for(int i=2;i<n;i++)
{
    if(n%i==0){
        temp=1;
        break;
    }
}
if (temp==0 && n!=1){
    printf("The number is prime.");
    }
    else {
        printf("The number is not prime.");
    }


}