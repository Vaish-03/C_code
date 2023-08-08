#include<stdio.h>
void function(){
       int x=30;
       static int y=10;
       x=x+10;
       y=y+10;
       printf("\tlocal:%d\n",x);
       printf("\tglobal:%d\n",y);

      
        
}
int main(){
       printf("First function call\n");
       function();
       printf("second function call\n");
       function();
       printf("third function call\n");
       function();


}