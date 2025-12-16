#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void double_search(char ch[]) {
    for (int i = 0; i < strlen(ch); i++) {
        if (&ch[i] != strrchr(ch, ch[i])) {
            printf("%c\n", ch[i]);
            return;
        }
    }
    return;
}

int main(int argc, char** argv)
{
    char ch[100];
    fgets(ch, sizeof(ch), stdin);
    double_search(ch);
    return 0;
}