#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	FILE *file = NULL;
	char file_name[] = "my_file.txt";		// TODO : use scanf(...)

	file = fopen(file_name, "r");			// 파일을 읽어오는 함수
	if (file == NULL)
	{
		printf("Failed to open file. \n");
		exit(1);					// 실행이 잘못되었다는 의미로 '1' 나오도록 함.
	}

	// 파일을 읽어들일 때
	while ((c = getc(file)) != EOF)			
	{
		putchar(c);
	}
	fclose(file);


	return 0;
}