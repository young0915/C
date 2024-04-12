#include <iostream>
#include <string>
#include <vector>


using namespace std;

//8.2 캡슐화, 접근 지정자, 접근 함수


// access specifier : public, private, protected

class Date
{
private:
	int m_month;
	int m_day;
	int m_year;

public:
	void SetDate(const int& month, const int& day_input, const int& year_input)
	{
		m_month = month;
		m_day = day_input;
		m_year = year_input;
	}

	const int& getDay()
	{
		return m_day;
	}

	void CopFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}

};


int main()
{

	Date today; //{ 4,11,2024 };
	today.SetDate(4, 11, 2024);


	Date copy;
	copy = today;
	copy.CopFrom(copy);

	cout <<copy.getDay() << endl;
	return 0;
}