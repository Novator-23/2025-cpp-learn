#include <stdio.h>

int min(int a, int b, int c, int d) {
    int arr[4] = {a, b , c, d};
    int min  = arr[0];
    for (int i = 0; i < 4; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int main(int argc, char** arcv)
{   
    int arr[4] = {0};
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", min(arr[0], arr[1], arr[2], arr[3]));
    return 0;
}