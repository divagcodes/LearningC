#include <stdio.h>

void add(int a, int b, int c) {
        
    // printf("Enter values a & b: \n");
    // scanf("%d", &a);
    // scanf("%d", &b);
    
    printf("\n%d\n\n", c);
    
    c = a + b;
    
    printf("%d\n\n", c);
    
    if(c == a + b) {
        printf("True\n\n");
    } else {
        printf("False\n\n");
    }
    
    printf("The sum of %d and %d is %d", a, b, c);

}
    
int main() {
    
    add(5, 7, 300);
    add(7, 10, 50);
    
    return 0;
    
}