#include <iostream>
#include <stdio.h>

using namespace std;

class XYZ;

class ABC
{
	int a;
	public:
		void setValue(int aV)
		{
			a = aV;
		}
		void getValue(){cout << a;}
		friend void add(ABC &, XYZ &);
};

class XYZ
{
	int a;
	public:
		void setValue(int aV)
		{
			a = aV;
		}
		void getValue(){cout << a;}
		friend void add(ABC &, XYZ &);
};

void add (ABC &obj1, XYZ &obj2)
{
	int c = obj2.a;
	obj2.a  = obj1.a;
    obj1.a = c;
}
 

int main()
{
	ABC a;
	XYZ x;
	a.setValue(12);
	x.setValue(10);

	cout << "\na: "; 
	a.getValue(); 
	cout << " X: ";
	x.getValue();
    
	add(a,x);

	cout << "\na: "; 
	a.getValue(); 
	cout << " X: ";
	x.getValue();
	return 0;
}
