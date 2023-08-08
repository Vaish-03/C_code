#include<stdio.h>
void main(){
       
       // logical operator==> ans in 0 and 1
       int a=10;
       int b=0;
       int ans;
       int ans1;
       ans=a || b;// check only one condition
       printf("%d\n",ans);
       ans1= a && b; // check both condition
       printf("%d\n",ans1);
     
      //bitwise=>(&,|,^,~)it returns the value

       int x=9;
       int y=10;
     
       printf("%d\n",x & y);
       printf("%d\n",x | y);
       printf("%d\n",x ^ y);
       printf("%d\n",~x);

       //bitwise (<<,>>)Leftshift(<<),rightshift(>>)
       int v=10;
       printf("%d\n",v<<3);


}