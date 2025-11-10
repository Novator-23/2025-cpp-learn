#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
