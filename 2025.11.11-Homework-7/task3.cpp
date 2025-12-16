#include <stdio.h>

int election(int a, int b, int c) {
    if ((a + b + c) >= 2) {
        return 1;
    }
    return 0;
}

int main(int argc, char** arcv)
{   
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d", election(a, b, c));
    return 0;
}
