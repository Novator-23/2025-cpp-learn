#include <stdio.h>
#include <stdlib.h>
 
struct point {
    int x;
    int y;
};

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    struct point* arr = malloc(n * sizeof(struct point));
    double sum_x = 0;
    double sum_y = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
        sum_x += arr[i].x;
        sum_y += arr[i].y;
    }
    printf("%lf %lf", sum_x / n, sum_y / n);
    free(arr);
    return 0;
}