#include <stdio.h>

int isPalindromic(int num) {

	int a = (num / 100000) % 10;
	int b = (num / 10000) % 10;
	int c = (num / 1000) % 10;
	int d = (num / 100) % 10;
	int e = (num / 10) % 10;
	int f = num % 10;

	printf("%d,%d,%d, %d,%d,%d\n", a,b,c,d,e,f);
}

int main(int argc, char const *argv[])
{
	// for (int i = 999; i >= 100; --i)
	// {
	// 	for (int j = 999; j >= 100; --j)
	// 	{

	// 	}

	// 	if (i % 11 != 0)
	// 	{
			
	// 	}
	// }

	isPalindromic(900123);

	return 0;
}