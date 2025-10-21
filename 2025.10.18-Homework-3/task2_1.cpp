#include <cstdio>

int main()
{
    int a = 0; 
    int num = 8;
    int cur = 1;
    int maxl = 1;
    do
    {
        if (a == num) {
            cur++;
        } 
        else {
            if (cur > maxl) {
                maxl = cur;
            }
            cur = 1;
        }
        num = a;
        if (cur > maxl) {
        maxl = cur;
        }
    } while (scanf("%d", &a) == 1 && a != 0);
    
    printf("%d", maxl);
    return 0;
}