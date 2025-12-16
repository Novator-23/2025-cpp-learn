#include <stdio.h>

double exp(double a, signed int b) {
    double ans = 1.0;
    if (b < 0) {
        a = 1 / a;
        b = -b;
    }
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

int main(int argc, char** arcv)
{   
    double a = 0;
    signed int b = 0;
    scanf("%lf", &a);
    scanf("%d", &b);
    printf("%lf", exp(a, b));
    return 0;
}
