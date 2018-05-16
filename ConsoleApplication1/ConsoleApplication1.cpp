// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <ctime>
#pragma comment(lib, "winmm.lib")
 using namespace std;

 void textScroll(char strName[], int textSpeed) {
	 int len = strlen(strName);
	 for (int i = 0; i < len; i++) {
		 putchar(strName[i]);
		// Beep(440, textSpeed);
		 Sleep(textSpeed);
	 }
 }

 

 int main()
 {
	 int textScrollSpeed = 3;
	 sndPlaySound(L"..\\Project.wav", SND_FILENAME | SND_ASYNC | SND_LOOP);
	 char str[] = { "Hello Player" };
	 textScroll(str, textScrollSpeed);
	 Sleep(1000);
	 cout << endl;
	 char str1[] = { "Press [space] to continue" };
	 textScroll(str1, textScrollSpeed);
	 cout << endl;
	 char ch;
	 ch = _getch();
	 if (ch == ' ') {
		 system("COLOR 0C");
		 system("CLS");
		 char str2[] = { "Welcome to my World." };
		 textScroll(str2, textScrollSpeed);
	 }
	 Sleep(5000);
	 system("COLOR 0");
	 system("COLOR 07");
	 system("CLS");
	 char str3[] = { " \"Huh?\" " };
	 textScroll(str3, textScrollSpeed);
	 Sleep(1200);
	 system("CLS");
	 char str4[] = { " \"Wh.. Where Am I?\" " };
	 textScroll(str4, textScrollSpeed);
	 Sleep(1200);
	 system("CLS");
	 char str5[] = { " \"Who.. Am I?\" " };
	 textScroll(str5, textScrollSpeed);
	 cout << endl;
	 Sleep(1200);
	 char str6[] = {"Please Enter Your Name:"};
	 textScroll(str6, textScrollSpeed);
	 cout << endl;
	 char Name[256];
	 cin >> Name;
	 cout << endl;
	 char str7[] = {"You wake up in a small clearing, in a world you have never seen before. The atmosphere is.. different. But you can't \nquite figure out what is off. You look around to check your surroundings a bit before wandering off into the wilderness.\nTo the West are Dense forests that are quite dark, despite being mid-day. To the North is a large flatland,\nand you think you can see the faint outline of a building off in the distance. To the East are large, steep mountains\nthat seem to be rich with necessary resources. To the South you see a large, very intimidating castle, and you decide to stay away from it for now."};
	 textScroll(str7, textScrollSpeed);
	 cout << endl;
	 bool option = false;
	 do {
		 char str8[] = { "Which direction do you want to Travel?" };
		 textScroll(str8, 50);
		 cout << endl;
		 char Direction[256];
		 string directionChoice = "north";
		 cin >> Direction;
		 if (Direction == directionChoice) {
			 char str9[] = { "You start traveling North across the flat plains. There's not much to see, except the building off in the distance getting closer as you keep walking. The building looks very old and worn out, possibly abandoned. Try opening the door?[y/n]" };
			 textScroll(str9, textScrollSpeed);
			 cout << endl;
			 option = true;
		 }
		 else
		 {
			 cout << "please Enter a valid Direction. ";
		 }
	 } while (option == false);
			 char Open[256];
			 cin >> Open;
			 if (Open == "y" || "Y") {
				 char str10[] = { "test stuff blah blah lore blah" };
				 textScroll(str10, textScrollSpeed);
				 cout << endl;
			 }
				 bool ClassSelect = false;
				 do {
					 char str11[] = { "Choose your Class \n --mage \n --gladiator \n --archer \n --support\n" };
					 textScroll(str11, 50);
					 char Class[256];
					 cin >> Class;
					 if (Class == "mage" || "Mage") {
						 char str12[] = { "Did you choose the mage class? [y/n]" };
						 textScroll(str12, 50);
					 }
					 else if (Class == "gladiator" || "Gladiator") {
						 char str13[] = { "Did you choose the gladiator class? [y/n]" };
						 textScroll(str13, 50);
					 }

					 char chr[1];
					 const char* yes = "y";
					 const char* no = "n";

					 cin >> chr;
					 cout << endl << chr;
					 if (chr == yes) {
						 cout << "test" << endl;
						 ClassSelect = true;

					 }
					 else if (chr == no) {
						
					 }
					 else {
						 char str14[] = {"Please choose a valid argument"};
						 textScroll(str14, 50);
					 }
				 } while (ClassSelect == false);
    return 0;
}

