/************************************************************************/
/* Author:  Kim Janik							*/
/* Simple script to test the available data ranges for integer types	*/
/************************************************************************/
#include <stdio.h>

int main(void)  {

    int choice;
    int normal_int;
    short short_int;
    long long_int;
    unsigned int unsigned_normal_int;
    unsigned short unsigned_short_int;
    unsigned long unsigned_long_int;

    printf("Which variable type would you like to experiment with?\n");
    printf("1 = integer\n");
    printf("2 = short\n");
    printf("3 = long\n");
    printf("4 = unsigned integer\n");
    printf("5 = unsigned short\n");
    printf("6 = unsigned long\n");
    scanf("%d", &choice);

    if ((choice < 7) && (choice > 0))  {
        printf("You may enter as many numbers as you would like.  ");
        printf("Enter '0' to exit\n");
    }

    switch (choice)  
    {
        case (1):
            do {
                printf("Type in a signed integer:\n");
                scanf("%d", &normal_int);
                printf("Value:  %d\n", normal_int);
            }  while (normal_int != 0);
	    break;
        case (2):
            do {
                printf("Type in a short integer:\n");
                scanf("%hd", &short_int);
                printf("Value:  %hd\n", short_int);
            }  while (short_int != 0);
	    break;
        case (3):
            do {
                printf("Type in a long integer:\n");
                scanf("%ld", &long_int);
                printf("Value:  %ld\n", long_int);
            }  while (long_int != 0);
	    break;
        case (4):
            do {
                printf("Type in an unsigned integer:\n");
                scanf("%u", &normal_int);
                printf("Value:  %u\n", normal_int);
            }  while (normal_int != 0);
	    break;
        case (5):
            do {
                printf("Type in an unsigned short integer:\n");
                scanf("%hu", &short_int);
                printf("Value:  %hu\n", short_int);
            }  while (short_int != 0);
	    break;
        case (6):
            do {
                printf("Type in an unsigned long integer:\n");
                scanf("%lu", &long_int);
                printf("Value:  %lu\n", long_int);
            }  while (long_int != 0);
	    break;
	default:
	    printf("This is not a valid choice.  Goodbye.\n");
    }
   
}


