#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int get_integger(void);
void count(void);

int main()
{

	int user_choice;

	while ((user_choice = get_choice()) != 'p')
	{
		switch (user_choice)
		{
		case 'a':
			printf("Avengers assemble! \n");
			break;
		case 'b':
			putchar('\a');				 // Beep(¼Ò¸®)
			break;
		case 'c':
			count();
			break;
		case 'q':
			printf("Error with %d. \n", user_choice);
			exit(1);
			break;
		}
	}


	return 0;
}


void count(void)
{
	int n, i;

	printf("Entter an integer : \n");
	n = get_integger();
	for (i = 1; i <= n; ++i)
		printf("%d\n", i);
	while (getchar()!='\n')
	{
		continue;
	}
}

char get_choice(void)
{
	int user_input;


	printf("Entter the letter of your choice : \n");
	printf("a. avemgers\tb b. beep \n");
	printf("c. count \tq d. quit \n");

	user_input = get_first_char();

	while ((user_input < 'a' || user_input > 'c' ) && user_input != 'q')
	{
		printf("Please try again. \n");
		user_input = get_first_char();
	}

	return user_input;
}


char get_first_char(void)
{
	int ch;

	ch = getchar();
	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}

int get_integger(void)
{
	int input;
	char c;

	while (scanf("%d", &input)!= 1)
	{
		while (c=getchar() != '\n')
		{
			putchar(c);
		}
		printf("is not an integer. \n Please try again.");
	}
	return input;
}

