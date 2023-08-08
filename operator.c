#include<stdio.h>
void main(){
       int a=10;
       int b=5;

       //Arithmatic operator=>binary
       printf("%d\n",a+b);
       printf("%d\n",a-b);
       printf("%d\n",a*b);
       printf("%lf\n",a/b);
       printf("%lf\n",a%b);

       //Arithmatic unary
       printf("%d\n",a++);
        printf("%d\n",++a);
       printf("%d\n",a--);
       printf("%d\n",--a);

       //relational(comparison)
        printf("%d\n",a==b);
       printf("%d\n",a<b);
         printf("%d\n",a<=b);
         printf("%d\n",a>b);
         printf("%d\n",a>=b);
         printf("%d\n",a!=b);
       
       
}