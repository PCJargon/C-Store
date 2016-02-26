#include <stdio.h>
#include <string.h>

/*
Jared Hafer
CS133U Assignment 7
02/25/16


*/

//functions declaration
void store_front();
int * taoism();
int * nihilism();
int * existent();
int * check_out(int checkout_array[8]);

int main()
{
	store_front(); //all other function calls nested within this function	
	return 0;
}

void store_front()
{
	int navi=0; //navigation
	int basket_array[8] = {0}; //array of holding
	int *tao_array[3], *nihil_array[3], *exis_array[3]; //arrays for function return value
	int *pointer4basket;

	pointer4basket = basket_array;

	//pointers set to different array locations, allowing for dynamic change
	tao_array[0] = &basket_array[0];
	tao_array[1] = &basket_array[1];
	tao_array[2] = &basket_array[2];
	nihil_array[0] = &basket_array[3];
	nihil_array[1] = &basket_array[4];
	nihil_array[2] = &basket_array[1];
	exis_array[0] = &basket_array[5];
	exis_array[1] = &basket_array[6];
	exis_array[2] = &basket_array[7];

	while (navi < 5)
	{
		printf("\n\nWelcome to the Void... Store.");
		printf("\nWhere everything is meaningless and the points don\'t matter.\n");
		printf("\nPlease make a selection from the following:\n1. Taoism\n2. Nihilism\n");
		printf("3. Existentialism\n4. Check out\n5. Close the void\n\n");
		
		scanf("%d", &navi);
		
		printf("\n\n");
	
		if (navi == 1)
		{
			*tao_array = taoism();
		}

		if (navi == 2)
		{
			*nihil_array = nihilism();
		}
		
		if (navi == 3)
		{
			*exis_array = existent();
		}

		if (navi == 4)
		{
			*basket_array = check_out(basket_array);

		}
	}
}

int * taoism()
{
	static int inner_tao_array[3];
	int select;
	char confirmation;

	printf("Choose a Taoism item to purchase:\n1. Tao Te Ching $8\n2. Yin Yang ");
	printf("Coffee Table $88\n3. The Texts of Taoism $8\n4+. Return to menu\n\n");
		
	scanf("%d", &select);

		if (select == 1)
		{
			printf("\nYou have selected Tao Te Ching for $8. Is this correct? (Y/N)\n");
			scanf("%s", &confirmation);
				
			if (confirmation == 'Y')
			{
				inner_tao_array[0] = 8;			}
			}
	
		if (select == 2)
		{
			printf("\nYou have selected Yin Yang Coffee Table for $88. Is this correct? (Y/N)\n");
			scanf("%s", &confirmation);

			if (confirmation == 'Y')
			{
				inner_tao_array[1] = 88;
			}
		}
	
		if (select ==3)
		{
			printf("\nYou have selected The Texts of Taoism for $8. Is this correct? (Y/N)\n");
			scanf("%s", &confirmation);

			if (confirmation == 'Y')
			{
				inner_tao_array[2] = 8;
			}
		}

return inner_tao_array;
}

int *  nihilism()
{
	int select;
	int the_void, enter_the_void;
	char confirmation;
	static int inner_nihil_array[3];

	printf("Choose a Nihilism product to purchase:\n1. Fight Club $6\n2. Thus ");
	printf("Spoke Zarathustra $7 \n3. Yin Yang Coffee Table $88\n4. Enter the ");
	printf("void\n5+. Return to menu\n\n");
		
	scanf("%d", &select);

	if (select == 1)
	{
		printf("You have selected Fight Club for $6. Is this correct? (Y/N)\n");
		scanf("%s", &confirmation);
			
		if (confirmation == 'Y')
		{
			inner_nihil_array[0] = 6;
		}
	}

	if (select == 2)
	{
		printf("You have selected Thus Spoke Zarathustra for $7. Is this correct? (Y/N)\n");
		scanf("%s", &confirmation);

		if (confirmation == 'Y')
		{
			inner_nihil_array[1] = 7;
		}
	}
			
	if (select == 3)
	{
		printf("You have selected Yin Yang Coffee Table for $88. Is this correct? (Y/N)\n");
		scanf("%s", &confirmation);

		if (confirmation == 'Y')
		{
			inner_nihil_array[2] = 88;
		}

	}

	if (select == 4)
	{
		for (the_void = 0; the_void < 42; the_void++)
		{
			printf("\n\n We become aware of the void as we fill it.\n\n");
			scanf("%s", &enter_the_void);
		
			if (enter_the_void == 'y')
			{
				the_void = 42.0;
			} 
		}
	}

return inner_nihil_array;
}

int * existent()
{
	int select;
	char confirmation;
	static int inner_exis_array[3];

	printf("Choose an Existentialism product to purchase:\n1. The Trial $5\n2. The Metamorphasis");
	printf(" $9\n3. Existentialism is a Humanism $9\n4+. Return to menu\n\n");
	scanf("%d", &select);

		if (select == 1)
		{
			printf("You have selected The Trial for $5. Is this correct? (Y/N)\n");
			scanf("%s", &confirmation);

			if (confirmation == 'Y')
			{
				inner_exis_array[0] = 5;
			}
		}
		if (select == 2)
		{
			printf("You have selected The Metamorphasis for $9. Is this correct? (Y/N)\n");
			scanf("%s", &confirmation);

			if (confirmation == 'Y')
			{
				inner_exis_array[1] = 9;
			}
		}
		if (select == 3)
		{
			printf("You have selected Existentialism is a Humanism for $9.");
			printf(" Is this correct? (Y/N)\n");
			scanf("%s", &confirmation);

			if (confirmation == 'Y')
			{
				inner_exis_array[2] = 9;
			}
		}

return inner_exis_array;
}
	
int * check_out(int checkout_array[8])
{
	const float tax = .1;
	int shopping_cart = 42;
	static int final_array[8]; //return array to continue shopping cart
	float sale_price_total;
	int sale_price, sale_counter;

	sale_price = 0;
	while(sale_counter < 8)
	{
		sale_price += checkout_array[sale_counter];
		sale_counter++;
	}
	sale_counter = 0;
	
	
	while (shopping_cart != 0)
	{	
		sale_price_total = (float)sale_price;
		sale_price_total = (sale_price_total*tax) + sale_price_total;
		printf("\n\nYour shopping cart total is %4.2f after tax.\n\nYou've chosen the ", sale_price_total);
		printf("following items:\n\n");

		if (checkout_array[0] != 0)
		{
			printf("1. Tao Te Ching at $8\n\n");
		}
	
		if (checkout_array[1] != 0)
		{
			printf("2. Yin Yang Coffee Table at $88\n\n");
		}
	
		if (checkout_array[3] != 0)
		{
			printf("3. Fight Club at $6\n\n");
		}

		if (checkout_array[4] != 0)
		{
			printf("4. Thus Spoke Zarathustra at $7\n\n");
		}

		if (checkout_array[5] != 0)
		{
			printf("5. The Trial at $5\n\n");
		}

		if (checkout_array[6] != 0)
		{
			printf("6. The Metamorphasis at $9\n\n");
		}

		if (checkout_array[2] != 0)
		{
			printf("7. The Texts of Taoism at $8\n\n");
		}

		if (checkout_array[7] != 0)
		{
			printf("8. Existentialism is a Humanism at $9\n\n");
		}
		
		printf("\n\nType 0 to exit, or enter the number of an item to remove it from your cart\n\n");
		scanf("%d", &shopping_cart);
	
		if (shopping_cart == 1 && checkout_array[0] != 0)
		{
			sale_price = sale_price - 8;
			checkout_array[0] = 0;
		}
	
		if (shopping_cart == 2 && checkout_array[1] != 0)
		{
			sale_price = sale_price - 88;
			checkout_array[1] = 0;
		}

		if (shopping_cart == 3 && checkout_array[3] != 0)
		{
			sale_price = sale_price - 6;
			checkout_array[3] = 0;
		}
	
		if (shopping_cart == 4 && checkout_array[4] != 0)
		{
			sale_price = sale_price - 7;
			checkout_array[4] = 0;
		}
	
		if (shopping_cart == 5 && checkout_array[5] != 0)
		{
			sale_price = sale_price - 5;
			checkout_array[5] = 0;
		}

		if (shopping_cart == 6 && checkout_array[6] != 0)
		{
			sale_price = sale_price - 9;
			checkout_array[6] = 0;
		}

		if (shopping_cart == 7 && checkout_array[2] != 0)
		{
			sale_price = sale_price - 8;
			checkout_array[2] = 0;
		}

		if (shopping_cart == 8 && checkout_array[7] != 0)
		{
			sale_price = sale_price - 9;
			checkout_array[7] = 0;
		}
	}

memcpy(final_array, checkout_array, sizeof final_array);

return final_array;
}
