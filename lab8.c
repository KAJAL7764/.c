#include <stdio.h>
int main() {
    int n,temp,sum=0,f=1,i,j;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    sum = 0;
    while (temp > 0) {
         j = temp % 10;
        for ( i = 2; i <= j; i++) {
            f=f*i;
        }
        sum = sum+f;
        temp = temp/10;
    }
    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }

    return 0;
}