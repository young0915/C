#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>		// strlen and more.
#include <stdlib.h>	    // malloc 은 stdlib.h에 선언이 되어있습니다.


int main()
{
	// strlen이란
	// 문자열의 길이를 알기위한 키워드이다.
	// 검색창을 보면 \0으로 컴파일러로 인해 뒤에가 0을 채우는데 요즘은안나오게 처리한다.
	// strlen은 null character를 빼주고 계산해서 출력한다.
	char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = "\0";
	char str4[100] = "\n";


	printf("%zu %zu \n", sizeof(str1), strlen(str1)); 
	printf("%zu %zu \n", sizeof(str2), strlen(str2));
	printf("%zu %zu \n", sizeof(str3), strlen(str3)); // null character만 있기 때문에 strlen에서는 글자가 하나도 없는 걸로 처리함.
	printf("%zu %zu \n", sizeof(str4), strlen(str4));


	/*Extra*/
	char *str5 = (char*)malloc(sizeof(char) * 100);
	str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l';  str5[3] = 'l'; str5[4] = 'o';
	str5[5] = '\0';
	printf("%zu %zu \n", sizeof(str5), strlen(str5));
	// sizeof(str5), 포인트 전체 사이즈.
	// 메모리를 얼마나 할당받는 지를 알 수 없음. 런타임에서 결정되기 때문이다.

	return 0;
}


/*
100 5
6 5
100 0
100 1
*/