// Words.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "PhoneClass.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	PhoneClass* myPC = new PhoneClass();

	myPC->getNumber();
	myPC->generateWords();

	return 0;
}
