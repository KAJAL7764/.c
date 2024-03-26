#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter a,b,c :\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
    printf("Both roots are imaginary .");
    if(D==0){
        printf("Both roots are equal.");
        x=-b/(2.0*a);
        printf("Root is %.2f",x);
    }
    if(D>0){
        printf("Roots are equal and distinct.\n");
        x=(-b*sqrt(D))/(2*a);
        y=(-b*sqrt(D))/(2*a);
        printf("Roots are : %.2f, %.2f",x,y);
        
    }
    return 0;
}