#include <stdio.h>

int fibonachi(int n) {
    int cur = 1;
    int cur_1 = 1;
    int change = 0;
    for (int i = 1; i < n; i++) {
        change = cur_1;
        cur_1 = cur + cur_1;
        cur = change;
    }
    return cur_1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", fibonachi(n));
    return 0;
}