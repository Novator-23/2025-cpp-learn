#include <cstdio>
#include <stdlib.h>
  
long long a = 0;
long long b = 0;

int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  b = abs(b);
  printf("%lld", (b + a % b) % b);
  return 0;
}