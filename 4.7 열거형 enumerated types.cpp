#include <iostream>

// 1. 열거형
//  Enumerated Types
// 비슷한 옵션을 기호로 표현할때 Enumerated Type을 사용한다.



// user -defined data types
// enum을 사용할때 중복되는 Type이 있으면 안된다 사용한다면 
// enum c++11에서 제공하고 있으니 공부하고 쓰길 바란다.
// 내부적으로 인수로 저장되어 있지만 캐스팅이 가능하다.
// 인수형으로 되어 있지 않다.
enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE =5,
	COLOR_GREEN=5,
	COLOR_SKYBLUE,
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED
};

int main()
{
	using namespace std;


	Color paint = COLOR_BLACK;
	Color house(COLOR_SKYBLUE);


	Color my_color = COLOR_BLACK;

	cout << my_color << "  " << COLOR_BLACK << endl;

	Color my_color3 = static_cast<Color>(3);

	if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "  " << endl;
	}

	int in_number;
	cin >> in_number;

	if (in_number == static_cast<Color>(0))
		my_color3 = static_cast<Color>(0);

	string str_input;

	if (str_input == "COLOR_BLACK")
		my_color3 = static_cast<Color>(0);


	return 0;
}