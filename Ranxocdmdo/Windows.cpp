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
	wc.lpfnWndProc = Windows::WinProc;
	wc.lpszClassName = CLASS_NAME;
	if (!RegisterClass(&wc))
		return false;

	hWnd = CreateWindow
		(
		CLASS_NAME, //class name
		NULL, // window name
		WS_OVERLAPPEDWINDOW, //style
		CW_USEDEFAULT, CW_USEDEFAULT,//x y
		WindowWidth, WindowHeight, //width height
		0, 0, hInst, 0);

	if (!hWnd)
		return false;

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);
	SetWindowText(hWnd, L"СУКА БЛЯТЬ");

	CreateButton();

	return true;
}

int Windows::Run()
{
	MSG msg = { 0 };

	
	while (GetMessage(&msg, 0, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return true;
}

LRESULT Windows::WinProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	if (Msg == WM_NCCREATE)
	{
		SetWindowLongPtr(hWnd, GWLP_USERDATA, (LONG_PTR)((CREATESTRUCT*)lParam)->lpCreateParams);
		return TRUE;
	}
	return ((Windows*)GetWindowLongPtr(hWnd, GWLP_USERDATA))->_WinProc(hWnd, Msg, wParam, lParam);
}

LRESULT Windows::_WinProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	switch (Msg)
	{
	
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	default:
		return DefWindowProc(hWnd, Msg, wParam, lParam);
	}

	return 0;
}


HWND Windows::CreateButton()
{
	HWND hwndButton = CreateWindow(L"BUTTON",
		L"John Is Gay",
		WS_VISIBLE | WS_CHILD | WS_TABSTOP | BS_DEFPUSHBUTTON,
		(WindowWidth / 2), (WindowHeight / 2),
		100, 30,
		hWnd, NULL, NULL, NULL);
	if (hwndButton == NULL)
	{
		return NULL;
	}

	

	return hwndButton;
}