#include <windows.h>
#include "resource.h"
#include <initializer_list>

bool isClicked=false;
HWND child;
HWND extra;
HINSTANCE Inst;
int num=0;
char name[2];

LONG WINAPI WndProc(HWND, UINT, WPARAM,LPARAM);
LRESULT CALLBACK ChildProc(HWND hwnd, UINT Message, WPARAM wparam,LPARAM lparam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{   
	HWND hwnd;     
	MSG msg;     
	WNDCLASS w;     
	memset(&w,0,sizeof(WNDCLASS));     
	w.style = CS_HREDRAW | CS_VREDRAW |  CS_DBLCLKS;     
	w.lpfnWndProc = WndProc;
	w.hInstance = hInstance;     
	w.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH+1);     
	w.lpszClassName = L"My Class"; 
    RegisterClass(&w); 
	hwnd = CreateWindow(L"My Class", L"OLD_APPLICATION", WS_OVERLAPPEDWINDOW | WS_BORDER, 0, 0, 1200, 700, NULL, NULL, hInstance, NULL); 
	ShowWindow(hwnd, nCmdShow);     
/*	UpdateWindow(hwnd);  */   
	
	while(GetMessage(&msg,NULL,0,0))     
	{        
		TranslateMessage(&msg);        
		DispatchMessage(&msg);     
	}     
	return msg.wParam; 
} 

LONG WINAPI WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lparam) 
{    
	switch (Message)    
	{ 
	case WM_DESTROY:             
		PostQuitMessage(0);       
		break;    
	case WM_KEYDOWN:
		switch(LOWORD(wParam))
		{
			case 0x44://D
				if(num)
				{
					extra=GetWindow(child, GW_HWNDLAST);
					child=GetWindow(child, GW_HWNDPREV);
					DestroyWindow(extra);
					num--;
				}
				else
				{
					MessageBox(hwnd, L"Окон больше нет!", L"WARNING", MB_OK);
				}
				break;
		}
		break;
	case WM_LBUTTONUP:
		if(num==5)
		{
			MessageBox(hwnd, L"Слишком много окон!", L"WARNING", MB_OK);
			break;
		}
		else
		{
			WNDCLASS w;
			memset(&w,0,sizeof(WNDCLASS));
			w.lpfnWndProc = ChildProc;
			w.hInstance = Inst;
			w.hbrBackground = (HBRUSH)(COLOR_WINDOW+(num+1));
			w.lpszClassName = L"ChildWClass";
			w.hCursor=LoadCursor(NULL, IDC_ARROW);
			RegisterClass(&w);
			_itoa_s(num+1, name, 10);
			child=CreateWindowEx(WS_EX_APPWINDOW, L"ChildWClass",(LPCWSTR)name, WS_CHILD | WS_CAPTION | WS_TILED, num*30, num*30, 200, 200, hwnd , (HMENU)(int)(ID1CHILD + num),Inst, NULL);
			num++;
			ShowWindow(child,SW_NORMAL);
			UpdateWindow(child);
			ShowWindow(hwnd,SW_NORMAL);
			InvalidateRect(hwnd, NULL, TRUE);
		}
		break;
	case WM_RBUTTONDBLCLK:
	{
		SetWindowText(hwnd, L" NEW NAZVANIE");
		int Width = 700;
		int Height = 700;
		MoveWindow(hwnd, 400, 200, Width, Height, TRUE);
		break;
	}
		break;

	case WM_CLOSE:   
		if(IDOK==MessageBox(hwnd, L"Exit programm?", L"Close", MB_OKCANCEL|MB_ICONQUESTION|MB_DEFBUTTON2))   
			SendMessage(hwnd, WM_DESTROY, NULL, NULL);   
		break;       
	default:  
		return DefWindowProc(hwnd, Message, wParam, lparam);    
	}    
	return 0; 
}

LRESULT CALLBACK ChildProc(HWND hwnd, UINT Message, WPARAM wparam,LPARAM lparam)
{
	if (Message == WM_DESTROY)
	{
		return 0;
	}
	return DefWindowProc(hwnd, Message, wparam, lparam);
}