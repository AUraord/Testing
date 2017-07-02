#include "Windows.h"



Windows::Windows()
	:
	hWnd(NULL),
	WindowWidth(400),
	WindowHeight(400)
{
	
}


Windows::~Windows()
{
}

bool Windows::InitWindows(HINSTANCE hInst, int nCmdShow)
{
	WNDCLASS wc = { 0 };
	wc.hbrBackground = (HBRUSH)GetStockObject(DKGRAY_BRUSH);
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.hIcon = LoadIcon(0, IDI_APPLICATION);
	wc.hInstance = hInst;
	wc.lpfnWndProc = WinProc;
	wc.lpszClassName = CLASS_NAME;
	if (!RegisterClass(&wc))
		return false;

	hWnd = CreateWindow
		(
		CLASS_NAME, //class name
		L"сука блять", // window name
		WS_OVERLAPPEDWINDOW, //style
		CW_USEDEFAULT, CW_USEDEFAULT,//x y
		WindowWidth, WindowHeight, //width height
		0, 0, hInst, 0);

	if (!hWnd)
		return false;

	ShowWindow(hWnd, nCmdShow);

	return true;
}

int Windows::Run()
{
	MSG msg = { 0 };

	int Ret = 1;
	while (GetMessage(&msg, 0, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return true;
}

LRESULT CALLBACK WinProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	switch (Msg)
	{
	
	case WM_PAINT:
		{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);

		FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));

		EndPaint(hWnd, &ps);
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
		break;
	}
	
	return DefWindowProc(hWnd, Msg, wParam, lParam);
}