#include <cstdio>
 
int main(){
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    a -= 1;
    c -= 1;
    int a_to_b[b - a];
    for (int i = 0; i < (b - a); ++i)
        a_to_b[i] = 0;
    int c_to_d[d - c];
    for (int i = 0; i < (d - c); ++i)
        c_to_d[i] = 0;
    
    int m[n]; 
    for(int i = 0; i <= n;){
        m[i] = i + 1;
        i++;
    }   
    int count = 0;
    for (int i = 0; i < n; i++){
        if ((i >= a) && (i < b)){
            a_to_b[count] = m[i];
            ++count;
        }
    }

    int g = b - a - 1;
    for (int i = 0; i < n; i++){
        if ((i >= a) && (i < b)){
            m[i] = a_to_b[g];
            --g;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++){
        if ((i >= c) && (i < d)){
            c_to_d[count] = m[i];
            ++count;
        }
    }
    int j = d - c - 1;
    for (int i = 0; i < n; i++){
        if ((i >= c) && (i < d)){
            m[i] = c_to_d[j];
            --j;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", m[i]);
    printf("\n");
 
    return 0;
}