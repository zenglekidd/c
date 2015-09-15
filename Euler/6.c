#include <stdio.h>

int getSumToNumber(int num) {
	int sum = 0;

	for (int i = 1; i <= num; ++i)
	{
		sum += i;
	}

	return sum;
}

int main(int argc, char const *argv[])
{
	int num = 100;

	int sum = getSumToNumber(num);

	int total = 0;

	for (int i = 1; i <= num; ++i)
	{
		total += i * (sum - i);
	}

	printf("total:%d\n", total);

	return 0;
}