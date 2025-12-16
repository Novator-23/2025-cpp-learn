#include  <stdio.h>

main(int argc, char** argv)
{
    char ch = 0;
    scanf("%c", &ch);
    ch = int(ch);
    if ( 48 <= ch && ch <= 57) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}