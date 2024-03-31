#include <iostream>
#include <string>


using namespace std;

//9.2 입출력 연산자 오버로딩 하기
// 규칙 

class Point
{

private:
	double m_x, m_y, m_z;

public : 
	Point(double x= 0.0f, double y = 0.0f, double z = 0.0f) : m_x(x), m_y(y),m_z(z) {}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	/*void Print()
	{
		cout << m_x << " " << m_y << " " << m_z;
	}*/


	friend std::ostream& operator << (std::ostream& out, const Point& point)
	{
		out << point.m_x << point.m_y << point.m_z;

		return out;
	}



};

int main()
{

	Point p1(1.0f, 2.0f, 3.0f), p2(3.4f, 1.5f, 2.0f);

	cout << p1 << " " << p2 << endl;
	return 0;
}

// 1 2 3 3.4 1.5 2