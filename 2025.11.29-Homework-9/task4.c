#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

double distance(struct Point a, struct Point b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;
    return sqrt((double)(dx*dx + dy*dy));
}

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);

    struct Point points[100];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double max_perimeter = 0.0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                double a = distance(points[i], points[j]);
                double b = distance(points[j], points[k]);
                double c = distance(points[k], points[i]);

                if (a + b > c && a + c > b && b + c > a) {
                    double perimeter = a + b + c;
                    if (perimeter > max_perimeter) {
                        max_perimeter = perimeter;
                    }
                }
            }
        }
    }

    printf("%.15f\n", max_perimeter);
    return 0;
}
