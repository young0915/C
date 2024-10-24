#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


class Knight
{
public:
	~Knight()
	{
	}

	void Attack()
	{
		if (_target)
			_target->_hp = _damage;
	}

public :

	int _hp = 100;
	int _damage = 10;
	shared_ptr<Knight> _target = nullptr;

};


class RefCountBlock
{
public :
	int _refCount = 1;
};

void Test(shared_ptr<Knight>& k)
{

}

template <typename T>
class SharedPtr
{
public :

	SharedPtr() {}
	SharedPtr(T* ptr) : _ptr(ptr) 
	{
		if (ptr)
		{
			_block = new RefCountBlock();
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	SharedPtr(const SharedPtr& other) :_ptr(other.ptr)
	{
		if (_ptr)
		{
			_block->_refCount++;
		}
	}

	~SharedPtr()
	{
		if (_ptr)
		{
			_block->_refCount--;

			if (_block->_refCount == 0)
			{
				delete _ptr;
				delete _block;

				cout << "Delete " << endl;
			}
		}
	}

	void operator==(const SharedPtr& other)
	{
		_ptr = other._ptr;
		_block = other._block;

		if (_ptr)
			_block->_refCount++;
	}
public:
	T* _ptr = nullptr;
	int _refCount = 1;

	RefCountBlock* _block;
};

int main()
{
	/*SharedPtr<Knight> k1(new Knight());
	SharedPtr<Knight> k2(new Knight());
	SharedPtr<Knight> k3;
	k3 = k1;*/

	shared_ptr<Knight> k1(new Knight());
	Test(k1);
	shared_ptr<Knight> k2(new Knight());

	k1->_target = k2;

}

