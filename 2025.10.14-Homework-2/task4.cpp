#include <stdio.h>


int main() 
{
    int n = 0;
    scanf("%d", &n);
    if ((n / 100000 + (n % 100000) / 10000 + (n % 10000) / 1000) == ((n % 1000) / 100 + (n % 100) / 10 + (n % 10)))
    {
        printf("YES");
    } 
    else 
    {   
        printf("NO");
    }
    
    return 0;
}