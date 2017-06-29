//test.c
#include <Windows.h> //GetComputerName
#include <iostream>
#include <string>

using namespace std;


int main(void) {
	char Name[150];
	int i = 0;
	TCHAR infoBuf[150];
	DWORD bufCharCount = 150;
	memset(Name, 0, 150);
	GetComputerName(infoBuf, &bufCharCount);
	for (i = 0; i < 100; i++) {
		Name[i] = infoBuf[i];
	}

	char Name2[100] = "abc";
	printf("Computer name: %s \n", Name);

	return 0;
}