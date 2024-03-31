#include <iostream>
#include <vector>
#include <random>

using namespace std;

//9.4 �� ������ �����ε� �ϱ�


class Cents
{
private:
	int m_cents;

public:

	Cents(int c = 0) { m_cents = c; }

	int getCnets() const { return m_cents; }
	int& getCnets() { return m_cents; }


	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}


	// sort �������� ����ϴ� ���̸� <�� ǥ�����Ұ� 
	// �񱳿����ڸ� ����Ϸ��� operator < �� �ʿ��ϴ�
	friend bool operator < (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	/*friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return (c1.m_cents == c2.m_cents) ? true : false;
	}


	friend bool operator != (const Cents& c1, const Cents& c2)
	{
		return (c1.m_cents != c2.m_cents) ? true : false;
	}*/


};


int main()
{

	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; i++)
	{
		arr[i].getCnets() = i;
	}


	std::random_device rd;
	std::mt19937 g(rd());

	std::shuffle(arr.begin(), arr.end(), g);

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;


	std::sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;


	/*
	Cents cents1(6);
	Cents cents2(0);



if (cents1 == cents2)
	{
		cout << "Equal" << endl;
	}
	else
		cout << "Not Equal" << endl;

	cout << std::boolalpha;*/

	return 0;
}
