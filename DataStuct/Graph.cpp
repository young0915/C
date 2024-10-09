#include <iostream>
using namespace std;
#include <vector>
#include <queue>


// 인접 리스트  : 실제 연결된 애들 '만' 넣어준다.
void CreateGraph_2()
{
	struct Vertex
	{
		int data;
	};

	vector<Vertex> v(6);
	vector<vector<int>> adjacent;
	adjacent.resize(6);

	/*adjacent[0].push_back(1);
	adjacent[0].push_back(3); -> adjacent[0]*/ 
	adjacent[0] = { 1,3 };
	adjacent[1] = { 0,2,3 };
	adjacent[3] = { 4 };
	adjacent[5] = { 4 };

	// Q) 0번이 3번과 연결이 되었는가?
	bool connected = false;

	int size = adjacent.size();

	for (int i = 0; i < size; i++)
	{
		int vertex = adjacent[0][i];

		if (vertex == 3)
		{
			connected = true;
		}
	}

}


void CreateGraph_3()
{

	struct Vertex
	{
		int data;
	};

	vector<Vertex> v(6);

	// 연결된 목록을 행렬로 관리
	// [X][O][X][O][X][X]
	// [O][X][O][O][X][X]
	// [X][X][X][X][X][X]
	// [X][X][X][X][O][X]
	// [X][X][X][X][X][X]
	// [X][X][X][X][O][X]

	// 행렬을 이용한 그래프 표현
	// 메모리 소모가 심하지만 빠른 접근
	vector<vector<bool>> adjacent(6, vector<bool>(6, false));
	adjacent[0][1] = true;
	adjacent[0][3] = true;
	adjacent[1][0] = true;
	adjacent[1][2] = true;
	adjacent[1][3] = true;
	adjacent[3][2] = true;
	adjacent[5][4] = true;


	// Q) 0번이 3번과 연결이 되었는가?
	bool connected = adjacent[0][3];

	vector<vector<int>> adjacent2 =
	{
		{-1, 15, -1, 35, -1 ,-1},
		{15, -1, +5, 10, -1 ,-1},
		{-1, +5, -1, -1, -1 ,-1},
		{35, 10, -1, -1, 5 ,-1},
		{-1, -1, -1, +5, -1 ,+5},
		{-1 ,-1, -1 ,-1, +5 ,-1},
	};
}


int main()
{
	vector<int> v;
}
