#include <iostream> 
#include <string>
#include <vector>


using namespace std;


// ��� ������ �����ε��ϱ�.
// 1. ?;(���� ������), ::(���� ������), sizeof �����ε� �ȵ�
// �����ڵ��� �켱������ ���� ��Ģ�� ������� �ʴ´�. 


class Cents
{
private :
	int m_cents;

public : 

	Cents(int c =0) { m_cents = c; }
	int getCnets() const { return m_cents; }
	int& getCents() { return m_cents; }


	friend Cents operator + (const Cents& c1, const Cents& c2)
	{
		return c1.getCnets() + c2.getCnets();
	}


	// ���� �Ͱ� ����.
	/*Cents operator + (const Cents& c2)
	{
		return m_cent + c2.getCnets();
	}*/
};


/*Cents operator + (const Cents& c1 , const Cents& c2)
	{
		return m_cent + c2.getCnets();
	}*/

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(2)).getCents() << endl;

	return 0;
}