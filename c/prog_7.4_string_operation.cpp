#include<iostream>
#include<cstring>
using namespace std;

class strin
{
	char *p;
	int len;
public:
	strin();
	strin(char *str){ p = str;}
	friend strin operator+(strin str1, strin str2);
	void display(){cout << p;}
};

strin operator+(strin str1, strin str2)
{
	strin str3;
	str3.len = str1.len + str2.len;
	str3.p = new char[str3.len + 1];
	strcpy(str3.p, str1.p);
	strcat(str3.p, str1.p);
	//return str3;
}

int main()
{
    char a[] = "hello";
    char b[] = "sir";
	strin str1(a);
	strin str2(b);

//	strin str3 = str1 + str2;
	strin str4;
	str4(a); 
    cout << str4.display();
}
