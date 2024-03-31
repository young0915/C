#include <iostream> 
#include <string>
#include <vector>


using namespace std;


// 산술 연산자 오버로딩하기.
// 1. ?;(삼항 연산자), ::(범위 연산자), sizeof 오버로딩 안됨
// 연산자들의 우선순위나 결합 법칙은 변경되지 않는다. 


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


	// 위에 것과 같음.
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