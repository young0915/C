#include <iostream>

// ���� ������ ������ ���ӱⰣ
// ���(���չ�), ��Ī ����, �̸� �浹, �̸� �����.
// �޸𸮸� �����ϴ� ���� �Ѱ��ۿ� ����.

// :: ���� ������. 

// ������ �߻��Ѵٸ� ������Ʈ > �Ӽ� > C/C++ > ��� >> C++ ��� ǥ���� 17�κ��� �Ұ�.
// �ִ� �ΰ����ϱ����� ����� ��.
namespace work1 :: work11 :: work111
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	int apple = 5;


	apple = 1;

	work1::work11::work111::a;
	work1::work11::work111::doSomething();

	work2::a;
	work2::doSomething();



	return 0;
}