//Print Even Numbers between 1 to 100 using for-loop.
#include <iostream>
using namespace std;
void main() 
{
	int i;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
system("pause");
}
