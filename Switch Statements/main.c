#include <stdio.h>
#include <stdlib.h>

int main(){

   char grade = 'A';

   switch(grade){
   case 'A' :
       printf("You did great! ");
       break;
   case 'B' :
       printf("You did alright! ");
       break;
   case 'C' :
       printf("You did poorly");
       break;
   case 'D' :
       printf("You did very bad");
       break;
   case 'E' :
       printf("3kaa d3");
       break;
   case 'F' :
       printf("You Failed!");
       break;
   default :
       printf("Invalid grade");


   }



    return 0;
}
