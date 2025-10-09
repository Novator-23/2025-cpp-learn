#include <cstdio>

  
int main(int argc, char** argv)
{
  long long a = 0;
  long long b = 0;
  scanf("%lld %lld", &a, &b);
  printf("%lld %lld", ((b % a + a) / a) + ((b-1) / a), b - a*((b-1)/a));
  return 0;
}