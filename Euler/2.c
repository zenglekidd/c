#include <stdio.h>

int main(int argc, char const *argv[])
{
	int total = 2;
	int numPre = 1;
	int num = 2;
	while (num < 4000000) {
		int tmp = num + numPre;
		numPre = num;
		num = tmp;

		

		if (num % 2 == 0)
		{
			total += num;
		}
	}

	printf("total: %d", total);

	return 0;
}