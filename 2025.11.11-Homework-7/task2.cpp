#include <stdio.h>

double power(double a, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

int main(int argc, char** arcv)
{   
    double a = 0;
    int n = 0;
    scanf("%lf", &a);
    scanf("%d", &n);
    printf("%lf\n", power(a, n));
    return 0;
}
