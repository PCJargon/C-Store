#include <stdio.h>

float function_1(float money1, int array_num)
{
	float total=0;

	for(array_num=0; x<array_num; array_num++)
	{
		total = money1[array_num] + total;
	}
	return total;
}

int main()
{
	float money2[10];
	float total_before_tax, total_after_tax;
	const float tax = .1;

	printf("\n\nPlease enter the money values (up to 10): \n");
	scanf("%f", &money2);

	total_before_tax = function_1(money2, 10);
	total_after_tax = total_before_tax - (total_before_tax * tax);
	
	printf("\n\nYour total after %0.1f tax is %6.2f.\n\n", tax, total_after_tax);

	return 0;
}

