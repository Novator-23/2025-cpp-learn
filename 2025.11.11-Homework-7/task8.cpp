#include <stdio.h>

unsigned long binomchic(int n, int k) {
    unsigned long long sum = 1;
    unsigned long znam = 1;
    for (int i = 2; i < n+1; i++) {
        sum *= i;
        if (i <= n-k){
            znam *= i;
        }
    }
    for (int i = 2; i < k+1; i++) {
        znam *= i;
    }
    sum = sum / znam;
    return sum;
}

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    printf("%llu\n", binomchic(n, k));
    return 0;
}