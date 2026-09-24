#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char word[30], checker[30];
    bool loop = true;
    int num, len, num1;

    printf("---Welcome to Palindrome Checker---\n");

    while (loop) {
        printf("Enter a word: ");
        scanf("%s", word);
        printf("\n");
        checker[0] = '\0';

        num = strcmp("end", word);
        if (num == 0) {
            loop = false;
        } else {
            len = strlen(word);
            for (int i=len; i>=0; i--) {
                char temp[2] = {word[i], '\0'};
                strcat(checker, temp);
            }

            num1 = strcmp(word, checker);
            if (num1 == 0) {
                printf("Word %s is a palindrome\n", word);
            } else {
                printf("Word %s is not a palindrome\n", word);
            }
        }
    }
    
    return 0;
}