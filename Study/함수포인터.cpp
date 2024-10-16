#include <iostream>
using namespace std;
#include <vector>
#include <queue>

void Print()
{
	cout << "Hello World" << endl;
}

int add(int a, int b)
{
	return a + b;
}

// 콜백 함수

using FuncPtrType = int(*)(int a, int b);
int DoSomething(int a, int b, FuncPtrType func)
{
	return add(a,b);
}

void Fire()
{
	cout << "Fire" << endl;

}

void Teleport()
{
	cout << "Teleport" << endl;

}

class Item
{
public :

public :
	int _itemId = 0;
	int _rarity = 0;
	int _ownerId = 0;
};

using ItemSelectorType = bool(*)(Item* item);

Item* FindItem(Item items[], int itemCount, ItemSelectorType selector)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		if (selector(item))
			return item;
	}

	return nullptr;
}

bool IsRare(Item* item)
{
	return item->_rarity == 1;
}

class Test
{
public :
	void PrintTest();
};

int main()
{
	//using FuncType = int(int, int);
	//FuncType* ptr = add;

	//int ret = ptr(10, 20);

	//cout << ret << endl;


	using FuncPtrType = void(*)();

	FuncPtrType ptr = &Print;

	ptr();

	DoSomething(10, 20, &add);

	//
	using OnClickKeyboard = void(*)();
	OnClickKeyboard qSkill = &Fire;
	qSkill();


	// 
	Item items[10];
	items[3]._rarity = 1;
	Item* item = FindItem(items, 10, IsRare);

	cout << item->_rarity << endl;


	// 멤버 함수 포인터(정적/ 전역 함수랑 다르다.
	using MemFuncPtrType = void (Test::*)();

	MemFuncPtrType func = &Test::PrintTest;

	// 서버에서 사용할 일 있음 -> Command 패턴을 사용할때 유용
	Test t;
	(t.*func)();

	// 함수 포인터의 단점 : 바인딩하기 어렵다
 }
