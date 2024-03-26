// generat the first n terms of the fibonaccci sequence
#include<stdio.h>
int main(){
    int n, a = 0, b = 1, c, i;
    printf("Enter the numbers of the terms :");
    scanf("%d", &n);

    for(i = 1; i < n; i++){
        c = a + b;
        a = b;
        b = c;
        printf("Terms are : \n");
        printf("%d", a);
    }
    return 0;
}