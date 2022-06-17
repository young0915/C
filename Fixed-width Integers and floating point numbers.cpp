#include <iostream>
#include <iomanip>
#include <limits>
// 고정 너비 정수

int main()
{
	using namespace std;

	cout << "=====================================================" << endl;
	cout << "===================고정 너비 정수 Fixed-width Integers==========" << endl;
	cout << "=====================================================" << endl;


	//std::int16_t i(5);
	//std::int8_t myint = 65;

	//cout << myint << endl;

	//std::int_fast8_t fi(5);
	//std::uint_least64_t fI(5);						// 8byte 데이터를 가지고 있는 타입.


	// 부동소수 점수

	cout << "=====================================================" << endl;
	cout << "===================부동소수점수 floating point numbers==========" << endl;
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
		cout << ff << endl;											// 123456792   10 significant digits -> 정밀도가 떨어진다.


		double d(0.1);
		cout << d << endl;
		cout << std::setprecision(17);
		cout << d << endl;											// 0.10000000000000001
		// 그래서 float 사용하는 것이 좋은것인가? 아니다 메모리 부하 발생할 수 있다.
		// 오차 누적 발생.



		double zero = 0.0;
		double posinf = 5.0 / zero;
		double neginf = -5.0 / zero;
		double nan = zero / zero;

		//isnan nan인지 아닌지 판별 할 수 있는 bool 값.
		cout << posinf << std::isnan(nan)<<endl;												// inf   1
		cout << neginf << std::isnan(nan) << endl;											// -inf   1
		cout << nan << std::isnan(nan) << endl;											// -nan(ind) -> (ind)란 결정할 수 없는것이다.  







	return 0;
}