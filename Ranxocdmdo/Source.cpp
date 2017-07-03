#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int delay;
	int Range;
	int ToFind = 0;
	srand(GetTickCount());
	system("color 0a");
	cout << "choose a Range niger \n";
	cin >> Range;
	system("cls");
	cout << "if you like stalin choose a delay! \n";
	cin >> delay;
	system("cls");
	while (ToFind != Range)
	{
		ToFind = rand() % (Range+1);
		Sleep(delay);
		cout << ToFind << "	";
	}
	system("pause");
}