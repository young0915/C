#include <iostream>
using namespace std;
#include <vector>
#include <queue>

// DFS (depth first search)
// DFS = 재귀함수 = 스택
// BFS

struct  Vertex
{
	// int data;
};
vector<Vertex> vertices;
vector<vector<int>> adjacent;

vector<bool> visited;
void CreateGraph()
{
	vertices.resize(6);

	//인전 리스트
	//adjacent = vector<vector<int>>(6);
	//adjacent[0] = { 1,3 };
	//adjacent[1] = { 0,2,3 };
	//adjacent[3] = { 4 };
	//adjacent[5] = { 4 };

	// 인접행렬
	adjacent = vector<vector<int>>
	{
		{0,1,0,1,0,0},
		{1,0,1,1,0,0},
		{0,0,0,0,0,0},
		{0,0,0,0,1,0},
		{0,0,0,0,0,0},
		{0,0,0,0,1,0},
	};
}

void Dfs(int here)
{
	visited[here] = true;

	cout << "Visited : " << here << endl;


	/*
	Visited : 0
	Visited : 1
	Visited : 2
	Visited : 3
	Visited : 4
	*/
	// 인접한 길을 다 체크해서
	// E 총 개수
	// 인접리스트 0(V+E)
	/*const int size = adjacent[here].size();
	for (int i = 0; i < size; i++)
	{
		int there = adjacent[here][i];
		if (visited[there] == false)
			Dfs(there);
	}*/



/*
Visited : 0
Visited : 1
Visited : 2
Visited : 3
*/
	//인접 행렬 0(V^2)
	for (int there = 0; there < 6; there++)
	{
		// 같이 있는지
		if (adjacent[here][there] == 0)
			continue;

		// 아직 방문하지 않은 곳에서 한해서 방문
		if (visited[there] == false)
			Dfs(there);
	}
}

void DfsAll()
{

	/*
	Visited : 0
	Visited : 1
	Visited : 2
	Visited : 3
	Visited : 4
	Visited : 5
	*/

	visited = vector<bool>(6, false);

	for (int i = 0; i < 6; i++)
	{
		if (visited[i] == false)
			Dfs(i);
	}
}

int main()
{
	CreateGraph();

	visited = vector<bool>(6, false);


	//Dfs(0);

	DfsAll();
}
