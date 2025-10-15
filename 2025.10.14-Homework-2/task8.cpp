#include <stdio.h>
#include <math.h>


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == 0 && b == 0 && c == 0)
    {
        printf("-1");
        return 0;
    }
    
    if (a == 0)
    {
        if (b == 0)
        {
            printf("0");
        }
        else
        {
            printf("1\n");
            double x = -c * 1.0 / b;
            printf("%f", x);
        }
        return 0;
    }
    
    int discriminant = b * b - 4 * a * c;
    
    if (discriminant < 0)
    {
        printf("0");
    }
    else if (discriminant == 0)
    {
        printf("1\n");
        double x = -b / (2.0 * a);
        printf("%f", x);
    }
    else
    {
        printf("2\n");
        double sqrt_d = sqrt(discriminant);
        double x1 = (-b - sqrt_d) / (2.0 * a);
        double x2 = (-b + sqrt_d) / (2.0 * a);
        
        if (x1 < x2)
        {
            printf("%f\n%f", x1, x2);
        } 
        else
        {
            printf("%f\n%f", x2, x1);
        }
    }
    
    return 0;
}