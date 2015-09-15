#include <stdio.h>
#include <stdint.h>

int64_t leastCommonMultiple(int64_t x, int64_t y) {
  int64_t a = x;
  int64_t b = y;
  int64_t t;
 
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
 
  int64_t gcd = a;
  int64_t lcm = (x*y)/gcd;

  return lcm;
}

int main(int argc, char const *argv[])
{
	int64_t lcm = 1;
	for (int64_t i = 2; i <= 20; ++i)
	{
		lcm = leastCommonMultiple(lcm, i);
	}

	printf("%lld\n", lcm);

	return 0;
}