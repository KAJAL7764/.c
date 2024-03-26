//multiplication of two matrix in c
#include<stdio.h>
// void mult(int a[2][2], int b[2][2]);
int main(){
    int a[2][2], b[2][2],i,j,c;
    printf("Enter the first matrix:\n");
    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
          scanf("%d", &a[i][j]);
        } 
    }
  //  mult(a,b);
  //  return 0;

// void mult(int a[2][2], int b[2][2]){
//     int c[2][2], i,j,k;
    printf("Enter the secondo matrix:\n");
    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
          scanf("%d", &b[i][j]);
        }
    }
    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
          // c[i][j]=0;
          // for (k = 0; k <2; k++){
          c[i][j] =a[i][j]*b[i][j];
        }
    } 
  

printf("product of the matrix:\n");
 for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
          printf("%d ", c[i][j]);
        }
        printf("\n");
 }
}
