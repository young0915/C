#include <iostream>

using namespace std;

// 6.12 동적 할당 배열
// 메모리 동적 할당은 0> 그 배열의 사이즈가 컴파일 타임에 결정되어 있어야했지만 사용할 수 있었음
// 동적 할당 배열은 런타임에 배열의 사이즈를 결정을 하고 그때그때 메모리를 os로부터 받아오기 때문에 좀 더 유동적으로 사용할 수 있었습니다.

int main()
{
	 int length = 5;
	
	 // length 는 안 넣을 시 컴파일에러 뜸. 또한 길이가 맞지 않으면 에러가 발생한다.
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