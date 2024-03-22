#include <stdio.h>

int main () {
    
    char start;
    int ans, points = 0;
    

    printf("Are you ready? Y/N\n\n");
    scanf("%c", &start);

    if (start == 'y') {
        printf("The game has begun!\n\n");

        printf("Q1)Who is the avatar in the movie Avatar the last Airbender\n\n");
        printf("1)Kitara\n");
        printf("2)Aang\n");
        printf("3)Zuko\n");
        printf("4)Toph\n");
        
        printf("enter your answer :");
        scanf("%d", &ans);

        if (ans == 2) {
            printf("Correct answer\n\n");
            // points += 5;
            points = points + 5;
            printf("You have scored %d points\n\n", points);

        } else {
            printf("Wrong answer\n\n");
            points += 0;
            printf("You have %d points\n\n", points);
        }

        printf("2)what was the name of aangs bison\n\n");
        printf("1)Momo\n");
        printf("2)Appa\n");
        printf("3)Roku\n");
        printf("4)Sukhi\n");
        
        printf("enter your answer :");
        scanf("%d", &ans);

        if (ans == 2) {
            printf("Correct answer\n\n");
            points += 5;
            printf("You have scored %d points\n\n", points);

        } else {
            printf("Wrong answer\n\n");
            points += 0;
            printf("You have %d points\n\n", points);
        }

        printf("Game over. You have scored a total of %d points", points);

    } else if (start == 'n') {
        printf("Alright, well see you soon.\n\n");
    } else {
        printf("Invalid input");
    }




}