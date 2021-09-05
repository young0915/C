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
	// sizeof �����ڶ� ������ ũ��(�޸𸮸� �� ��)�� ��Ÿ���� Ű����.
	// size_t�� Ȥ�ó� �ٸ� �ý��ۿ��� �� �����ڰ� ���� �ڷ���(����)�� �ƴ� ��찡 ���� �� �� �־ ��� �ϱ����� �����!
	// �̽ļ��� ���� ����Ѵ�.���������� ����Ѵٸ� ���� �����غ��� ���� ����..
	//	���� �����ڴ� %zu�� ���.
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

	int int_arr[30];						// �޸𸮰��� 30���� ���.
	int* int_ptr = NULL;					// ���� ������ ����.
	int_ptr = (int*)malloc(sizeof(int) * 30);			// �޸� �Ҵ��Ͽ� ��ǥ ����� �ּҷ� ��� . 

	printf("Size of Array = %zu bytes \n", sizeof(int_arr));  // �ּ��� ������ -> 120 
	printf("Size of Array = %zu bytes \n", sizeof(int_ptr));  // �ּҸ� ���� ���� ����� ���´�. -> 4����Ʈ


	// �迭�� �������� ���̶�?
	// �迭 ���� ���� �����Ϸ����� �޸𸮸� �Ҵ��ϰ� �����ʹ� ��Ÿ�ӿ��� �޸𸮸� ������ �� �ִ�.


	/* 3. sizeof character array */

	char c = 'a';
	char string[10]; //

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char = %zu bytes \n", char_size);
	printf("Size of string = %zu bytes \n", str_size);


	/* 4. szieof structure */

	// ����ü 
	// ex �ΰ��� ���� �ٸ� �ڷ����� ����ִ�.
	// 4(int) + 4(float)= 8 ����. 

	printf("%zu\n", sizeof(struct MyStruct));

	return 0;
}