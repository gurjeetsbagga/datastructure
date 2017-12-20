#include <iostream>
using namespace std;

class abc
{
	int a,b;
	public:
		abc(){}

		abc(float x, float y)
		{a =x; b= y;}
		
		abc operator+(abc);
		
		void display(void);
};

abc abc::operator+(abc c)
{
	abc temp;
	temp.a = a + c.a;
	temp.b = b + c.b;
	return temp;
}

void abc::display()
{
	cout << a << " + " << b;
}

int main()
{

	abc obj1(3,5);
	abc obj2(7,8);

	abc obj3 = obj1 + obj2;

	obj3.display();

	return 0;
}
