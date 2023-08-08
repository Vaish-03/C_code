#include<stdio.h>
int x=10;   //global(access whole program)
void fun(){
       int y=20; //local(only accesd through this function)
       printf("%d\n",x);
       printf("%d\n",y);
       return 0;
}
int main(){
       function();
        printf("%d\n",x);
       //printf("%d\n",y);
     

}