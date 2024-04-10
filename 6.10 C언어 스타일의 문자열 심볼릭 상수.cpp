#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack Jack";
}

int main()
{
	char name[] = "Jack Jack"; // 포인터에 담을 수 없음. 포인터는 주소를 담는 변수이니깐
	//하지만 이렇게는 사용할 수 있다.
	const char* name_s = "Jack Jack";
	const char* name_s1 = "Jack Jack";

	const char* name_s2 = getName();


	//Jack Jack
	cout << name << endl;
	//Jack Jack
	cout << name_s << endl;
	//Jack Jack
	cout << name_s2 << endl;



	/*
	13630580
	4823856
	4823856
	4823856
	*/
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name_s << endl;
	cout << (uintptr_t)name_s1 << endl;
	cout << (uintptr_t)name_s2 << endl;

	int int_arr[5] = { 1,2,3,4,5 };


	char c = 'Q';
	// null이 나올때 까지 찍기 때문에 위험성이 있음 -> *(&c)로 고쳐야함

	/*
	Q儆儆儆儆
	Q
	*/
	cout << &c << endl;
	cout << *(&c) << endl;

	return 0;
}
