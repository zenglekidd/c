#include <stdio.h>
#include <stdint.h>

int64_t isPrime(int64_t n) {
	if (n == 2)
	{
		return 1;
	}

	if (n < 2)
	{
		return 0;
	}

	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

static int64_t array[10] = {};
static int index = 0;

void findPrimeFactors(int64_t number) {
	if (isPrime(number))
	{
		array[index] = number;
		index++;

		return;
	}

	for (int64_t i = 0; i < number; ++i)
	{
		if (isPrime(i) && number % i == 0)
		{
			array[index] = i;
			index++;

			return findPrimeFactors(number / i);
		}
	}
}

int main(int argc, char const *argv[])
{
	int64_t number = 600851475143;
	printf("What is the largest prime factor of the number %lld ?\n", number);
	
	findPrimeFactors(number);

	int64_t largestNum = 0;
	for (int i = 0; i < 100; ++i)
	{
		if (array[i] && array[i] > largestNum)
		{
			largestNum = array[i];
		}
	}

	printf("%lld\n", largestNum);
	
	return 0;
}