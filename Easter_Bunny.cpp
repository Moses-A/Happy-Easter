// Code that displays a Command Line Easter Bunny
// Moses Arocha

#include <iostream>
#include <windows.h> // windows tool only, used to add color
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include<fstream>

using namespace std;

void welcome();
void bunny();
void credits();

//necessary to add color to console
WORD GetConsoleTextAttribute (HANDLE hCon)
{
  CONSOLE_SCREEN_BUFFER_INFO con_info;
  GetConsoleScreenBufferInfo(hCon, &con_info);
  return con_info.wAttributes;
}

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
const int saved_colors = GetConsoleTextAttribute(hConsole);


void welcome()
{
    cout << "\t\t\t Hello! Welcome To The Amazing Bunny!\n";
}

void bunny()
{
	SetConsoleTextAttribute(hConsole, saved_colors);
	cout << "\n      ___                /\\  ";
	cout << "\n    .'   \\              /:.\\ ";
	cout << "\n   /      \\            | :: \\";
	cout << "\n  /   /.:  \\          / ::: | ";
	cout << "\n |    |::.  \\        / ::: /  ";
	cout << "\n |   / \\::.  |      / ::: /   ";
	cout << "\n '--'   \\:.  |_____/ ::: /    ";
	cout << "\n         \\:        '::'/      ";
	cout << "\n         /            (       ";
	cout << "\n        /    ";
	SetConsoleTextAttribute(hConsole, 0x1A);
	cout << "0";
	SetConsoleTextAttribute(hConsole, 0x0D);
	cout << "___";
	SetConsoleTextAttribute(hConsole, 0x1A);
	cout << "0";
	SetConsoleTextAttribute(hConsole, saved_colors);
	cout << "     \\     ";
	cout << "\n      \\/      ";
	SetConsoleTextAttribute(hConsole, 0x0D);
	cout << "\\_/ ";
	SetConsoleTextAttribute(hConsole, saved_colors);
	cout << "      \\/    ";
	cout << "\n   -==|   '.'  |  '.'   |==-  ";
	cout << "\n      /\\     '-^-'      /\\   ";
	cout << "\n        \\    _   _     /      ";
	cout << "\n        .-'-";
	SetConsoleTextAttribute(hConsole, 0x04);
	cout << "((\\0/))";
	SetConsoleTextAttribute(hConsole, saved_colors);
	cout << "-'-'-.     ";
	cout << "\n   _   /     ";
	SetConsoleTextAttribute(hConsole, 0x04);
	cout << "//^\\\\    ";
	SetConsoleTextAttribute(hConsole, saved_colors);
	cout << "   \\   _ ";
	cout << "\n .'0'.(     , .:::. ,     ).'0'.";
	cout << "\n |0 0 \\\\   \\ :::::: /    // 0 0|";
	cout << "\n  \\    \\\\   | :::: |    //     /";
	cout << "\n   \\    \\\\__/ :::: \\__//     /  ";
	cout << "\n    \\.:. \\   ......   / .:./  ";
	cout << "\n     \\..  |_.======._|  ../   ";
	cout << "\n      '---'          '---'   ";

}

void credits()
{
    cout << "\n\t Hello. \n\n"
   	 << " The Credits Of This Project Are Towards Caleb Whiddon And Matthew Soudah.\n"
	 << " Of Course, This Is My Code, But They Help Tremendously.\n\n";
}

int main()
{
	int choice;
	int exit = 0;

	while (exit == 0)
	{
	    SetConsoleTextAttribute(hConsole, 0x0D);
	    cout << "\n\t\t HAPPY EASTER! I HOPE YOU HAVE A GREAT DAY! ";
	    SetConsoleTextAttribute(hConsole, 0x09);
	    cout << "\n _____________________________________________________________________________ ";
	    SetConsoleTextAttribute(hConsole, 0x0C);
	    cout << "\n\n\t\t [1] Display The Amazing Bunny ";
	    SetConsoleTextAttribute(hConsole, 0x0E);
	    cout << "\n\t\t [2] Credits Of The Project ";
	    SetConsoleTextAttribute(hConsole, 0x0A);
	    cout << "\n\t\t [3] Exit ";
	    SetConsoleTextAttribute(hConsole, 0x0B);
	    cout << "\n Choice: ";
	    SetConsoleTextAttribute(hConsole, 0x03);
	    cin >> choice;

		switch(choice)
		{
		    case 1:
			system("cls");
			welcome();
			bunny();
			cin.ignore();
			cin.get();
			system("cls");
			break;

		    case 2:
			system("cls");
			credits();
			cin.ignore();
			cin.get();
			system("cls");
			break;

		    case 3:
			exit = 1;
			cout << "\n\n\n";
			break;

		    default:
			cout << "\n\n\n Invalid Selection. Press A Key To Return To Main Menu. ";
			cin.ignore();
			cin.get();
			system("cls");
		}

		if (exit == 1)					//Exit flag is set-break the loop)
		{	break;    }

	}
    return 0;
}
