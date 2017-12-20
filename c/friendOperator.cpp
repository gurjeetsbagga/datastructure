#include <iostream>
using namespace std;

class cal
{
	int op1, op2;
	public:
	    cal(){}
	    cal(int x){op1 = x;}
	    cal(int x, int y)
		{op1 = x; op2 = y;}
		friend cal operator+(cal a, int b);
		friend cal operator*(cal a, int b);
		friend cal operator*(int a, cal b);

		friend istream & operator >> (istream &, cal &);  
		friend ostream & operator << (ostream &, cal &);  
		void display(cal);
};


istream & operator >> (istream & din, cal & c)
{
	din >> c.op1;
	din >> c.op2;
}

ostream & operator << (ostream & dout, cal & c)
{
	dout <<"\n --cout--\n";
	dout <<"\n" << c.op1 <<"\n";
	dout <<"\n" << c.op2 <<"\n";

}

cal operator +(cal a, int b)
{
	cal ob;
	ob.op1 =  a.op1 + b;
	ob.op2 =  a.op2 + b;
    return ob;
}

cal operator *(cal a, int b)
{
	cal ob;
	ob.op1 =  a.op1 * b;
    return ob;
}

cal operator *(int a, cal b)
{
	cal ob;
	ob.op1 =  a * b.op1;
    return ob;
}

void cal::display(cal d)
{
	cout << d.op1 << " -- " << d.op2;
}

int main()
{
	
	cal c(3,4);
	c.display(c);
    cout << "\n";
    cal d;
	d = c + 5;	


	cal result = c + 2;
	result.display(d);
    cout << "\n";

	cal e(7);
    d = e * 5;
	d.display(d);
    cout << "\n";
    d = 7 * e;
	d.display(d);

	cout <<"\n====================\n";

	cal f;
	cout << "hello" << f;

	cout <<"\n --  Add number--\n";
    cin >> f;

	cout << f;
	return 0;
}
