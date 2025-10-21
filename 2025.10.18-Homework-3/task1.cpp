#include <cstdio>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int a = 0;
    int b = 1;
    while(i < n){
        b = a + b;
        a = b - a;
        ++i;
    }
    printf("%d\n", a);
    return 0;
}