#include<stdio.h>
void main(){
       int x;
       printf("enter number\n");
       scanf("%d\n",&x);
       printf("%d\n",x);

       if(x %2 ==0){
              printf("%d number is even",x);
       }
       else{
            printf("%d number is odd ",x);
       }
}