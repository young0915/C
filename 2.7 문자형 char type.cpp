#include <iostream>
#include <limits>


int main()
{
	using namespace std;


	char c1(65);					// c1 = 65; c1 {65} 
	char c2('A');					// �ѱ��ڸ� ����� ���� '�� ����ϰ� ������ ����Ҷ��� "�� ����Ѵ�. 1 byte std ::  string


	cout << c1 << "  " << c2 << " " << int(c1) << " " << int(c2) << endl;	// A  A 65 65


	// c- style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// cpp style casting
	cout << char(65) << endl;
	cout << int('A') << endl;



	// type case ������
	cout << static_cast<char>(65) << endl; // 
	cout << static_cast<int>('A') << endl;	//compile Ÿ�ӿ� ����ȯ�� ���� Ÿ�� ������ �̸� ��Ƽ� üũ�ϴ� ��Ÿ��.


	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;


	// abc�� ����Ѵٸ�?
	char c3(65);

	//cin >> c3;
	//cout << c3 << " " << static_cast<int>(c3) << endl;  // a�� ���.

	//cin >> c3;
	//cout << c3 << " " << static_cast<int>(c3) << endl;  // b�� ���.
	//  abc�� ����Ѵٸ� ab �����Ͱ� ������ �� �Ѳ����� ������ �������� ���۾ȿ� ���� �ִ�.

	char c4(65);

	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest << endl;
	// -> char�� -128 ~ 127�� ������ ����.


	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest << endl;
	// unsigned char : 0 ~ 255

	cout << "This is first line \n second line";
	cout << "This is first line" << std::flush;
	cout << "second line";
	// std::flush; �̶�  \n�� �ݴ�� ���ۿ� �ִ°� �� ��� ���� �� ��, ���� �߰� ���ϴ� ���̴�.
	// \t -> ���� ����
	// whar_t c; ->  �����쿡�� ����ϴ� ��.
	// char16_t c3; 


	// ����
	char c6(65);

	cin >> c6;
	cout << int(c6) << endl;


	return 0;
}