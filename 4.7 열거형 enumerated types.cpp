#include <iostream>

// 1. ������
//  Enumerated Types
// ����� �ɼ��� ��ȣ�� ǥ���Ҷ� Enumerated Type�� ����Ѵ�.



// user -defined data types
// enum�� ����Ҷ� �ߺ��Ǵ� Type�� ������ �ȵȴ� ����Ѵٸ� 
// enum c++11���� �����ϰ� ������ �����ϰ� ���� �ٶ���.
// ���������� �μ��� ����Ǿ� ������ ĳ������ �����ϴ�.
// �μ������� �Ǿ� ���� �ʴ�.
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