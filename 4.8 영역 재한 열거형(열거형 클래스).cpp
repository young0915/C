#include <iostream>

//  영역 제한 열거형(열거형 클래형)
// Scoped Enumerations(Enum Class)
// C++11
// 열거형을 보완하는 enum 클래스


int main()
{
	using namespace std;


	enum Color
	{
		RED,
		BLUE,
	};

	enum Fruit
	{
		BANANA,
		APPLE
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;


	if (static_cast<int>(color) == fruit)
		cout << " Color is fruit " << endl;

	Color color1 = Color::BLUE;
	Color color2 = Color::BLUE;

	if (color2 == color1)
		cout << "Same Color" << endl;



	return 0;
}