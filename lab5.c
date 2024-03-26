// // write a program to check whether given number is armstrong or not...
#include<stdio.h>
#include<math.h>
int main(){
    int n,r,c,arm=0;
    printf("enter any number :");
    scanf("%d", &n);
   c=n;
   while (n>0)
   {
r = n%10;
arm=(r*r*r)+arm;
n=n/10;
   }
   
    if(c==arm)
    {
        printf("number is armstrong ");
    }
    else{
        printf("number is not armstrong");
        return 0;
    }
}
