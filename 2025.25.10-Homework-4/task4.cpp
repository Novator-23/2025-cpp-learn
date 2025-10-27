#include <cstdio>
#include <cstdlib>

int main(){
    int n = 0;
    scanf("%d", &n);
    int m[n];

    for(int i = 0; i < n; i++)
        m[i] = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    
    int d = 0;
    scanf("%d", &d);
    int max = 10000;
    int min = -10000;
    
    for (int i = 0; i < n; i++){
        if ((m[i] >= d) && (m[i] < max))
            max = m[i];
        if ((m[i] <= d) && (m[i] > min))
            min = m[i];
    }

    if (abs(max - d) < (d - min)){
        printf("%d\n", max);
    }
    else
        printf("%d\n", min);
    return 0;
}