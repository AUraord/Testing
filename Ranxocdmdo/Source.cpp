#include <windows.h>
#include "Windows.h"


int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, PSTR nCmdLine, int nCmdShow)
{
	Windows wnd;

	if (!wnd.InitWindows(hInst, nCmdShow))
		return false;

	return wnd.Run();
	
}

