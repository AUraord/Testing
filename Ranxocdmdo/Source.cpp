#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	
	
	int ToFind = 0;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hCon, FOREGROUND_RED | FOREGROUND_INTENSITY);

	cout << "choose a number to find! \n";
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
	cout << "choose a delay! \n";
	cin >> Delay;
	system("cls");


	srand(GetTickCount());

	int TimesToFind = 0;
	int MaxNumber = 0;
	SetConsoleTextAttribute(hCon, FOREGROUND_GREEN  | BACKGROUND_RED | FOREGROUND_INTENSITY);
	while (ToFind != Range)
	{
		ToFind = rand() % (Range + 1);
		Sleep(Delay);
		cout << ToFind  << "	";
		TimesToFind++;
		if (ToFind > MaxNumber)
			MaxNumber = ToFind;
	}

	

	cout << endl << "it took " << TimesToFind << " tiems to find the range \n";
	SetConsoleTextAttribute(hCon, FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "The max number was " << MaxNumber << endl;
	SetConsoleTextAttribute(hCon, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	system("pause");
}