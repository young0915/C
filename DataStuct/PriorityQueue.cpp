#include <iostream>
using namespace std;
#include <vector>
#include <queue>


template<typename T, typename Predicate = less<T>>

class PriorityQueue
{
public:
	//0(logN) -> 두개씩 나눌 수록 logN인 이유는 트리의 높이에 의존적이기 때문이다
	void push(const T& data)
	{
		// 우선 힘 구조부터 맞춰준다.
		_heap.push_back(data);

		// 도장깨기 시작
		int now = static_cast<int>(_heap.size() - 1);
		// 루트 노드
		while (now > 0)
		{
			// 부모 노드와 비교해서 더 작으면 패배 
			int next = (now - 1) / 2;
			//if (_heap[now] < _heap[next])
			// 	break;
			if (_predicate(_heap[now], _heap[next]))
				break;

			// 데이터 교체
			::swap(_heap[now], _heap[next]);
			now = next;
		}
	}

	// (logN) -> 재배치하기 때문에 logN
	void pop()
	{
		_heap[0] = _heap.back();
		_heap.pop_back();
		int now = 0;
		while (true)
		{
			int left = 2 * now + 1;
			int right = 2 * now + 2;

			if (left >= (int)_heap.size())
				break;

			int next = now;

			// 왼쪽 비교 
			if (_heap[next] < _heap[left])
				next = left;

			// 둘 중 승자를 오른쪽과 비교
			/*if (right < _heap.size() && _heap[next] < _heap[right])
				next = right;*/

			if (right < _heap.size() && _predicate( _heap[next],_heap[right]))
				next = right;

			// 왼쪽/ 오른쪽 둘다 현재 값ㅈ보다 작으면 종료
			if (next == now)
				break;

			::swap(_heap[now], _heap[next]);
			now = next;
		}
	}


	// 0(1)
	T& Top()
	{
		return _heap[0];
	}


	// 0(1)
	bool empty()
	{
		return _heap.empty();
	}

public:
	vector<T> _heap;
	Predicate _predicate;
};


int main()
{
	vector<int> v;
	//PriorityQueue<int, less<int>> pq; -> value 50먼저 출력됨.
	//PriorityQueue<int, greater<int>> pq;
	PriorityQueue<int> pq;

	pq.push(10);
	pq.push(40);
	pq.push(30);
	pq.push(50);
	pq.push(20);

	int value = pq.Top();
	cout << value << endl;
	pq.pop();
}
