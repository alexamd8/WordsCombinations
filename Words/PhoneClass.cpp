#include "StdAfx.h"
#include "PhoneClass.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using std::exit;
using std :: ofstream;
using namespace std;

//constructor
PhoneClass::PhoneClass(void)
{
	Number = "";
	ResultString = "";
	StringLenght = 0;
}
//destructor
PhoneClass::~PhoneClass(void)
{
}
//get number from console
void PhoneClass::getNumber()
{
	cout << "Comments."<<endl;
	cout <<" Input number :" ;
    cin >> Number;
}
//generate words
void PhoneClass::generateWords()
{
	StringLenght = getStringLenght(Number);
	setStringResult();

	cout<<ResultString<<endl;

	createCombination("",0,0);

    string Number;
	cin >> Number;

}
//calculate string lenght
int PhoneClass::getStringLenght(string InString)
{
   int LocStringLenght = 0;
	
   do 
   {
	 if(InString[LocStringLenght]=='\0')
		break;

	 ++LocStringLenght;
   }while (true);

   return LocStringLenght;
}

void PhoneClass::setStringResult()
{
	for (int i=0; i<StringLenght; i++)
	{
	switch (Number[i])
		{
		  case '2': ResultString = ResultString + "ABC";
             break;
          case '3': ResultString = ResultString + "DEF";
              break;
          case '4': ResultString = ResultString + "GHI";
              break;
          case '5': ResultString = ResultString + "JKL";
              break;
          case '6': ResultString = ResultString + "MNO";
              break;
          case '7': ResultString = ResultString + "PQRS";
              break;
          case '8': ResultString = ResultString + "TUV";
              break;
          case '9': ResultString = ResultString + "WXYZ";
              break;
		  default:
			  break;
		}
	}
}
string PhoneClass::getNewString(string InStr)
{
	string locStr = "";

	int len = getStringLenght(InStr);

	for (int i=0; i<len-1; i++)
		locStr +=InStr[i];

	return locStr;
}
//create combinations
void PhoneClass::createCombination(string ArxStr, int index,int startindex)
{
	int max = getCount(index);
	string locArxStr = ArxStr;

	for (int j=startindex; j < max+startindex; j++)
	{
    	cout<<ResultString[j];

		if (index+1 < StringLenght)
		{
			locArxStr += ResultString[j];
			createCombination(locArxStr,index+1,startindex+max);

			locArxStr = getNewString(locArxStr);

			if (j+1 < max+startindex && locArxStr != "")
				cout<<locArxStr;
		}
		else if (j<max+startindex-1 )
		{
			cout<<endl<<locArxStr;
		}
		else
		{
			cout<<endl;
		}
	}
}
int PhoneClass::getCount(int i)
{
	int count = 0;
	switch (Number[i])
		{
		  case '2': count = 3;
             break;
          case '3': count = 3;
              break;
          case '4': count = 3;
              break;
          case '5': count = 3;
              break;
          case '6': count = 3;
              break;
          case '7': count = 4;
              break;
          case '8': count = 3;
              break;
          case '9': count = 4;
              break;
		  default:
			  break;
		}

	return count;
}

