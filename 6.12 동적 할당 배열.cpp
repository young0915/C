#include <iostream>

using namespace std;

// 6.12 ���� �Ҵ� �迭
// �޸� ���� �Ҵ��� 0> �� �迭�� ����� ������ Ÿ�ӿ� �����Ǿ� �־�������� ����� �� �־���
// ���� �Ҵ� �迭�� ��Ÿ�ӿ� �迭�� ����� ������ �ϰ� �׶��׶� �޸𸮸� os�κ��� �޾ƿ��� ������ �� �� ���������� ����� �� �־����ϴ�.

int main()
{
	 int length = 5;
	
	 // length �� �� ���� �� �����Ͽ��� ��. ���� ���̰� ���� ������ ������ �߻��Ѵ�.
	 int* array = new int[length]();
	 array[0] = 1;
	 array[1] = 2;

	 /*
	 1
	 2
	 0
	 0
	 0
	 */
	 for (int i = 0; i < length; i++)
	 {
		 cout << array[i] << endl;
	 }

	 delete [] array;
	 return 0;
}