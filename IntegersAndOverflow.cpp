#include <iostream>
#include <cmath>
// ������(Integers).
// �����÷ο� 


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
	cout << " 32768  ?" << s << endl;			// overflow : ������ �� �ִ� �������� ���� �ʰ��Ͽ� ��� �߻��ϴ� ����.

	cout << "min() " << s << endl;

	s -= 1;


	cout << "   " << s << endl;			// overflow : ������ �� �ִ� �������� ���� �Ѿ ��� �߻��ϴ� ����.
	// ������ ���꿡�� 1�� �߰��߱� ������ -32767�� ���´�. 


	unsigned int i = -1;

	cout << i << endl;

	return 0;
}