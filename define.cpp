#include <iostream>


// mainpro1에서 LIKE_APPLE 호출을 했지만 왜 출력은 Orange이 되었을까 
// mainpro1에서 define값을 호출되어 있지 않기 때문이다.

void doSomething()
{
	using namespace std;

#ifdef  LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif //  LIKE_APPLE
}


//Mainpro1
#include <iostream>
#include <algorithm>			// std::max 사용하기 위한 헤더가드.
using namespace std;

#define MY_NUMBER 9
#define MAX(a,b) (a>b)  ? a:b
#define LIKE_APPLE
// 매크로란 호출하면 지정한 값이 나오는 키워드. 

void doSomething();

int main()
{

	cout << MY_NUMBER << endl;
	cout << std::max(1 + 3, 2) << endl;

	doSomething();

	return 0;
}