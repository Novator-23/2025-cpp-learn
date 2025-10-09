#include <cstdio>

  
int main(int argc, char** argv)
{
  long long a = 0;
  scanf("%lld", &a);
  printf("%lld", (a % 1000 / 100) + ((a % 100) / 10) + a  % 10);
  return 0;
}