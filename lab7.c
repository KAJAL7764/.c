//write a c program and check this number is perfect or not...
#include<stdio.h>
int main(){
    int num, i, per=0;
    printf("Enter the numver");
    scanf("%d", &num);
    for ( i = 1; i < num; i++)
    {
       if (num%i==0)
       per = per+i; 
    }
    if(per == num)
    printf("%d is perfect number", num);
    else
    printf("%d is not perfect number", num);
    return 0;
    
}