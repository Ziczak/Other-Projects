#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber;
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    while(guess != secretNumber && outOfGuesses == 0) {
        if (guessCount < guessLimit) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1) {
        printf("You have no guesses left and lost! The secret number was %d", secretNumber);
    } else {
         printf("You have won the game!");
    }

    return 0;
}
