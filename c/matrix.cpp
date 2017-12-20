#include <iostream>
using namespace std;

class matrix
{
	int **p;
	int row, col;
	public:
		void get_elements(int i, int j, int value)
		{
			p[i][j] = value;
		}
		int & put_elements(int i, int j)
		{
			return p[i][j];
		}
		matrix(int x, int y);
};

matrix::matrix(int x, int y)
{
	row = x;
	col = y;
	p = new int*[row]; //create an array pointer

	for(int i = 0; i < row; i++)
	{
		p[i] = new int[col];
	}
}

int main()
{
	int m, n;
	cout << "enter the size of matrix: ";
	cin >> m >> n ;

	matrix A(m, n);
    
	cout << "Enter the matrix row by row\n";
	int value;

	for(int i=0; i<m;i++)
		for(int j=0;j<n;j++)
		{
			cin>> value;
			A.get_elements(i,j,value);
		}

	cout << "\n";
	for(int i=0; i<m;i++)
    {
		for(int j=0;j<n;j++)
		{
			cout << A.put_elements(i,j) << "\t";
		}
	    cout << "\n";
    }
	return 0;

}
