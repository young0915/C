#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f   // ��ȣ����� ����.
#define AI_NAME "Javis"

// ��ȣ�� ����� ��ó����.
// ��ü������ ����ϴ� ��.
// ��ȣ�� ����� ����ϴ� ���� �ſ����� �����̴�. ��Ÿ������ ����ϱ� ����


// ��ȣ�� ����� define�� �� ����ؾ��ϳ�?
// �亯 : ������ ������ ���. ���߿� ������ �����ϴ� ������ �ִ�.
// define ���� const�� �����Ѵ�.
// const�� ������ ������ �� ���� �������� �����̴�.

int main()
{

	float radius, area, circum;

	printf("I'm %s \n", AI_NAME);
	printf("Please, Input raidus \n");

	scanf_s("%f", &radius);

	area = PI *radius*radius;			// area = pi * r *;

	circum = 2.0f * PI *radius;// circum = 2.0 *pi*r;
	// ��ó���� ����.
	// PI��� �κ��� 3.14~�� ��ü �ϴ� ���̴�. 
	// �����Ϸ��� PI�� �ν��ϰ� ��ü�ؼ� ����Ѵ�.


	printf("Area is %f \n", area);
	printf("circum is %f \n", circum);

	// To Do : warong usage, strings conts

	return 0;
}