#include <string>
using namespace std;

#pragma once

class PhoneClass
{
private:
	string Number;
	string ResultString;
	int StringLenght;
public:
	PhoneClass(void);
	~PhoneClass(void);
    void getNumber();
	void generateWords(); 

private:
	int getCount(int);
	void createCombination(string,int,int);
	int getStringLenght(string);
	string getNewString(string);
	void setStringResult();
};
