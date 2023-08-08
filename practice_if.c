#include<stdio.h>
void main(){
       int x=1;
       printf("Start code\n");
       if(x){
              printf("In 1st block\n");
       }
       printf("%d\n",x);
       if(++x){
              printf("In 2nd block\n");
              printf("%d\n",x);
       }

}