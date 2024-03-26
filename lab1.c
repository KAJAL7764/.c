//find the sum and there sum of average
#include<stdio.h>
int main(){
    int sum=0,a,b,c,d;
    printf("Enter three numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    d=sum/3;
    printf("Sum is %d\n",sum);
    printf("Average of three numbers is %d\n",d);
    return 0;
}

