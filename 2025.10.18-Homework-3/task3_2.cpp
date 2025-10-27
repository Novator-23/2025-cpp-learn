#include <cstdio>

int main() 
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x = -100;
    while (1) {
        if ((a * x * x * x) + (b * x * x) + (c * x) + d == 0){
            printf("%d\n", x);
        }
        if (x == 100){
            return 0;
        }
        x = x + 1;
    }
    return 0;
}