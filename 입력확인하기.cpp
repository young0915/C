#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);

int main()
{
	long number;

	while (1)
	{
		printf("Plesase input a number between 1 and 100. \n");
	
		number = get_long();

		if (number > 1 && number < 100)
		{
			printf("OK. Thank youn. \n");
			break;
		}
		else
			printf("wron input. \n");
	}

	printf("Your input %d is between 1 and 100. Thank you");
	

	return 0;
}

long get_long(void)
{
	printf("Please input an integer and press enter. \n");

	long input;
	char c;

	// 정수가 아닌지 확인.
	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		while ((c = getchar()) != '\n')
		{
			putchar(c); //input left in buffer
		}
		printf(" - is not an integaer. Please try again. \n");
	}

	printf("Your input %ld is an integer. Thank you. \n", input);

	return input;
}