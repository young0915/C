#include <iostream>
#include <iomanip>
#include <limits>
// ���� �ʺ� ����

int main()
{
	using namespace std;

	cout << "=====================================================" << endl;
	cout << "===================���� �ʺ� ���� Fixed-width Integers==========" << endl;
	cout << "=====================================================" << endl;


	//std::int16_t i(5);
	//std::int8_t myint = 65;

	//cout << myint << endl;

	//std::int_fast8_t fi(5);
	//std::uint_least64_t fI(5);						// 8byte �����͸� ������ �ִ� Ÿ��.


	// �ε��Ҽ� ����

	cout << "=====================================================" << endl;
	cout << "===================�ε��Ҽ����� floating point numbers==========" << endl;
	cout << "=====================================================" << endl;


	//float f(3.141592);								// 3.14 = 31.4*0.0=1
	//double d;
	//long double ld;


		float f(3.14);									// 3.14 = 31.4*0.0=1

		cout << 3.14 << endl;							//		3.14 
		cout << 31.4e-1 << endl;						//		3.14
		cout << 31.4e-2 << endl;						//		0.314
		cout << 31.4e1 << endl;						//		314
		cout << 31.4e2 << endl;						//		3140
			
		//cout << std::setprecision(10) << endl;						//0.3333333333 
		//cout << 1.0 / 3.0 << endl;

		float ff(123456789.0f);											// 10 sifnificant digits

		cout << std::setprecision(9);
		cout << ff << endl;											// 123456792   10 significant digits -> ���е��� ��������.


		double d(0.1);
		cout << d << endl;
		cout << std::setprecision(17);
		cout << d << endl;											// 0.10000000000000001
		// �׷��� float ����ϴ� ���� �������ΰ�? �ƴϴ� �޸� ���� �߻��� �� �ִ�.
		// ���� ���� �߻�.



		double zero = 0.0;
		double posinf = 5.0 / zero;
		double neginf = -5.0 / zero;
		double nan = zero / zero;

		//isnan nan���� �ƴ��� �Ǻ� �� �� �ִ� bool ��.
		cout << posinf << std::isnan(nan)<<endl;												// inf   1
		cout << neginf << std::isnan(nan) << endl;											// -inf   1
		cout << nan << std::isnan(nan) << endl;											// -nan(ind) -> (ind)�� ������ �� ���°��̴�.  







	return 0;
}