#include <cstdio>

int main()
{
    double x = 0;
    double y = 0;
    int count = 1;

    scanf("%lf %lf", &x, &y);

    while (x < y) {
        ++count;
        x = (x * 115) / 100;
    }
    printf("%d", count);

    return 0;
}