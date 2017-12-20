#include <iostream>

using namespace std;

void toh(int disk, int t1, int t2, int t3)
{
	if (disk == 1)
	{
		cout << "\n Disk move from tower " << t1 << " tower " << t2 ;
		return;
	}

   toh(disk-1,t1,t3,t2);

   cout << "\n helllo Disk move from tower " << t1 << " tower " << t2 ;

   toh(disk-1,t3,t2, t1);
}

int main()
{
	toh(3, 1, 2, 3);
	return 0;
}
