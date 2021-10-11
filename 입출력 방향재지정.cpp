#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//printf("I Iove apple. \n");

	char str[100];
	scanf("%s", str);
	printf("I Iove %s \n", str);

	//C:\유저\유저\source\repos\Project8\Debug>Project2.exe
	// 내가 cmd에서 입력한 값 > Banana
    // cmd 출력값 I Iove Banana


	//printf("Programming. \n");


	return 0;
}

/*

입출력 방향재지정하는 것이다.

Cmd(명령 프로그램)를 키고

cd C:\Users\사용자 이름\Project8\Debug 를 입력하면 
해당하는 곳으로 이동된다.

1. DIR을 입력하면)
   현재 열려있는 프로젝트들 파일들이 있다는 것을 확인 할 수 있고

2. 파일명만 입력하면 )
    ex Project2.exe 프로그램에서 출력한 값만 출력되고 

3. output.txt을 입력하면)
    파일 생성기 \Project8\Debug>explorer 입력해서 output.txt가 생긴걸 
	확인할 수 있다.


유저>Project2.exe< ddd.txt
I Iove KIWI(키위는 ddd파일에 입력한 값)이 출력된다.


4. >>을 사용한다면)
   ex Project2.exe>>output.txt

I Iove apple.
I Iove Banana
이 출력된다.

5. copy 를 사용하고 

copy Project2.exe test.exe
        1개 파일이 복사되었습니다.

		>test.exe |Project2.exe를 입력한다면
		I Iove Programming.의 결과값이 출력된다.

test.exe가 Project2.exe 파이프로 흘러서 결과를 출력되었다.

데이터가 스트림을 흘러간다.
데이터가 파일로 출력할 수 있다.

*/