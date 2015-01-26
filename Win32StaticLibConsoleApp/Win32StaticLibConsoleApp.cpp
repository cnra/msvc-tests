// Win32StaticLibConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MathFuncsLib.h"
#include <iostream>

int SampleAddInt(int i1, int i2);
extern int SampleAddIntExtern(int i1, int i2);
static int SampleAddIntStatic(int i1, int i2);

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int sonuc = 0;

	sonuc = SampleAddInt(3,5);
    printf("SampleAddInt: %d!\n", sonuc);

    sonuc = SampleAddIntExtern(3,5);
    printf("ExternAddInt: %d!\n", sonuc);

	// MSDN ornekleri https://msdn.microsoft.com/en-us/library/ms235627.aspx
	double a = 7.4;
    int b = 99;

    cout << "a + b = " <<
        MathFuncs::MyMathFuncs::Add(a, b) << endl;
    cout << "a - b = " <<
        MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
    cout << "a * b = " <<
        MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
    cout << "a / b = " <<
        MathFuncs::MyMathFuncs::Divide(a, b) << endl;


//    sonuc = SampleAddIntStatic(3,5);
//    printf("StaticAddInt: %d!\n", sonuc);



	return 0;
}

