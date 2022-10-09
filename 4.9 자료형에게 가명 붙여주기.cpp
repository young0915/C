#include <iostream>
#include <vector>
#include <cstdint>

// Type Aliases
// 자료형에게 가명 붙여주기.


int main()
{
	using namespace std;

	typedef double distance_t;

	double my_disatnce;
	distance_t home2work;
	distance_t home2school;

	typedef vector < pair<string, int>> pairlist_t; // 메모리에 복사하는 방식
	// typedef 말고도 using을 사용하는 경우가 있다.
	using pairlist_t = vector < pair<string, int>>;	// 컴파일러 한테 vector < pair<string, int>>;을 사용하기 위해 pairlist_t라는 이름을 사용하겠다는 의미


	pairlist_t pairlist1;
	pairlist_t pairlist2;
	



	return 0;
}