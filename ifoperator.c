#include <stdio.h>

int main() {

    int age;

    printf("Enter your age:");
    scanf("%d" ,&age );

    if (age >= 30) {

       printf("You have access");

    }

    else {

       printf("You don't have access");

    }

    return 0;

}
