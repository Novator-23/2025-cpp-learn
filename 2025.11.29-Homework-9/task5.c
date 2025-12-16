#include <stdio.h>

struct Student {
    char surname[21];
    char name[21];
    int math;
    int physics;
    int informatics;
};

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);

    struct Student students[100];

    for (int i = 0; i < n; i++) {
        scanf("%20s %20s %d %d %d",
              students[i].surname,
              students[i].name,
              &students[i].math,
              &students[i].physics,
              &students[i].informatics);
    }

    double sum_math = 0.0, sum_physics = 0.0, sum_info = 0.0;

    for (int i = 0; i < n; i++) {
        sum_math += students[i].math;
        sum_physics += students[i].physics;
        sum_info += students[i].informatics;
    }

    printf("%.6f %.6f %.6f\n",
           sum_math / n,
           sum_physics / n,
           sum_info / n);

    return 0;
}
