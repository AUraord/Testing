#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int z = 0;
	srand(GetTickCount());
	system("color 0a");
	while (z != 1)
	{
		z = rand() % (100 + 1);
		cout << z << "\t";
	}
	system("pause");
}