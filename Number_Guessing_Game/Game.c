#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0)); 

    // Generate a random number
    int randomNumber = (rand() % 100) + 1;

    int no_of_guesses = 0;
    int guessed;

    do {
        printf("Guess the number\n");
        scanf("%d",&guessed);
        if (guessed > randomNumber){
            printf("Lower the value\n");
        } else if (guessed < randomNumber){
            printf("Higher the value\n");
        } else {
            printf("Congrats\n");
        }
        no_of_guesses++;

    } while(guessed != randomNumber);

    printf("You guessed the number in %d",no_of_guesses);

    return 0;
}
