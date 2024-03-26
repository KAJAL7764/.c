// generate prime number between 1 to n
#include<stdio.h>
#include<math.h>
void main() {
 int num,m=1,n,d;

 printf("Enter the Range : ");
 scanf("%d",&n);
 for (num = m; num <= n; num++) {
   for(d = 2; d < num; d++) {
    if (num % d == 0)
      break;
   }
   if (d == num)
     printf("%d ", num);
 }

}
