#include <cstdio>
  
long long a = 0;
long long b = 0;

int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  printf("%lld", ((a * b) % 109 + 109) % 109 + 1);
  return 0;
}