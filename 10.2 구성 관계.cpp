#include <iostream>
#include <string>
using namespace std;

// 10.2 구성 관계
\
class Monster
{
private :

	std::string m_name;

	Position2D& location;
	//int m_x; // location
	//int m_y;  

public:

	Monster(const string name_in,  Position2D in_location) : m_name(name_in), location(in_location)
	{
	}

	void MoveTo(const Position2D pos)
	{
		location.m_x = pos.m_x;
		location.m_y = pos.m_y;
	}

	friend std::ostream & operator << (std::ostream& out,  Position2D & pos2d)
	{
		out << pos2d.m_x<< " " << pos2d.m_y <<  endl;
		return out;
	}


};


class Position2D
{
private :


public :

	int m_x;
	int m_y;

	Position2D(const int& x_in, const int& y_in) :m_x(x_in) , m_y(y_in) { }

	void Set(const Position2D& pos_target)
	{
		m_x = pos_target.m_x;
		m_y = pos_target.m_y;
	}

	void Set(const int& x_target, const int& y_target)
	{
		m_x = x_target;
		m_y = y_target;
	}

	friend std::ostream& operator <<(std::ostream& out, const Position2D& pos2d)
	{

	}
};

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));

	cout << mon1 << endl;

	//while (1)
	{

		// Sanson 1 1
		mon1.MoveTo(Position2D(1,1));
		cout << mon1<< endl;
	}

	return 0;
}

