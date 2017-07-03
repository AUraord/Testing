#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int d;
	int x;
	int z = 0;
	srand(GetTickCount());
	system("color 0a");
	cout << "choose a number to find niger \n";
	cin >> x;
	cout << "if you like stalin choose a delay! \n";
	cin >> d;
	while (z != 1)
	{
		z = rand() % (100 + x);
		Sleep(d);
		cout << z << "	";
	}
	system("pause");
}