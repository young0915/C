#include <stdio.h> 

int main()
{
	// 문자열이 메모리에 저장되는 구조.
	int a = 1;
	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

	// 접근하는 주소 출력.
	printf("%i %i %i \n", int_arr[0], int_arr[1], int_arr[9]);


	//printf("%i \n", int_arr[10000]);		// 범위를 넘어서 발생하는 에러

		char c = 'a';
	char str1[10] = "Hello"; // null character -> 최대 9글자 저장 가능하다.
	char str2[10] = { 'H', 'i' };

	printf("%c \n", c);
	printf("%s \n", str1);
	printf("%s \n", str2);

	printf("%hhi %hhi %hhi %hhi %hhi\n",
		str2[0], str2[1], str2[2], str2[3], str2[4]); 
	// str[2], str[3], str[4] -> 내부에서 0을 만나면 이유는 값이 없기 때문 끝내버린다는 의미. 의미가 없음.


	//char str3[10] = "Hello, World";// array sze is not enough. -> 미리 지정된 사이즈를 넘으면 문제가 발생한다. 12줄 처럼.
	char str3[20] = "Hello , \0 World"; // '\0(null character printf)'을 넣었기 때문에 null character printf는 무시하게 된다. 
	printf("%s\n", str3);



}