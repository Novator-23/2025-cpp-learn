#include <cstdio>


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    int flag = 1;
    
    if (a != 0)
    {
        printf("%d", a);
        flag = 0;
    }
    
    if (b != 0)
    {
        if (!flag)
        {
            if (b > 0)
            {
                printf("+");
            }
        }
        if (b == -1)
        {
            printf("-");
        }
        else if (b != 1)
        {
            printf("%d", b);
        }
        printf("x");
        flag = 0;
    }
    
    if (c != 0)
    {
        if (!flag)
        {
            if (c > 0)
            {
                printf("+");
            }
        }
        if (c == -1)
        {
            printf("-");
        }
        else if (c != 1) 
        {
            printf("%d", c);
        }
        printf("y");
        flag = 0;
    }
    
    if (flag)
    {
        printf("0");
    }
    
    return 0;
}