#include <iostream>

using namespace std;

int main()
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	//003BF828(value狼 林家) 5 003BF840(磊脚狼 林家)
	cout << ptr << " " << *ptr << " " << &ptr << endl;
	//003BF840 003BF828 003BF834
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	cout << **ptrptr << endl;


	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
	};
	
	int** matrix = new int* [row];


	for (int r = 0; r < row; ++r)
	{
		matrix[r] = new int[col];
	}

	//
	/*int* r1 = new int[col] {1, 2, 3, 4, 5};
	int* r2 = new int[col] {6, 7, 8, 9, 10};
	int* r3 = new int[col] {11, 12, 13, 14, 15};*/



	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			matrix[r][c] = s2da[r][c];

	}

	/*
	0 1 2 3 4
	5 6 7 8 9
	10 11 12 13 14
	*/
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[r][c] << " ";
		cout << endl;

	}


	/*delete[] r1;
	delete[] r2;
	delete[] r3;*/


	int* matrix2 = new int[row * col];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			matrix2[c + col * r] = s2da[r][c];
	}


	/*
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	*/
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix2[c + col * r] << " ";
		cout << endl;
	}

	delete[] matrix2;


	for (int r = 0; r < row; ++r)
	{
		delete []matrix[r];
	}
	delete[] matrix;

	return 0;
}