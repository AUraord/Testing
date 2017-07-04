#include <iostream>
#include <Windows.h>
#include <ctype.h>

using namespace std;

int main()
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hCon, FOREGROUND_RED | FOREGROUND_INTENSITY);

	int ToFind = 0;
	cout << "choose a number for this program to find! \n";
	cin >> ToFind;
	system("cls");

	SetConsoleTextAttribute(hCon, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	int Range;

	cout << "choose a Range \n";
	cin >> Range;
	system("cls");
	
	if (Range < ToFind)
		return 1;

	SetConsoleTextAttribute(hCon, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	int Delay;

	cout << "if you like stalin choose a delay! \n";
	cin >> Delay;
	system("cls");


	srand(GetTickCount());

	int MinNumber = 0;
	int TimesToFind = 0;
	int MaxNumber = 0;

	SetConsoleTextAttribute(hCon, FOREGROUND_GREEN  | BACKGROUND_RED | FOREGROUND_INTENSITY);

	while (ToFind != Range)
	{
		ToFind = rand() % (Range + 1);

		TimesToFind++;
		Sleep(Delay);

		cout << ToFind  << "	";

		if (ToFind > MaxNumber)
			MaxNumber = ToFind;
		if (ToFind < MinNumber)
			MinNumber = ToFind;
	}

	
	SetConsoleTextAttribute(hCon, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	cout << endl << "it took " << TimesToFind << " times to find the range \n";

	SetConsoleTextAttribute(hCon, FOREGROUND_GREEN | FOREGROUND_BLUE);

	cout << "The maximum number was " << MaxNumber << endl;

	SetConsoleTextAttribute(hCon, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	cout << "The Minimum was " << MinNumber << endl;

	system("pause");
}