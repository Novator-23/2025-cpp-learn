#include <stdio.h>

double power(double a, unsigned long long n) {
    double result = 1.0;
    while (n > 0) {
        if (n % 2 == 1) {
            result = result * a;
        }
        a = a * a;
        n = n / 2;
    }
    return result;
}

int main()
{
    double a;
    unsigned long long n;
    scanf("%lf %llu", &a, &n);
    printf("%g\n", power(a, n));
    return 0;
}