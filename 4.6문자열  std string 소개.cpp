#include <iostream>
#include <string>
#include <limits>

using namespace std;

// 4.6 ���ڿ� std string �Ұ�


int main()
{

	const char my_strs[] = "Hello, world";
	const string my_hello = "Hello, World";


	// string ������ �Ͻ������� ����ȯ�� �� ���⶧����
	// "�� ����ؾ��Ѵ�.
	string my_Id = "123";

	cout << my_hello << endl;


	cout << "Your age ? : ";
	int age;
	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// ignore�ؾ������. 
	// 
	//cin >> age;
	//std::getline(std::cin, age); -> string
	// C++ ������ ���̺귯�� �����.




	cout << "Your name? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name);
	//getline ���δ����� �ν����ش�.


	cout << name << " " << age << endl;

	string a("Hello, ");
	string b("World ");
	string hw = a + b;
	// append ���ڿ� �ڿ� ���ϴ°�
	// string�� ���̸� �� �� �ִ°� string.lenfth()


	hw += "I'm good";

	cout << hw << endl;





	return 0;
}