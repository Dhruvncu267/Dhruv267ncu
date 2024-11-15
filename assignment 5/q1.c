#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6
#define WORD_SIZE 100

void displayWord(char word[], char guessed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int isWordGuessed(char word[], char guessed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!guessed[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[WORD_SIZE] = "programming";
    char guessed[WORD_SIZE] = {0};       
    int tries = 0;

    printf("Welcome to Hangman!\n");

    while (tries < MAX_TRIES) {
        printf("\nWord: ");
        displayWord(word, guessed);

        char guess;
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        int correct = 0;
        for (int i = 0; word[i] != '\0'; i++) {
