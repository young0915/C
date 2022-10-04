#include <iostream>
#include <string>
#include <limits>

using namespace std;

// 4.6 문자열 std string 소개


int main()
{

	const char my_strs[] = "Hello, world";
	const string my_hello = "Hello, World";


	// string 변수는 암시적으로 형변환할 수 없기때문에
	// "을 사용해야한다.
	string my_Id = "123";

	cout << my_hello << endl;


	cout << "Your age ? : ";
	int age;
	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// ignore잊어버려라. 
	// 
	//cin >> age;
	//std::getline(std::cin, age); -> string
	// C++ 나만의 라이브러리 만들기.




	cout << "Your name? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name);
	//getline 라인단위를 인식해준다.


	cout << name << " " << age << endl;

	string a("Hello, ");
	string b("World ");
	string hw = a + b;
	// append 문자열 뒤에 더하는것
	// string의 길이를 알 수 있는것 string.lenfth()


	hw += "I'm good";

	cout << hw << endl;





	return 0;
}