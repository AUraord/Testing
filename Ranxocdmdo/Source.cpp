#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main()
{
	int z = 0;
	srand(GetTickCount());
	system("color 0a");
	while (z = 1)
	{
		cout << rand() << "\t";
	}
	system("pause");
}