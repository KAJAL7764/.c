// perform of addition of two matric
#include<stdio.h>
int main(){
    int i,j,r[2][2], s[2][2],t[2][2];
    printf("Enter the first matriz element:\n");
    for ( i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
        scanf("%d", &r[i][j]);
        } 
        }
printf("Enter the second matrix element:\n");
for ( i = 0; i < 2; i++){
  for (j = 0; j < 2; j++){
scanf("%d", &s[i][j]);
  }
  }
printf("Sum of two matrix:\n");
for ( i = 0; i <2; i++){
   for (j = 0; j < 2; j++){
    t[i][j]=r[i][j]+s[i][j];
    printf("%d ", t[i][j]);
   }
  printf("\n") ;
}
return 0;   
}