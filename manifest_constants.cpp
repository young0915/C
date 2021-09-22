#include <stdio.h>
#include <limits.h> // INT_MAX, C언어에서 정수를 나타내는 상수들을 정의합니다.
#include <float.h> // FLT_MAX


#define PI 3.141592 // manifest constants, sysbolic constants.

int main()
{
	printf("PI is %f\n", PI);
	printf("BIggest int %f\n", INT_MAX);
	printf("One byte in this system is %d bits\n", CHAR_BIT);
	printf("Smallest normal flaot %e\n", FLT_MIN);

	return 0;
}

/*
PI is 3.141592
BIggest int 0.000000
One byte in this system is 8 bits
Smallest normal flaot 3.402823e+38
*/