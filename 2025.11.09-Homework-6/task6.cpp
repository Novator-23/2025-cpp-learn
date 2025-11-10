#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    int n = 0;
    int counter = 0;
    scanf("%d", &n);
    int* arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < (n-1); ++i) {
        if (arr[i-1] < arr[i] && arr[i+1] < arr[i]) {
            counter++;
        }
    }
    printf("%d\n", counter);
    free(arr);
    return 0;
}
