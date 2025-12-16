#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compare(char ch[]) {
    
    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] == '\n') {
            ch[i] = '\0';
        }
    }
    if (strlen(ch) % 2 != 0) {
        int k = strlen(ch)-1;
        for (int i = 0; i < strlen(ch) / 2; i++) {
            if (ch[i] != ch[k]) {
                printf("no");
                return;
            }
            --k;
        }
    }
    else {
        int k = strlen(ch)-1;
        for (int i = 0; i < strlen(ch) / 2; i++) {
            if (ch[i] != ch[k]) {
                printf("no");
                return;
            }
            --k;
        }
    }
    printf("yes");
    return;
}

int main(int argc, char** argv)
{
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
    compare(ch);
    return 0;
}