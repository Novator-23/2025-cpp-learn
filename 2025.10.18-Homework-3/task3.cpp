#include <cstdio>

int main()
{
    int a;
    int b;
    int nok = 0;
    int nod = 0;

    scanf("%d %d", &a, &b);

    int main_a = a;
    int main_b = b;
    
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }

    nod = a;

    nok = main_a * main_b / nod;

    printf("%d", nok);

    return 0;
}