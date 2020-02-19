#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

INPUT ip;
int dit = 60;
int dah = 230;

void dot() {
	Beep(523, 50);
	ip.ki.wVk = 0x45;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));	
	Sleep(dit);
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));;
}
void dash() {
	Beep(523, 250);
	ip.ki.wVk = 0x45;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));	
	Sleep(dah);
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));;
}

void sender(string mess) {


	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// assigning value to string s 
	string s = mess;

	int n = s.length();

	// declaring character array 
	char char_array[50];

	// copying the contents of the 
	// string to char array 
	strcpy(char_array, s.c_str());

	for (int i = 0; i < n; i++) {
		cout << char_array[i];
		//system("pause");

		switch (char_array[i]) {
			//il problema sono i return che chiudono la funzione
		case 'a':
			dot();
			dash();
			break;
		case 'b':

			dash();
			dot();
			dot();
			dot();
			Sleep(500);
			break;
		case 'c':
			dash();
			dot();
			dash();
			dot();
			Sleep(500);
			break;

		case 'd':
			dash();
			dot();
			dot();
			Sleep(500);
			break;
		case 'e':
			dot();
			Sleep(500);
			break;

		case 'f':
			dot();
			dot();
			dash();
			dot();
			Sleep(500);
			break;

		case 'g':
			dash();
			dash();
			dot();
			Sleep(500);
			break;

		case 'h':
			dot();
			dot();
			dot();
			dot();
			Sleep(500);
			break;

		case 'i':
			dot();
			dot();
			Sleep(500);
			break;

		case 'l':
			dot();
			dash();
			dot();
			dot();
			Sleep(500);
			break;

		case 'm':
			dash();
			dash();
			Sleep(500);
			break;

		case 'n':
			dash();
			dot();
			Sleep(500);
			break;

		case 'o':
			dash();
			dash();
			dash();
			Sleep(500);
			break;

		case 'p':
			dot();
			dash();
			dash();
			dot();
			Sleep(500);
			break;

		case 'q':
			dash();
			dash();
			dot();
			dash();
			Sleep(500);
			break;

		case 'r':
			dot();
			dash();
			dot();
			Sleep(500);
			break;

		case 's':
			dot();
			dot();
			dot();
			Sleep(500);
			break;

		case 't':
			dash();
			Sleep(500);
			break;

		case 'u':
			dot();
			dot();
			dash();
			Sleep(500);
			break;

		case 'v':
			dot();
			dot();
			dot();
			dash();
			Sleep(500);
			break;

		case 'z':
			dash();
			dash();
			dot();
			dot();
			Sleep(500);
			break;

		case 'w':
			dot();
			dash();
			dash();
			Sleep(500);
			break;

		case 'y':
			dash();
			dot();
			dash();
			dash();
			Sleep(500);
			break;

		case 'x':
			dash();
			dot();
			dot();
			dash();
			Sleep(500);
			break;

		case 'j':
			dot();
			dash();
			dash();
			dash();
			Sleep(500);
			break;

		case 0x20:
			Sleep(800);
			break;

		case 'k':
			dash();
			dot();
			dash();
			Sleep(500);
			break;





		}

	}



}


int main() {
	string mess;
	mess.clear();
	system("cls");
	do {
		
		cout << "Morse translator for 15WPM\n\n";

		cout << "Message to send: ";
		cin >> mess;

		Sleep(800);
		sender(mess);

		mess.clear();
		cout << "\n";

	} while (true);
	return 0;
}
