#include <stdio.h>

int main() {
    char word[100];
    int count = 0;
    printf("Enter a word: ");
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++) {
        if(word[i] == 'a' || word[i] == 'A') {
            count++;
        }
    }
    printf("Total number of 'a' is %d.\n", count);
    return 0;
}