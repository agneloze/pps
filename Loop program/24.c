#include <stdio.h>
void main(){
int a[3][3],c[3][3],b[3][3];
for (int i=1;i<=3;i++){
    for (int j=1;j<=3;j++){
        printf("Enter a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}
for (int i=1;i<=3;i++){
    for (int j=1;j<=3;j++){
        printf("Enter b[%d][%d]: ",i,j);
        scanf("%d",&b[i][j]);
    }
}
for (int i=1;i<=3;i++){
    for (int j=1;j<=3;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("Sum of two matrix is\n");
for (int i=1;i<=3;i++){
    for (int j=1;j<=3;j++){
        printf("%d",c[i][j]);
    }
    printf("\n");
}
}