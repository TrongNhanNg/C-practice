// C program to demonstrate character arithmetic.
#include <stdio.h>

int main()
{
	char ch1 = 120;
	int n = 12;
	for ( int i = 0; i < n; i++)
	{
		printf("%d\t", ch1);
		printf("%c\n", ch1);

		ch1 += 1;
	}
	return 0;
}


