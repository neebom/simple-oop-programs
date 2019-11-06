//In this program PRE-DEFINED function is used with do-while-loop

#include <iostream>
using namespace std;

void table(int x)
{
	int y=1;
	do
	{
		cout << x << " * " << y << " = " << x * y << endl; y++;
	} while (y <= 10);

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
 
