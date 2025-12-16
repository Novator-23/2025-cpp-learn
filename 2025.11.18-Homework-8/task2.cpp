#include <stdio.h>

char to_upper(int ch) {
    if ( 97 <= ch && ch <= 122) {
        return ch - 32;
    }
    else {
        return ch;
    }
}

main(int argc, char** argv)
{
    char ch = 0;
    scanf("%c", &ch);
    printf("%c", to_upper(ch));
    return 0;
}