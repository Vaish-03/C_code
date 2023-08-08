#include<stdio.h>
int main(){
       int a=10;
       int b=30;
       printf("before swapping \n");
       printf("%d %d\n",a,b);

       a=a+b;
       b=a-b;
       a=a-b;

       printf("after swapping \n");
       printf("%d %d\n",a,b);

}