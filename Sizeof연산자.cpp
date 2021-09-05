#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h> // malloc


struct  MyStruct
{
	int i;
	float f;
};


int main()
{

	/*1. sizeof basic types */

	int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);
	size_t flaot_size = sizeof(float);

	printf("Size of int Type is %u byte. \n", int_size1);
	printf("Size of int Type is %zu byte. \n", int_size4);
	printf("Size of float Type is %zu byte. \n", flaot_size);


	/* 2. sizeof arrays */

	int int_arr[30];						// 메모리공간 30개를 사용.
	int* int_ptr = NULL;					// 임의 값으로 설정.
	int_ptr = (int*)malloc(sizeof(int)*30);			// 메모리 할당하여 대표 사이즈를 주소로 사용 . 
	
	printf("Size of Array = %zu bytes \n", sizeof(int_arr));  // 주소의 사이즈 -> 120 
	printf("Size of Array = %zu bytes \n", sizeof(int_ptr));  // 주소를 적는 공간 사이즈를 나온다. -> 4바이트


	/* 3. sizeof character array */

	char c = 'a';
	char string[10]; //

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char = %zu bytes \n", char_size);
	printf("Size of string = %zu bytes \n", str_size);


	/* 4. szieof structure */

	// 구조체 
	// ex 두개의 서로 다른 자료형이 들어있다.
	// 4(int) + 4(float)= 8 나옴. 

	printf("%zu\n", sizeof(struct MyStruct));
	
	return 0;
}