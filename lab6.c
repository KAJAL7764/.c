//write a c program to calculate the algebric ecpression (ax+b)/(ax-b)
#include<stdio.h>
int main(){
    float a,b,x,i,j;
    printf("Enter the value of the a,b,and x:\n");
    scanf("%f%f%f", &a,&b,&x);
    i = a*x + b;
    j = a*x - b;
    if(j!=0){
    float result = i/j;
    printf("Result %.3f\n", result);
    }
    else{
        printf("Error, division by zero");
    }
    return 0;
}