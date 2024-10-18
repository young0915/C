#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include <list>
#include "List.h"
#include <map>


// 이진탐색 (binary search)

vector<int> numbers;

void BinarySearch(int N)
{

	int left = 0;
	int right = numbers.size() - 1;


	while (left<=right)
	{
		cout << "탐색 범위 :  " << left << "~" << right<<endl;

		int mid = (left + right) / 2;

		if (N < numbers[mid])
		{
			cout << N << " < " << numbers[mid] << endl;
			right = mid - 1;
		}
		else if (N > numbers[mid])
		{
			cout << N << " > " << numbers[mid] << endl;
			left = mid + 1;
		}
		else
		{
			cout << "찾음" << endl;
			break;
		}
	}


}

int main()
{
	

	// 0(logN) -> 반으로 나눠서 탐색할 경우
	// 0(N) -> 하나씩 체크하는 것.

	// 0(logN)
	numbers = { 1,8,15,23,32,44,56,63,81,91 };

	/*
탐색 범위 :  0~9
81 > 32
탐색 범위 :  5~9
81 > 63
탐색 범위 :  8~9
찾음
*/
	BinarySearch(81);
}

