#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Firend : name, address, age, height, weight



// ��ü�� ������ �������� �����Ҷ� class��� �θ���.
class Friend
{
public:
	Friend();
	~Friend();


	string name;
	string address;
	int age;
	double height;
	double weight;


	void print()
	{
		cout << name << " " << address << " " << age << " "
			<< height << " " << weight << endl;
	}

private:

};

Friend::Friend()
{
}

Friend::~Friend()
{
	
};



int main()
{
	vector<Friend> friends;

	friends.resize(2);
	

	for (auto& e : friends)
	{
		e.print();
	}

	return 0;
}