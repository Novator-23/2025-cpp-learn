#include <cstdio>
#include <stdlib.h>


int main(int argc, char** argv)
{
  long long a = 0;
  long long b = 0;
  scanf("%lld %lld", &a, &b);
  b = abs(b);
  printf("%lld", (b + a % b) % b);
  return 0;
}