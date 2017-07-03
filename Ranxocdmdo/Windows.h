#pragma once
#include <Windows.h>

class Windows
{
public:
	Windows();
	virtual ~Windows();

	bool InitWindows(HINSTANCE hInst, int nCmdShow);
	int Run();
	

	HWND hWnd;

	

private:
	const wchar_t* CLASS_NAME = L"Windows Class";
	int WindowWidth, WindowHeight;
	static LRESULT CALLBACK WinProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
	LRESULT _WinProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
	HWND CreateButton(const wchar_t* Text);

};



