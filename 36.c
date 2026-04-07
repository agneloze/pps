#include <stdio.h>
struct person
{
    char name[50];
    char date[10];
    char sal[20];

};
void main()
{
    struct person details[2];
    for (int i=1;i<=2;i++){
        printf("Enter name of person %d : \n",i);
        fgets(details[i-1].name,50,stdin);
        printf("Enter date of joining of person %d : \n",i);
        fgets(details[i-1].date,10,stdin);
        printf("Enter salary of person %d : \n",i);
        fgets(details[i-1].sal,20,stdin);
    }
    
    for (int i=1;i<=2;i++){
        printf("name of person %d : %s \n",i,details[i-1].name);
        printf("date of joining of person %d :%s \n",i, details[i-1].date);
        printf("salary of person %d : %s \n",i,details[i-1].sal);
    
    }
}
