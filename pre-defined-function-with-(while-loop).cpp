//In this program PRE-DEFINED function is used with while-loop

#include <iostream>
using namespace std;

void table(int x)
{
	int y=1;
	while (y <= 10)
	{
		cout << x << " * " << y << " = " << x * y << endl;
		y++;
	}
}
void main()
{
	int x;
	cout << "(Simple Program for Multiplication Times Table with Range x10)" << endl;
	cout << "Enter the No. for Table: ";
	cin >> x;
	table(x);
system("pause");
}
 
