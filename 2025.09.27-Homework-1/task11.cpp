#include <cstdio>

  
long long a = 0;
  
int main(int argc, char** argv){
  scanf("%lld", &a);
  printf("%lld", (a / 2 + a % 2) * (a / 2 + a % 2));
  return 0;
}