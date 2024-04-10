#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


//7.3 참조에 의한 인수 전달

// 매개변수로 함수 자체를 인자로서 전달한다.
// 변수 자체를 넘기는 거기 때문에 주소도 똑같고 복사가 이루어지지 않는다.

void addOne(int& y)
{
	y = y + 1;
}

void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592;

	const double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

void foo(const int& x)
{
	cout << x << endl;
}


// 자주 사용함.
void printElement(const vector<int>& arr)
{

}

int main()
{
	int x = 5;

	// 5 0093F948
	cout << x << " " << &x << endl;
	addOne(x);
	//6 0093F948
	cout << x << " " << &x << endl;


	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	//0.5 0.866025
	cout << sin << " " << cos << " " << endl;

	
	foo(6);

	int y = 5;
	int* ptr = &y;

	// foo(ptr); //-> void food(int*& ptr);

	int arr[]{ 1,2,3,4 };

	vector<int> my_arr{ 1,2,3,4 };
	printElement(my_arr);

	return 0;
}