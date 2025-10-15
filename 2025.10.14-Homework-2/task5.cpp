#include <stdio.h>


int main() 
{
    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 1 && n > 1)
    {
        printf("%d", n);
    }
    else 
    {   
        printf("%d", n / 2);
    }
    
    return 0;
}