#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	
	
	int ToFind = 0;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hCon, FOREGROUND_RED | FOREGROUND_INTENSITY);

	cout << "if you like hitler choose a number for this niggermachine to find! \n";
	cin >> ToFind;
	system("cls");

	SetConsoleTextAttribute(hCon, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	int Range;
	cout << "choose a Range niger \n";
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

	
	SetConsoleTextAttribute(hCon, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	cout << endl << "it took " << TimesToFind << " tiems to find the range \n";
	SetConsoleTextAttribute(hCon, FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "The maximilianmus number whaz " << MaxNumber << endl;
	SetConsoleTextAttribute(hCon, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	system("pause");
}