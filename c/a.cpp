#include <iostream>
using namespace std;

int main()
{
	int d1 =5;
	int **p;
	cout <<"\np: " <<sizeof(p);
	p = new int*[d1];

	cout <<"\np: " <<sizeof(p);

	return 0;
}
