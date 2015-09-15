#include <stdio.h>
#include <math.h>
#include <stdint.h>

int isPrime(int n) {
	if (n == 2)
	{
		return 1;
	}

	if (n < 2)
	{
		return 0;
	}

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main(int argc, char const *argv[])
{
	int64_t sum = 0;
	int num = 2;
	while (num < 2000000) {
		if (isPrime(num))
		{
			printf("prime: %d\n", num);
			sum += num;
		}

		num++;
	}

	printf("sum: %lld\n", sum);
	
	return 0;
}