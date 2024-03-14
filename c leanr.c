#include <stdio.h>

int main() {
   int age;
   
   printf("Enter your age:");
   scanf("%d" ,&age );
   
   if (age >= 30){
       printf("You are elegible");
   }
   else{
       printf("you are not elegible");
   }
    return 0;
}