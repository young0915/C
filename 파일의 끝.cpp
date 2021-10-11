#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;
	
	//while ((c = getchar()) != EOF) //End Of File는 -1 값을 가지고 있다.
	//	putchar(c);
	// getchar로 받은 값은 -1이어야하는데 아스키코드에는 음수가 없으니 ^z로 입력하면 
	// 프로그램이 종료된다.

	while (1)
	{
		c = getchar();					
		printf("%d\n", c);
		if (c == EOF)
			break;
	}

	return 0;
}


/*
파일의 끝
 getchar이란 표준 입력에서 문자 하나를 입력받은 뒤 결과를 반환하는 함수이다.

 stream이란 데이터의 파일을 이용해서 프로그램으로 흘러보내는것을 의미한다.
 즉, 데이터의 입력과 출력은 프로그래므이 흐름을 뜻하는 것
*/