#include <stdio.h>

/*
Jared Hafer
CS133U Assignment 4
02/05/16

Assignment 4: Upgrade prior store program to include a shopping cart (which mine already had =3), unique numbers for each product, confirmation on selection, and a list at checkout (which I already had =3).

I updated the variable names per your suggestion on the last submission. Added Y/N confirmation. Otherwise I already had included required components for this assignment. I wasn't completely sure if you intended that each product have an assigned number that would be unique no matter which section of the store they were in, but that wouldn't be too difficult to do... but it could make for mistake selections from other sections, and might make it look messy since some items are in more than one section.

*/

int main (void)
{
	int navi, select, shopping_cart; //navigation for different sections
	float sale_price = 0, sale_price_total; //sum of chosen items, and total sum with tax
	int the_void; //the void sub menu vars
	char enter_the_void, confirmation; //added confirmation var for Y/N on selection

	int tao_te = 0, yin_yang = 0, fight_club = 0, thus_spoke = 0;
	int the_trial = 0, the_meta = 0, texts_tao = 0, exist_hum = 0;
	//vars for each shopping item

	const float tax = .1; //static tax amount
	
	while (navi < 5)
	{
	printf("\n\nWelcome to the Void... Store.");
	printf("\nWhere everything is meaningless and the points don\'t matter.\n");
	printf("\nPlease make a selection from the following:\n1. Taoism\n2. Nihilism\n");
	printf("3. Existentialism\n4. Check out\n5. Close the void\n\n");
	
	scanf("%d", &navi); //navigation entry
	
	printf("\n\n");

	if (navi == 1)
	{
		printf("Choose a Taoism item to purchase:\n1. Tao Te Ching $8\n2. Yin Yang ");
		printf("Coffee Table $88\n3. The Texts of Taoism $8\n4+. Return to menu\n\n");
		
		scanf("%d", &select);

			if (select == 1)
			{
				printf("\nYou have selected Tao Te Ching for $8. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);
				
				if (tao_te !=1 && confirmation == 'Y')
				{
					tao_te = 1;
					sale_price = sale_price + 8.0;
				}
			}
			if (select == 2)
			{
				printf("\nYou have selected Yin Yang Coffee Table for $88. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);

				if (yin_yang !=1 && confirmation == 'Y')
				{
					yin_yang = 1;
					sale_price = sale_price + 88.0;
				}
			}
			if (select ==3)
			{
				printf("\nYou have selected The Texts of Taoism for $8. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);

				if (texts_tao !=1 && confirmation == 'Y')
				{
					texts_tao = 1;
					sale_price = sale_price + 8.0;
				}
			}
	}
	
	if (navi == 2)
	{
		printf("Choose a Nihilism product to purchase:\n1. Fight Club $6\n2. Thus ");
		printf("Spoke Zarathustra $7 \n3. Yin Yang Coffee Table $88\n4. Enter the ");
		printf("void\n5+. Return to menu\n\n");
		
		scanf("%d", &select);

			if (select == 1)
			{
				printf("You have selected Fight Club for $6. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);
				
				if (fight_club != 1 && confirmation == 'Y')
				{
					fight_club = 1;
					sale_price = sale_price + 6.0;
				}
			}
			if (select == 2)
			{
				printf("You have selected Thus Spoke Zarathustra for $7. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);

				if (thus_spoke != 1 && confirmation == 'Y')
				{
					thus_spoke = 1;
					sale_price = sale_price + 7.0;
				}
			}
			
			if (select == 3)
			{
				printf("You have selected Yin Yang Coffee Table for $88. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);

				if (yin_yang != 1 && confirmation == 'Y')
				{
					yin_yang = 1;
					sale_price = sale_price + 88.0;
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
	
	}

	if (navi == 3)
	{
		printf("Choose an Existentialism product to purchase:\n1. The Trial $5\n2. The Metamorphasis");
		printf(" $9\n3. Existentialism is a Humanism $9\n4+. Return to menu\n\n");
		scanf("%d", &select);

			if (select == 1)
			{
				printf("You have selected The Trial for $5. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);

				if (the_trial != 1 && confirmation == 'Y')
				{
					the_trial = 1;
					sale_price = sale_price + 5.0;
				}
			}
			if (select == 2)
			{
				printf("You have selected The Metamorphasis for $9. Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);

				if (the_meta != 1 && confirmation == 'Y')
				{
					the_meta = 1;
					sale_price = sale_price + 9.0;
				}
			}
			if (select == 3)
			{
				printf("You have selected Existentialism is a Humanism for $9.");
				printf(" Is this correct? (Y/N)\n");
				scanf("%s", &confirmation);

				if (exist_hum != 1 && confirmation == 'Y')
				{
					exist_hum = 1;
					sale_price = sale_price + 9.0;
				}
			}
	}
	
	if (navi == 4)
	{
		shopping_cart = 42;
		while (shopping_cart != 0)
		//check current price and remove items
		{
			sale_price_total = sale_price + (sale_price * tax);
			printf("\n\nYour shopping cart total is %4.2f after tax.\n\nYou've chosen the ", sale_price_total);
			printf("following items:\n\n");

		if (tao_te == 1)
		{
			printf("1. Tao Te Ching at $8\n\n");
		}
		
		if (yin_yang == 1)
		{
			printf("2. Yin Yang Coffee Table at $88\n\n");
		}

		if (fight_club == 1)
		{
			printf("3. Fight Club at $6\n\n");
		}

		if (thus_spoke == 1)
		{
			printf("4. Thus Spoke Zarathustra at $7\n\n");
		}

		if (the_trial == 1)
		{
			printf("5. The Trial at $5\n\n");
		}

		if (the_meta == 1)
		{
			printf("6. The Metamorphasis at $9\n\n");
		}

		if (texts_tao == 1)
		{
			printf("7. The Texts of Taoism at $8\n\n");
		}

		if (exist_hum == 1)
		{
			printf("8. Existentialism is a Humanism at $9\n\n");
		}
		
		printf("\n\nType 0 to exit, or enter the number of an item to remove it from your cart\n\n");
		scanf("%d", &shopping_cart);
		
		if (shopping_cart == 1 && tao_te == 1)
		{
			sale_price = sale_price - 8.0;
			tao_te = 0;
		}

		if (shopping_cart == 2 && yin_yang == 1)
		{
			sale_price = sale_price - 88.0;
			yin_yang = 0;
		}

		if (shopping_cart == 3 && fight_club == 1)
		{
			sale_price = sale_price - 6.0;
			fight_club = 0;
		}

		if (shopping_cart == 4 && thus_spoke == 1)
		{
			sale_price = sale_price - 7.0;
			thus_spoke = 0;
		}

		if (shopping_cart == 5 && the_trial == 1)
		{
			sale_price = sale_price - 5.0;
			the_trial = 0;
		}
		if (shopping_cart == 6 && the_meta == 1)
		{
			sale_price = sale_price - 9.0;
			the_meta = 0;
		}
		if (shopping_cart == 7 && texts_tao == 1)
		{
			sale_price = sale_price - 8.0;
			texts_tao= 0;
		}
		if (shopping_cart == 8 && exist_hum == 1)
		{
			sale_price = sale_price - 9.0;
			exist_hum= 0;
		}
	}
	}
	}
	return 0;
}
