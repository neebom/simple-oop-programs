//Print ODD Numbers between 1 to 100 using while-loop.
#include <iostream>
using namespace std;
void main() 
{
	int i=1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			cout << i << " ";
		i++;
	}
system("pause");
}
