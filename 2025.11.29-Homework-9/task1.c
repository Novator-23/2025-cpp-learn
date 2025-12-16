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
    struct point max = {0, 0};
    int max_sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
        if ((arr[i].x * arr[i].x + arr[i].y * arr[i].y) > max_sum) {
            max_sum = arr[i].x * arr[i].x + arr[i].y * arr[i].y;
            max.x = arr[i].x;
            max.y = arr[i].y;
        }
    }
    printf("%d %d", max.x, max.y);
    free(arr);
    return 0;
}