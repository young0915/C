#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f   // 기호적상술 선언.
#define AI_NAME "Javis"

// 기호적 상수와 전처리기.
// 교체적으로 사용하는 것.
// 기호적 상수로 사용하는 것은 매우좋은 습관이다. 오타방지를 방안하기 위해


// 기호적 상수를 define을 꼭 사용해야하나?
// 답변 : 변수로 선언할 경우. 나중에 변수를 변경하는 이유가 있다.
// define 말고도 const도 존재한다.
// const는 변수를 변경할 수 없는 고정적인 변수이다.

int main()
{

	float radius, area, circum;

	printf("I'm %s \n", AI_NAME);
	printf("Please, Input raidus \n");

	scanf_s("%f", &radius);

	area = PI *radius*radius;			// area = pi * r *;

	circum = 2.0f * PI *radius;// circum = 2.0 *pi*r;
	// 전처리기 원리.
	// PI라는 부분이 3.14~로 교체 하는 것이다. 
	// 컴파일러가 PI를 인식하고 교체해서 계산한다.


	printf("Area is %f \n", area);
	printf("circum is %f \n", circum);

	// To Do : warong usage, strings conts

	return 0;
}