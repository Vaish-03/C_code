//data types
#include<stdio.h>
int main(){
       int Stud_id=10;
       float clg_fee=57528.1;
       double hostel_fee=4200000.0;
       char ch='a';
      // void a=10; error
       printf("%d\n",Stud_id);
       printf("%f\n",clg_fee);
       printf("%lf\n",hostel_fee);
       printf("%c\n",ch);

       printf("%ld\n",sizeof(Stud_id));
       printf("%d\n",sizeof(clg_fee));
       printf("%ld\n",sizeof(hostel_fee));
        printf("%ld\n",sizeof(ch));



     return 0;
}