#include <stdio.h>
#include <conio.h>

// 입출력 버퍼
// 사용하는 이유. 속도가 빠르고 효율성이 좋기 때문이다.
// (입출력 버퍼 추가 설명)

/*
입출력 버퍼
버퍼를 입력하거나 출력할 때

게임에서는 버블 버퍼링을 이용하영 버퍼링(게돌 도는 현상 발생하는 것이다.)
-> 속력과 효율성이 높아서 입출력 버퍼를 사용하는 것이다.
버


*/


int main()
{
	char c;
	while ((c = _getche()) != '.') // _getche는 echo 뜻 예를 들어 a를 출력하면 한번더 a가 출력된다. 
		putchar(c);					

	return 0;
}


/*
_getche를 사용할떄 _getche에 'e' echo를 의미한다. 한글자 입력할때마다 같이 입력된다.
hheellpp
*/