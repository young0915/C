#include <iostream>

// ��ü�������α׷����� ��
// �����ε� �Ǵ� �������̵��ϴ� ��� �ִ�.
// �׷��� compiler�� ����� ȣ���ؾ��ϴ� �ǹ��� �߻��Ѵ�
// �׷��� �װ��� Ambiguity(��ȣ��)�̶�� �Ѵ�.
// 

namespace A
{
	int my_var(10);
	int my_a(123);
}

namespace B
{
	int my_var(20);
	int my_b(456);
}

int main()
{
	using namespace std;

	cout << "Hello" << endl;


	using namespace A;
	using namespace B;

			// :: ���� ���� ������.
	cout << A::my_var << endl;
	cout << A::my_var << endl;


	return 0;
}