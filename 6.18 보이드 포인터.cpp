#include <iostream>

using namespace std;


//6.18 ���̵� ������
// ���ʸ� �����Ͷ�� �θ��µ�. ���ʸ��� �������̴�. -> ��� �����͸� �� ���������� �ٷ� �� �ֱ� ������ ���ʸ� ����Ʈ�ΰ�. 
enum Type
{
	INT,
	FLOT,
};
int main()
{
	int i = 5;
	float f = 3.0f;

	void* ptr = nullptr;


	// �̷��� ��� Ÿ�������� ��.
	// ������ ������ �Ұ��� �ϸ� ���� ������ �Ұ����ϴ� �Ѵٸ� static_castȰ��
	// ���� ������ �Ұ����Ͽ� ������ �� ��ȯ�ؾ߸� ���� ������ ����
	ptr = &f;
	ptr = &i;
	// 3
	cout << *static_cast<float*>(ptr) << endl;


	Type type = INT;

	if (type == FLOT)
	{
		cout << *static_cast<float*>(ptr) << endl;
	}
	else if (type == INT)
	{
		cout << *static_cast<int*>(ptr) << endl;
	}

	return 0;
}