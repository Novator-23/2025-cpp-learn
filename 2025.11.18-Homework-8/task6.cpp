#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compare(char ch_1[]) {
    char* word = NULL;
    int max = 0;
    word = strtok(ch_1, " ");
    for (int i = 0; i < strlen(word); i++) {
            if (word[i] == '\n') {
                word[i] = '\0';
            }
    }
    max = strlen(word);
    char max_word[100];
    strcpy(max_word, word);
    while (word != NULL) {
        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == '\n') {
                word[i] = '\0';
            }
        }
        if (strlen(word) > max) {
            max = strlen(word);
            strcpy(max_word, word);
        }
        word = strtok(NULL, " ");
    }
    printf("%s\n", max_word);
    printf("%d", max);
    return;
}

int main(int argc, char** argv)
{
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
    compare(ch);
    return 0;
}