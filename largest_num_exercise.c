#include <stdio.h>

int main(void)
{
	int find_zero, current_num, old_num;

	find_zero = 1;
	current_num = 0;
	old_num = 0;

	while (find_zero != 0)
	{
		printf("\n\nPlease enter a number: ");
		scanf("%d", &find_zero);

		if (old_num < find_zero)
		{
			old_num = find_zero;
		}
	}
	
	printf("\n\nThe largest number entered was %d\n\n", old_num);
	return 0;
}
