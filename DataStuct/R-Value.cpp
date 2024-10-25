#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Pet
{

};

class Knight
{
public:
	Knight()
	{

	}

	~Knight()
	{
		if (_pet)
			delete _pet;

	}

	// 복사 생성자
	Knight(const Knight& knight)
	{

	}
	
	// 복사 대입 연산자
	void operator=(const Knight& knight)
	{
		hp = knight.hp;

		if (knight._pet)
		{
			_pet = new Pet(*knight._pet);
		}
	}

	// 이동 생성자
	Knight(Knight&& knight) noexcept
	{
		hp = knight.hp; // 
		_pet = knight._pet;
		knight._pet = nullptr;
	}

	// 이동 대입 연산자
	// 소유권 이전
	void operator=(Knight&& knight) noexcept
	{
		hp = knight.hp; // 
		_pet = knight._pet;
		knight._pet = nullptr;
	}

public : 
	int hp = 0;
	Pet* _pet;
};


// 복사 버전
// knight 통으로 복사 되어서 넘어감
// 만약 knight가 굉장히 데이터가 많았다고 하면 비효율적이다
void TestKnight_Copy(Knight knight)
{
	knight.hp = 100;
}

// 원본을 넘겨줄테니.. 원본을 건드려도 된다.
void TestKnight_LValueCopy(Knight& knight)
{
	knight.hp = 50;
}

// 원본을 넘겨줄게 원본을 수정하지 마셈.
// 일회성으로 사용한다면 효율적임.
// Hp바 생성할때 괜찮을 듯.
// 참고해서 쓰겠다.
void TestKnight_ConstLValueCopy(const Knight& knight)
{
	int hp = knight.hp;
}

// 원본을 넘겨줄게 더 이상 활용하지 않을테니 마음대로 해라.
// 
void TestKnight_RValueCopy(Knight&& knight)
{
	knight.hp = 100;
}



int main()
{
	// 왼값(ㅣ-value) vs 오른값(r-value)

	// l-value : 단일식을 넘어서 계속 지속되는 개체 
	// r-value : l-value가 아닌 나머지

	int a = 3;
	a = 10;

	Knight k1;
	k1._pet = new Pet();			// k1 -> null


	TestKnight_Copy(k1);
	cout <<"TestKnight_Copy" << k1.hp << endl;					// 0
	
	TestKnight_LValueCopy(k1);
	cout << "TestKnight_LValueCopy" << k1.hp << endl;			// 50
	
	TestKnight_ConstLValueCopy(Knight());	
	cout << "TestKnight_ConstLValueCopy" << k1.hp << endl;		// 50

	TestKnight_RValueCopy(static_cast<Knight&&>(k1));
	cout << "TestKnight_RValueCopy" << k1.hp << endl;			// 100


	Knight k2;
	//k2 = static_cast<Knight&&>(k1);
	k2 = std::move(k1);
}

