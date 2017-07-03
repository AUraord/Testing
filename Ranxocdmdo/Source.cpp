#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int NumToRange = 1;
	int delay;
	int Range;
	int ToFind = 0;

	system("color 4F");

	cout << "choose a Range niger \n";
	cin >> Range;
	system("cls");

	cout << "if you like stalin choose a delay! \n";
	cin >> delay;
	system("cls");

	system("color 10");

	srand(GetTickCount());

	while (ToFind != Range)
	{
		ToFind = rand() % (Range+1);
		Sleep(delay);
		cout << ToFind  << "	";
		NumToRange + 1;
	}

	system("color 4F");

	cout << "it took " << NumToRange << " to find the range \n";

	system("pause");
}