#include <iostream>
#include <limits>


int main()
{
	using namespace std;


	char c1(65);					// c1 = 65; c1 {65} 
	char c2('A');					// 한글자를 사용할 때는 '를 사용하고 문장을 사용할때는 "를 사용한다. 1 byte std ::  string


	cout << c1 << "  " << c2 << " " << int(c1) << " " << int(c2) << endl;	// A  A 65 65


	// c- style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// cpp style casting
	cout << char(65) << endl;
	cout << int('A') << endl;



	// type case 연산자
	cout << static_cast<char>(65) << endl; // 
	cout << static_cast<int>('A') << endl;	//compile 타임에 형변환에 대한 타입 오류를 미리 잡아서 체크하는 스타일.


	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;


	// abc를 출력한다면?
	char c3(65);

	//cin >> c3;
	//cout << c3 << " " << static_cast<int>(c3) << endl;  // a만 출력.

	//cin >> c3;
	//cout << c3 << " " << static_cast<int>(c3) << endl;  // b만 출력.
	//  abc를 출락한다면 ab 데이터가 들어왔을 때 한꺼번에 저장을 하지못해 버퍼안에 남아 있다.

	char c4(65);

	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest << endl;
	// -> char는 -128 ~ 127를 가지고 있음.


	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest << endl;
	// unsigned char : 0 ~ 255

	cout << "This is first line \n second line";
	cout << "This is first line" << std::flush;
	cout << "second line";
	// std::flush; 이란  \n와 반대로 버퍼에 있는걸 다 쏟아 내는 것 즉, 행을 추가 안하는 것이다.
	// \t -> 띄어쓰기 역할
	// whar_t c; ->  윈도우에서 사용하는 것.
	// char16_t c3; 


	// 숙제
	char c6(65);

	cin >> c6;
	cout << int(c6) << endl;


	return 0;
}