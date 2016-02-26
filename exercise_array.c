#include <stdio.h>

int main(void)
{
	int numbers_array[10];
	int loop_count;
	long int sum;
	
	printf("\n\nPlease enter 10 numbers and press enter: \n");
	scanf("%d", &numbers_array);

	sum = 0;
	loop_count = 0;

	while (loop_count < 10)
	{
		sum = sum + numbers_array[loop_count];
		++loop_count;
	}

	printf("\n\n%d\n\n", sum);

	return 0;
}
