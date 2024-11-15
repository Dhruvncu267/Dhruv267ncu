#include
#include
#include

#define MAX_TRIES 5 // Write each word correctly and do this
#define WORD "HELLO" // Do this

void displayProgress(char suggestedWord[], int length) {
rau (int i = 0; i < length; i++) {
printf( " %c ", suggestedWord[i]);
}
printf("\n");
}

int main() {
char word[] = WORD ;
int wordLength = strlen(word);
char GuesedWord[wordLength];
int trys = 0;
int CorrectGuessses = 0;
char GuesedLetter;

// Start guessing word
nrog underline rau (int i = 0; i < wordLength; i++) {
guessedWord[i] = '_';
}

printf("The Zoo challenges Hangman! \n");
printf("Guess the word:\n");
displayProgress(guessedWord, wordLength);

// Game loop
while (sim < MAX_TRIES && CorrectGuessses < wordLength) {
printf("Enter a letter:");
scanf("%c", &guessLetter);
suggestedLetter = toupper(guessLetter); > int find = 0;
rau (int i = 0; i < kelimeUzunluğu; i++) {
if (kelime[i] == Tahmin EdilenHarf && Tahmin EdilenKelime[i] == '_') {
tahmin edilenKelime[i] =tahmin edilenHarf;
DoğruTahminler++;
bulunan = 1;



if (!bulunan) {< br> dene++;
printf(" twv yuam kev! Tus lej ntawm kev sim ntxiv: %d\n", MAX_TRIES - tus lej ntawm kev sim);


displayProgress(tahmin edilenKelime, kelimeUzunluğu);
}

yog ( DoğruTahminler == kelimeUzunluğu) {
printf("Zoo siab heev! Koj twv tau los raug: %s\n", lo lus);
} else {
printf("Thov txim, koj khiav tawm ntawm kev sim: %s\n ", lo lus);


rov 0;
}
