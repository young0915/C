#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	Assume that your inputs is 
	Hello 123 3.14
	*/


	//char str[255];
	//int i, i2;
	//double d;

	//scanf("%s %d %lf", str, &i, &d);
	//printf("%s %d %f\n", str, i, d);


	//// or (see the difference)

	//scanf("%s %d %d", str, &i, &i2);
	//printf("%s %d %d\n", str, i, i2);							// i2는 소수점들은 출력하지 않을 것이다.


	char c;

	while ((c = getchar()) != '\n') // 입력 버퍼에서 문자를 계속 꺼내고 \n를 꺼내면 반복을 중단 
		putchar(c);

	printf("\n");

}


// 입력 스트립과 숫자
// 입력 받는 과정이 내부에서 어떻게 일어나는 지 알아가는 과정
// 즉, 자료형에 따라서 입력한 내용에 대해 다르게 받아들임. 


