#include <iostream>
#include <vector>
#include <cstdint>

// Type Aliases
// �ڷ������� ���� �ٿ��ֱ�.


int main()
{
	using namespace std;

	typedef double distance_t;

	double my_disatnce;
	distance_t home2work;
	distance_t home2school;

	typedef vector < pair<string, int>> pairlist_t; // �޸𸮿� �����ϴ� ���
	// typedef ���� using�� ����ϴ� ��찡 �ִ�.
	using pairlist_t = vector < pair<string, int>>;	// �����Ϸ� ���� vector < pair<string, int>>;�� ����ϱ� ���� pairlist_t��� �̸��� ����ϰڴٴ� �ǹ�


	pairlist_t pairlist1;
	pairlist_t pairlist2;
	



	return 0;
}