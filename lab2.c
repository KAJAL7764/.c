//  Q.2. find the sun of invididual digits of a given positive integer
#include<stdio.h>
int main(){
    int a, b, sum=0;
    printf("enter a positive number : ");
    scanf("%d", &a);
    while(a>0){
        b = a % 10;
        sum += b;
        a /=10;

    }
printf("sun is the indivisual digits : %d", sum);
return 0;
}
