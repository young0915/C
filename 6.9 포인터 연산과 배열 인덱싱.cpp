#include <iostream>

using namespace std;

//6.9 포인터 연산과 배열 인덱싱
// 포인터는 메모리 주소를 저장하는 변수.


int main()
{
	int value = 7;
	int* ptr = &value;

	double dvalue = 7.0;
	double* ptr_d = &dvalue;


	/*
	*  4씩 증가
	5241932
	5241936
	5241940
	5241944
	*/
	cout << uintptr_t(ptr-1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout <<  uintptr_t(ptr+2) << endl;


	/*
	*8 씩 증가
	16709680
	16709688
	16709696
	16709704
	
	*/
	cout << uintptr_t(ptr_d - 1) << endl;
	cout << uintptr_t(ptr_d) << endl;
	cout << uintptr_t(ptr_d + 1) << endl;
	cout << uintptr_t(ptr_d + 2) << endl;


	int array[] = { 9,7,5,3,1 };
	int* ptr_1 = array;

	/*
	9 20184568
	7 20184572
	5 20184576
	3 20184580
	*/
	for (int i = 0; i < 5; i++)
	{
		//cout << array[i] << " " << (uintptr_t) & array[i] << endl;
		//cout<< *(ptr_1 + i) << endl;
	}


	char name[] = "JackJack";
	char* ptr_n = name;

	const int n_name = sizeof(name) / sizeof(name[0]);

	for (int i = 0; i < n_name; i++)
	{
		cout << *(name + i) << endl;
	}

	int count = 0;
	while (true)
	{
		if (*ptr_n == NULL)
		{
			break;
		}
		cout <<*ptr_n;
		++ptr_n;
	}

	return 0;
}