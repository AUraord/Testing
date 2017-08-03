#include <iostream>
#include <Windows.h>

using namespace std;

class Ange
{
private:
	int age;
	char* name;
public:
	void SetAge(int val)
	{
		age = val;
	}
	void SetName(char* val)
	{
		name = val;
	}
	int GetAge()
	{
		return age;
	}
	char* GetName()
	{
		return name;
	}
};

void HYF(Ange* ag)
{
	Ange* LOL = ag;

	LOL->SetName("bob");
	cout << LOL->GetName() << endl;
}

int main()
{
	Ange Kat;

	HYF(&Kat);

	cout << Kat.GetName() << endl;

	system("pause");
}