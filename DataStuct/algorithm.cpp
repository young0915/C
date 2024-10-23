#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <map>
#include <functional>
#include <algorithm>
using namespace std;




void BubbleSort(vector<int>& v)
{
	const int n = v.size();


	//for (int i = 0; i < n - 1; i++)
	//{
	//	if (v[i] > v[i + 1])
	//	{
	//		/*int temp = v[i];
	//		v[i] = v[i + 1];
	//		v[i + 1] = temp;
	//		*/
	//		swap(v[i], v[i+1]);
	//	}
	//}
	// O(n^2)
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (v[j] > v[j + 1])
				swap(v[i], v[i + 1]);
		}
	}
}


void SelectionSort(vector<int>& v)
{
	const int n = v.size();

	// 0(n^2)
	for (int i = 0; i < n - 1; i++)
	{
		int bestId = i;
		for (int j = i + 1; j < n; j++)
		{
			if (v[j] < v[bestId])
				bestId = j;
		}

		if (i != bestId)
			swap(v[i], v[bestId]);
	}
}

void HeapSort(vector<int>& v)
{
	// 0(N)
	priority_queue<int, vector<int>, greater<int>> pq;

	// 0(NLogN)
	for (int num : v)
	{
		pq.push(num);// 0(LogN)
	}

	v.clear();

	// 0(NlogN)
	while (pq.empty() == false)
	{
		v.push_back(pq.top()); 	// 0(1)
		pq.pop();	// 0(logN)
	}
}

// 분할 정복
// - 분할
// - 정복
// - 결합

void MergeResult(vector<int>& v, int left, int mid, int right)
{

	/*int leftIdx = left;
	int rightIdx = mid + 1;
	vector<int> temp;

	while (leftIdx <= mid && rightIdx <=right)
	{
		if(v[leftIdx] <= v[rightIdx])
		{
			temp.push_back(v[leftIdx]);
			leftIdx++;
		}
		else
		{
			temp.push_back(v[rightIdx]);
			rightIdx++;
		}
	}

	if (leftIdx > mid)
	{
		while (rightIdx<= right)
		{
			temp.push_back(v[rightIdx]);
			rightIdx++;
		}
	}
	else
	{
		while (leftIdx <= mid)
		{
			temp.push_back(v[leftIdx]);
			leftIdx++;
		}
	}

	for (int i = 0; i < temp.size(); i++)
		v[left + i] = temp[i];*/

	int leftidx = left;
	int rightidx = mid + 1;
	vector<int> temp;


	while (leftidx <= mid && rightidx <= right)
	{

		if (v[leftidx] <= v[leftidx])
		{
			temp.push_back(v[leftidx]);
			leftidx++;
		}
		else
		{
			temp.push_back(v[rightidx]);
			rightidx++;
		}
	}

	if (left > right)
	{
		while (rightidx <= right)
		{
			temp.push_back(v[rightidx]);
			rightidx++;
		}
	}
	else
	{
		while (leftidx <= mid)
		{
			temp.push_back(v[leftidx]);
			leftidx++;
		}
	}

	for (int i = 0; i < temp.size(); i++)
	{
		v[left + i] = temp[i];
	}
}


// NLOGN
void MergeSort(vector<int>& v, int left, int right)
{
	// 분할 못하면 리턴
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	MergeSort(v, left, mid);
	MergeSort(v, mid + 1, right);

	MergeResult(v, left, mid, right);
}



int Particion(vector<int>& v, int left, int right)
{
	int pivot = v[left];
	int low = left + 1;
	int high = right;

	while (low <= high)
	{
		while (low <= right && pivot >= v[low])
			low++;
		while (high >= left && pivot <= v[high])
			high--;

		if (low < high)
			swap(v[low], v[high]);
	}

	swap(v[left], v[high]);
	return high;
}

void QuickSort(vector<int>& v, int left, int right)
{

	if (left > right)
		return;

	int mid = (left + right) / 2;
	int pivot = Particion(v, left, right);
	QuickSort(v, left, pivot - 1);
	QuickSort(v, pivot + 1, right);

}


int main()
{
	vector<int> v{ 1,5,3,4,2 };
	//BubbleSort(v);

	MergeSort(v, 0, v.size() - 1);

	//vector<int> quick{ 2,1,3,4,5,9,7,6,8 };

	//QuickSort(v, 0, v.size() - 1);
}

