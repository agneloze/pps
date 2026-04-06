// Online C compiler to run C program online
#include <stdio.h>
int a = 5;
void update()
{
    int loc_x = 10;
    static int stat_p=15;
   
  
    a=a+1;
    loc_x=loc_x+1;
    stat_p=stat_p+1;
    
    printf("The new global variable is %d\n",a);
    printf("The new local variable is %d\n",loc_x);
    printf("The new static variable is %d\n",stat_p);
     
}
void main()
{
    
    update();
     update();
      update();
}
