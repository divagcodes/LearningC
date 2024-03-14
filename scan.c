#include <stdio.h>

int main () {
    
    double alp;
    char text;
    
    printf("Enter your account balance: ");
    scanf("%lf", &alp);
    
    printf("\nEnter your initial: ");
    scanf("\n%c", &text);
    
    printf("\nYour account balance is %lf!", alp);
    printf("\nYour letter is %c!", text);
    
    return 0;
}