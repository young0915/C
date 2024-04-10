#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


//7.3 ������ ���� �μ� ����

// �Ű������� �Լ� ��ü�� ���ڷμ� �����Ѵ�.
// ���� ��ü�� �ѱ�� �ű� ������ �ּҵ� �Ȱ��� ���簡 �̷������ �ʴ´�.

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


// ���� �����.
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