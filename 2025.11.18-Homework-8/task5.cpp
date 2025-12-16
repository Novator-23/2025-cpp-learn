#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compare(char ch_1[]) {
    char* word = NULL;
    int counter = 0;
    word = strtok(ch_1, " ");
    while (word != NULL) {
        counter++;
        word = strtok(NULL, " ");
    }
    printf("%d", counter);
    return;
}

main(int argc, char** argv)
{
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
    compare(ch);
    return 0;
}