#include <iostream>
#include <cmath>
// 정수형(Integers).
// 오버플로우 


int main()
{
	using namespace std;

	short s = 1;
	//int i = 1;
	//long l = 1;
	//long long ll = 1;

	cout << sizeof(short) << endl;				// 2 bytes = 2 *8 =16bits
	/*cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;*/

	cout << std::pow(2, (sizeof(short) * 8-1)) << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	//s = 32767;
	s = std::numeric_limits<short>::min();
	s += 1;
	cout << " 32768  ?" << s << endl;			// overflow : 저장할 수 있는 데이터의 양을 초과하여 경고가 발생하는 현상.

	cout << "min() " << s << endl;

	s -= 1;


	cout << "   " << s << endl;			// overflow : 저장할 수 있는 데이터의 양의 넘어서 경고가 발생하는 현상.
	// 이진수 연산에서 1을 추가했기 때문에 -32767이 나온다. 


	unsigned int i = -1;

	cout << i << endl;

	return 0;
}