#include <iostream>
#include <vector>

using namespace std;

// vector -> new delete 를 할 필요가 없다는 장점.

void printStack(std::vector<int> stack)
{
	for (auto& element : stack)
		cout << element << " ";
	cout << endl;
}

int main()
{

	std::vector<int> v{ 1,2,3 };

	// size, capacity

	/*
	1 2 3
	3
	*/

	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << endl;


	std::vector<int> stack;


	/*
	3 5 7
	3 5
	3
	*/
	stack.push_back(3);
	stack.push_back(5);
	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	return 0;
}