// Win32DLLConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int __declspec(dllimport) add(int a, int b);


int _tmain(int argc, _TCHAR* argv[])
{
	int a = 2;
    int b = 1;
    printf("a=%d, b=%d\n", a,b);
    printf("add: %d\n", add(a,b));
    getchar();
    return 0;
}

