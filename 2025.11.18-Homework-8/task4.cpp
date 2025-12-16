#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compare(char ch_1[], char ch_2[]) {
    int max = 0;
    if (strlen(ch_1) > strlen(ch_2)) {
        max = strlen(ch_1);
    }
    else {
        max = strlen(ch_2);
    }

    int i = 0;
    for (int i = 0; i < max; i++) {
        if (ch_1[i] != ch_2[i]) {
            printf("no");
            return;
        }
    }
    printf("yes");
    return;
}

main(int argc, char** argv)
{
    char ch_1[100];
    char ch_2[100];
    scanf("%99s", ch_1);
    scanf("%99s", ch_2);
    compare(ch_1, ch_2);
    return 0;
}