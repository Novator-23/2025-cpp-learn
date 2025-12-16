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
    double max_dist = 0;

    for (int i = 0; i < n; i++) {
    scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long dx = arr[i].x - arr[j].x;
                long long dy = arr[i].y - arr[j].y;
                double dist = sqrt((double)(dx*dx + dy*dy));
                if (dist > max_dist) {
                    max_dist = dist;
                }
            }
        }

    printf("%.15f\n", max_dist);
    free(arr);
    return 0;
}
