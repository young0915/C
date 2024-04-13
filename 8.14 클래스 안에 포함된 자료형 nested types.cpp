#include <iostream>

using namespace std;

// 8.14 클래스 안에 포함된 자료형 nested types
// 사용 법만 알고 잇으면 될듯.


class Fruit
{
public:

	enum FruitType
	{
		APPLE, BANANA, CHERRY
	};

	class innnerclasss
	{

	};
	
	struct innerStruct
	{

	};

	Fruit(FruitType type ) : m_type(type) { }
	~Fruit();

	FruitType getType() { return m_type;  }

private:
	FruitType m_type;
	

};



int main()
{

	Fruit apple(Fruit::FruitType::APPLE);


	if (apple.getType() == Fruit::APPLE)
	{
		cout << "Apple" << endl;
	}


	return 0;
}