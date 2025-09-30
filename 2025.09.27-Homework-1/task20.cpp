#include <cstdio>
  
long long a = 0;
long long b = 0;

int main(int argc, char** argv){
  scanf("%lld %lld", &a, &b);
  printf("%lld %lld %lld", b / a, b % a, ((a - b % a)) % a);
  return 0;
}