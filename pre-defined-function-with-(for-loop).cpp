//In this program PRE-DEFINED function is used with for-loop
#include <iostream>
using namespace std;

void table(int x)
{
	int y;
	for (y = 1; y <= 10; y++)
		cout << x << " * " << y << " = " << x * y << endl;
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
 
