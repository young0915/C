#include <iostream>
#include <string>
using namespace std;

//7.7 함수 오버로딩

int add(int x, int y)
{
	return x + y;
}


double add(double x, double y)
{
	return x + y;
}

void getRandomValue(int &x) {}
void getRandomValue(double &x) {}

typedef int my_int;
void print(unsigned int x) {}
void print(int x) {}
void print(double x) {}

int main()
{
	/*
	5
	2
	*/
	add(1, 2);
	add(3.0, 4.0);

	int x;
	getRandomValue(x);


	print(0u);
	print('a');
	print(3.14);

	return 0;
}