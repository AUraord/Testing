#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int NumToRange = 1;
	int delay;
	int Range;
	int ToFind = 0;

	system("color 0a");

	cout << "choose a Range niger \n";
	cin >> Range;
	system("cls");

	cout << "if you like stalin choose a delay! \n";
	cin >> delay;
	system("cls");

	srand(GetTickCount());

	while (ToFind != Range)
	{
		ToFind = rand() % (Range+1);
		Sleep(delay);
		cout << ToFind  << "	";
		NumToRange++;
	}

	system("cls");

	cout << "it took " << NumToRange << " numbers to find the range \n";

	system("pause");
}