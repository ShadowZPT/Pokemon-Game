/*
Jogo desenvolvido por: Ruben Nascimento
Helped by: Ragathian, Confuseh
*/
/*
The different color codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
*/

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											  CHANGELOG 										   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

/*

////////////////////////////////////\\
//									\\
//			 VERSION 0.1a			\\
//									\\
//////////////////////////////////////



- Made Basic code
- Made Basic Attack System (Player to Opponent)
- Removed unused stuff
- Improved general coding
- Improved coding organization

---------------------------------------------------------------------------------------------



////////////////////////////////////\\
//									\\
//			 VERSION 0.1b			\\
//           (21-09-2015)           \\
//									\\
//////////////////////////////////////

(+ - Added Feature | * - Fixed Feature | ! - Improved Feature )

+ Made Save Progress System
+ Made Choose pokemon initially system (Removed randomly generated initial pokemon)
+ Made basic intro System
+ Made Choose Name & Gender for Realism Purposes
+ Made Load Progress System
* Fixed exit game not working properly in some instances
+ Made Stats System
+ Made Bag System
+ Made Potion System
! improved Introduction System
+ Made Enemy Attack Function
+ Made PokeCenter System
* Fixed display level in fight
+ Made random HP Attack (Player to Opponent)

------------------------------------------------------------------------------------------


////////////////////////////////////\\
//									\\
//			 VERSION 0.1c			\\
//           (25-09-2015)           \\
//									\\
//////////////////////////////////////

(+ - Added Feature | * - Fixed Feature | ! - Improved Feature )

* Fixed battle continuing if enemy pokemon or player pokemon died
! Improved enemy/player HP points (in accordance to original pokemon)
! Improved End Battle System
+ Added initial Experience System
+ Added initial Level up System

------------------------------------------------------------------------------------------


////////////////////////////////////\\
//									\\
//			 VERSION 0.1d			\\
//           (28-09-2015)           \\
//									\\
//////////////////////////////////////

(+ - Added Feature | * - Fixed Feature | ! - Improved Feature )

+ Added chance of critical hit
+ Added so that Max HP increases each Level up
+ Added initial Pokemon types System
+ Added initial Poke Ball system
+ Added initial Pokemon Catch System
+ Added initial Pokemon Change System
! Improved Level up System (Pokemons can evolve now)
* Fixed displaying incorrect game version
* Fixed display of super effective attack

------------------------------------------------------------------------------------------


////////////////////////////////////\\
//									\\
//			 VERSION 0.2			\\
//           (30-09-2015)           \\
//									\\
//////////////////////////////////////

(+ - Added Feature | * - Fixed Feature | ! - Improved Feature )

+ Added Music!
+ Added Title Screen!
! Added Colors to Title Screen!
+ Added Initial Colors for Pokemons!
! Improved protection of Save Files (Protection Level: Dummies)
+ Added more Colors to Pokemons!
+ Added Credits Display!
! Improved Experience System!
+ Added XP Bar (Experience) + Color!
! Enemy Level is now Based on my Pokemon Level!
! Improved Display of HP Bar, It's now Dynamic Colors!
+ Made Enemy Pokemon types (Grass Pokemon = Grass type!)
+ Made Current pokemon appear in Pokemon List Selection
* Fixed game not saving current pokemon to list properly
+ Made initial system of giving an option to choose another pokemon if current pokemon died
+ Added Super Effective attacks to special combination of types of pokemons (Grass vs Fire = Fire Wins)
! Improved Pokemon Selection List
* Fixed Game not getting user name after starting a new game

------------------------------------------------------------------------------------------


////////////////////////////////////\\
//									\\
//			 VERSION 0.3			\\
//           (06-10-2015)           \\
//									\\
//////////////////////////////////////

(+-Added Feature | *-Fixed Feature | !- Improved Feature)

+ Added More Colors!
* Fixed not displaying enemy Pok�mon Name if type of pokemon wasn't Grass/Fire/Water
* Fixed displaying enemy Pok�mon twice on enemy Pokemon Attack
+ Added Pokemon Battle UI to Fight Moves List (+ Colors)
.. To be Continued ..


//////////////////////////////////////////\\
//								   	      \\
//			    Version 0.4		          \\
// (25-10-2015 - 24/11/2016 - 25/11/2016) \\
//									      \\
////////////////////////////////////////////

+ Added more pokemons!
+ Player now has the ability to choose the game language on first run!
+ Added first translations to the game (Portuguese-Portugal)
! Game now waits for player's input (Like the original game)
! Improved Saving system
! Improved load game system
! Improved alot of the UI + added more colors

/*
------------------------------------------------------------------------------------------

TODO LIST!

1 - Fazer com que quando seja para clickar para avan�ar no jogo, d� um som (preferivelmente o som do pokemon)

!IMPORTANTE2! - Fazer uma vari�vel global de maneira a que o jogo verifique se o jogador fez a escolha
                de pokemon e se escolheu o jogo, para caso o jogador escolha a linguagem na primeira vez
				(antes de fazer a intro), ele n�o possa fazer "Load Game" e assim ficar com o save corrupto!

!IMPORTANTE3! - Verificar o ecr� inicial, porque algo n�o est� bem O.o!!!!!!!!!!!!!!

1 - Traduzir o jogo para Multi-Language (Portug�s primeiro na lista :P)
1 - Meter as evolu��es dos pokemons que coloquei na e os tipos
1 - Make the Super Effective Attacks on Each one of the attacks(not on the pokemon type!) so each attack must have a type, and yeah.. xD
1 - Fix not choosing the first pokemon in the file if pokemon died (and had more than 1 pokemon)
1 - Make Switch-case in Level up system
5 - Make the text boxes created dynamically so it doesn't mess up with different pokemon names :)
6 - LEARN CLASSES & HEADERS ( Improves code, makes it easier i think..) || Learn OOP (**  OOP(hard stuff for now) ||

------------------------------------------------------------------------------------------

/* DONE LIST

!ATTENTION! : When you have a save file, and you create a new game, it doesn't let me put my name, it skips.. (BUffer?)
2 - Esperar pelo input dos utilizadores a cada screen que aparece
3 - Make fixed UI Interface (Like the name of the game and Version)
4 - Make Pokemon Selection List System (Pokemons Option)
2 - ENEMY LEVEL SHOULD BE BASED ON MY POKEMON'S LEVEL
1 - Make Pokemon types (Eg: Water vs Fire =  Fire Gets Rekt! Kappa)
1 - Improve Experience System
1 - Make Credits
1 - Make ENEMY Pokemon Types
2 - Improve Level up system ( Make the pokemons Evolve!!! )
1 - Make Random Attack Damage (+ chance of critical hit? (maybe))
2 - I have to find a way to display the same battle again.. I can't figure it out :c
come on, it was easy.. you have to pay attention.. -.-' THANK YOU SHELL xD
3 - SAVE FILES TO SAVE PROGRESS xD (like save my pokemon level and things like that)
4 - Make Attack System (basic for now :c)
5 - attack should have many moves, it should take enemy hp
6 - Make the enemy to attack after me!
7 - Make bag System
8 - Limit the size of the console window (Thanks Hanhau xD)
9 - Finish Basic attack system (Opponent to Player)
10 - Make Potions System
11 - Make PokeCenter System (When currentPKM Dies, after finishing attack system!)
12 - Added ability for player to choose the game's language when first starting the game
13 - Fixed and improved save system
14 - Fixed and improved load system
15 - Added initial Translations to the game (Portuguese-Portugal)

------------------------------------------------------------------------------------------

*/

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											INCLUDE FUNCTIONS									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

// INCLUDES
#include <time.h>
#include <string>
#include <random>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <MMsystem.h>
#include <conio.h>
#include <stdio.h>
#include <cwchar>
// Sound Include
#pragma comment( lib, "Winmm.lib" )

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											STANDARD LIBRARY									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

// STANDARD LIBRARY
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											PROTOTYPE FUNCTIONS									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

// PROTOTYPES
void exp();
void fight();
int exitGame();
void runAway();
void saveGame();
void hpPoints();
void loadGame();
void pokeCenter();
void gameCredits();
void enemyAttack();
void titleScreen();
int introPokemon();
void createBattle();
void waitAndClear();
void bagMenuOption();
void randomMyPokemon();
void randomMyAttacks();
void setConsoleColor(int background, int text);
void endBattleDisplay();
void pokemonMenuOption();
void createLanguageFile();
void randomEnemyAttacks();
void randomEnemyPokemon();
void displayBattle(int enemyHP);
void displayPokemonsUI(int enemyHP);
string hpGUI(int hp);
string xpGUI(int xp);

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											GLOBAL VARIABLES									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

// GLOBAL VARIABLES
int pokeCount = 1, exitOption = 0, savedCurrentPokemon = 0, myID = 0, myHP = 20, myExp = 0, enemyHP, maxHP = 20, attacked = 0, enemyLvl, enemyDamage, myDamage, myLvl = 5, potions = 0, potionHPAmount = 20, pokeBalls = 0, triggerNumber = 0, fezIntro = 0;
string pkmType, currentPKM, enemyPKM, enemyAttacks, enemyType, vidaUI, gameVersion = "0.2", playerName = "", playerGender = "", playerLanguage = "EN";
bool trigger = false;

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											PRIMARY FUNCTION									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

								////////////////////////////////////\\
								//									\\
								//			 MAIN FUNCTION			\\
								//									\\
								//////////////////////////////////////

// MAIN FUNCTION
int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	// This defines the height and width of the cmd window
	// MODE(width, height);
	system("MODE 105,38");
	SetConsoleTitle(TEXT("Pok�mon: Twitched Edition!"));
	setConsoleColor(1, 15);
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 27;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	//system("Color 70");

	//PlaySound(TEXT("sound/pokemon.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	titleScreen();

	// Seed the beast with TIME MUAHAHA :D
	const unsigned int total = 50;
	
	random_device rd;
	mt19937 re(rd());
	uniform_int_distribution<int> ui(1, 500);

	srand((unsigned int)time(NULL));
	waitAndClear();
	// Stop the game successfully
	return 0;
}


void setConsoleColor(int background, int text)
{ 
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, (WORD)((background << 4) | text));
}// color code 0-15


///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//										SECONDARY FUNCTIONS										   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

void titleScreen()
{
	
}

								////////////////////////////////////\\
								//									\\
								//		INTRODUCTION FUNCTION		\\
								//									\\
								//////////////////////////////////////

int introPokemon()
{
	
}

								////////////////////////////////////\\
								//									\\
								//		  LOAD GAME FUNCTION		\\
								//									\\
								//////////////////////////////////////

void loadGame()
{
	if (ifstream("save.dat"))
	{
		string name, type, gender, language, pokemon;
		int level, hp, spotions, maxhp, pokeballs, pokeballcount, savedCurrentPokemonm, xp, id, fez;

		ifstream file("save.dat");
		if (file.is_open())
		{
			while (file >> name >> gender >> language >> fez >> id >> pokemon >> type >> level >> hp >> maxhp >> xp >> spotions >> pokeballs >> pokeballcount >> savedCurrentPokemonm)
			{
				playerName = name;
				playerGender = gender;
				playerLanguage = language;
				fezIntro = fez;
				myID = id;
				currentPKM = pokemon;
				pkmType = type;
				myLvl = level;
				myHP = hp;
				maxHP = maxhp;
				myExp = xp;
				potions = spotions;
				pokeBalls = pokeballs;
				pokeCount = pokeballcount;
				savedCurrentPokemon = savedCurrentPokemonm;

				waitAndClear();

				if (playerLanguage == "EN")
				{
					cout << "***************************************************" << endl;
					cout << "*                                                 *" << endl;
					cout << "*              Welcome back, " << playerName << "!           *" << endl;
					cout << "*  Hold on, we're preparing the battles for you!  *" << endl;
					cout << "*                                                 *" << endl;
					cout << "***************************************************" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "*****************************************************" << endl;
					cout << "*                                                   *" << endl;
					cout << "*          Bem-Vindo de volta, " << playerName << "!       *" << endl;
					cout << "*                                                   *" << endl;
					cout << "*  Espera, estamos a preparar as batalhas para ti!  *" << endl;
					cout << "*                                                   *" << endl;
					cout << "*****************************************************" << endl;
				}

				system("pause");
				waitAndClear();

				file.close();
			}
			createBattle();
		}
	}
	else
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << "You don't have any save files!" << endl << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "N�o tens nenhuma grava��o!" << endl;
		}
		system("pause");
		waitAndClear();
		titleScreen();
	}
}

								////////////////////////////////////\\
								//									\\
								//		  SAVE GAME FUNCTION		\\
								//									\\
								//////////////////////////////////////

void saveGame()
{
	if (exitOption == 1)
	{
		ofstream pokemons("pokemons.dat", ios::app);

		if (pokemons.is_open())
		{
			// Make a condition to see if my current pokemon actually exists, if not, saves, if yes errors!
			// Save initial pokemon to pokemons list
			if (savedCurrentPokemon != 1)
			{
				pokemons << "\n";
				pokemons << currentPKM << " ";
				pokemons << pkmType << " ";
				pokemons << myLvl << " ";
				pokemons << myHP << " ";
				pokemons << maxHP << " ";
				pokemons << myExp;
				savedCurrentPokemon = 1;
			}
		}
	}

	// Creates the save.dat file
	ofstream save("save.dat");

	// If the file opens
	if (save.is_open())
	{
		// Save variables in one line separated by spaces
		save << playerName << "\n";
		save << playerGender << "\n";
		save << playerLanguage << "\n";
		save << fezIntro << "\n";
		save << myID << "\n";
		save << currentPKM << "\n";
		save << pkmType << "\n";
		save << myLvl << "\n";
		save << myHP << "\n";
		save << maxHP << "\n";
		save << myExp << "\n";
		save << potions << "\n";
		save << pokeBalls << "\n";
		save << pokeCount << "\n";
		save << savedCurrentPokemon;
	}
	// Closes the file
	save.close();
}

								////////////////////////////////////\\
								//									\\
								//		CREATE BATTLE FUNCTION		\\
								//									\\
								//////////////////////////////////////

void createBattle()
{
	attacked = 0;
	string blablabla;
	string blebleble;

	// As of 0.1b the pokemon is chosen at the start of the game
	//randomMyPokemon();
	randomEnemyPokemon();

	if (playerLanguage == "EN")
	{
		cout << "********************************************" << endl;
		cout << "*                 FIGHT MENU               *" << endl;
		cout << "********************************************" << endl;
		cout << "*                                          *" << endl;
		cout << "* PkMn Trainer sent out a ";
		if (enemyType == "FIRE")
		{
			//12 - Red
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << enemyPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (enemyType == "GRASS")
		{
			//10 - Green
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << enemyPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}

		else if (enemyType == "WATER")
		{
			//11 - Blue
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
			cout << enemyPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else
		{
			cout << enemyPKM;
		}
		cout << "!" << endl;
		Sleep(2000);
		cout << "* Go! ";
		
		if (pkmType == "FIRE")
		{
			//12 - Red
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (pkmType == "GRASS")
		{
			//10 - Green
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
	
		else if (pkmType == "WATER")
		{
			//11 - Blue
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		cout << " !" << endl;
		cout << "*                                          *" << endl;
		cout << "********************************************" << endl << endl;
	}
	else if (playerLanguage == "PT")
	{
		cout << "********************************************" << endl;
		cout << "*                ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "MENU DE LUTA";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "              *" << endl;
		cout << "********************************************" << endl;
		cout << "*                                          *" << endl;
		cout << "* Treinador PkMn enviou um ";
		if (enemyType == "FIRE")
		{
			//12 - Red
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << enemyPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (enemyType == "GRASS")
		{
			//10 - Green
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << enemyPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}

		else if (enemyType == "WATER")
		{
			//11 - Blue
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
			cout << enemyPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else
		{
			cout << enemyPKM;
		}
		cout << "!" << endl;
		Sleep(2000);
		cout << "* Vai! ";

		if (pkmType == "FIRE")
		{
			//12 - Red
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (pkmType == "GRASS")
		{
			//10 - Green
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}

		else if (pkmType == "WATER")
		{
			//11 - Blue
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		cout << " !" << endl;
		cout << "*                                          *" << endl;
		cout << "********************************************" << endl << endl;
	}
	
	system("pause");
	waitAndClear();

	displayBattle(enemyHP);
}

void displayPokemonsUI(int enemyHP)
{
	string blablabla;
	string blebleble;
	string bliblibli;

	if (enemyType == "FIRE")
	{
		//12 - Red
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << enemyPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else if (enemyType == "GRASS")
	{
		//10 - Green
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << enemyPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}

	else if (enemyType == "WATER")
	{
		//11 - Blue
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
		cout << enemyPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else
	{
		cout << enemyPKM;
	}
	cout << "\t" << " Lv" << enemyLvl << endl;
	blablabla = hpGUI(enemyHP);
	cout << "\t";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
	cout << "HP";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
	cout << blablabla;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	if (enemyHP <= 0)
		cout << "Dead";
	cout << endl << endl << endl;

	if (pkmType == "FIRE")
	{
		cout << "\t\t\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " Lv" << myLvl << endl;
		blebleble = hpGUI(myHP);
		cout << "\t\t\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "HP";
		if (myLvl == 5 && myHP >= 14)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl;
		cout << "\t\t\t" << "     ";
		if (myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (myHP <= (maxHP / 3) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "/";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << maxHP << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		bliblibli = xpGUI(myExp);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "\t\t\t" << "     ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "EXP";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << bliblibli;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl << endl;
	}
	else if (pkmType == "GRASS")
	{
		cout << "\t\t\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " Lv" << myLvl << endl;
		blebleble = hpGUI(myHP);
		cout << "\t\t\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "HP";
		if (myLvl == 5 && myHP >= 14)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl;
		cout << "\t\t\t" << "     ";
		if (myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (myHP <= (maxHP / 3) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "/";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << maxHP << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		bliblibli = xpGUI(myExp);
		cout << "\t\t\t" << "     ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "EXP";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << bliblibli;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl << endl;
	}
	else if (pkmType == "WATER")
	{
		cout << "\t\t\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
		cout << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " Lv" << myLvl << endl;
		blebleble = hpGUI(myHP);
		cout << "\t\t\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "HP";
		if (myLvl == 5 && myHP >= 14)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << blebleble;
		}
		else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << blebleble;
		}
		else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << blebleble;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl;
		cout << "\t\t\t" << "     ";
		if (myHP >= (maxHP / 3 * 2))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		else if (myHP <= (maxHP / 3) && myHP >= 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << myHP;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "/";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << maxHP << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		bliblibli = xpGUI(myExp);
		cout << "\t\t\t" << "     ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "EXP";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << bliblibli;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl << endl;
	}
}

								////////////////////////////////////\\
								//									\\
								//		DISPLAY BATTLE FUNCTION		\\
								//									\\
								//////////////////////////////////////

void displayBattle(int enemyHP)
{
	int escolhaMenuLuta = 0;

	string blablabla;
	string blebleble;
	string bliblibli;

	if (enemyType == "FIRE")
	{
		//12 - Red
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << enemyPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else if (enemyType == "GRASS")
	{
		//10 - Green
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << enemyPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}

	else if (enemyType == "WATER")
	{
		//11 - Blue
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
		cout << enemyPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else
	{
		cout << enemyPKM;
	}
	cout << "\t" << " Lv" << enemyLvl << endl;
	blablabla = hpGUI(enemyHP);
	cout << "\t";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
	cout << "HP";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
	cout << blablabla;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	if (enemyHP <= 0)
		cout << "Dead";
	cout << endl << endl << endl << endl;

	if (playerLanguage == "EN")
	{
		if (pkmType == "FIRE")
		{
			cout << "\t\t\t";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << " Lv" << myLvl << endl;
			blebleble = hpGUI(myHP);
			cout << "\t\t\t";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "HP";
			if (myLvl == 5 && myHP >= 14)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << endl;
			cout << "\t\t\t" << "     ";
			if (myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << maxHP << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			bliblibli = xpGUI(myExp);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "\t\t\t" << "     ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "EXP";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << bliblibli;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << endl << endl;

			cout << "What will " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << " do?" << endl;
		}
		else if (pkmType == "GRASS")
		{
			cout << "\t\t\t";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << " Lv" << myLvl << endl;
			blebleble = hpGUI(myHP);
			cout << "\t\t\t";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "HP";
			if (myLvl == 5 && myHP >= 14)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << endl;
			cout << "\t\t\t" << "     ";
			if (myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << maxHP << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			bliblibli = xpGUI(myExp);
			cout << "\t\t\t" << "     ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "EXP";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << bliblibli;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << endl << endl;

			cout << "What will " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << " do?" << endl;
		}
		else if (pkmType == "WATER")
		{
			cout << "\t\t\t";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << " Lv" << myLvl << endl;
			blebleble = hpGUI(myHP);
			cout << "\t\t\t";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "HP";
			if (myLvl == 5 && myHP >= 14)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << blebleble;
			}
			else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << blebleble;
			}
			else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << blebleble;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << endl;
			cout << "\t\t\t" << "     ";
			if (myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << maxHP << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			bliblibli = xpGUI(myExp);
			cout << "\t\t\t" << "     ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "EXP";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << bliblibli;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << endl << endl;

			cout << "What will " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
			cout << currentPKM;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << " do?" << endl;
		}
	}
	else if (playerLanguage == "PT")
	{
			if (pkmType == "FIRE")
			{
				cout << "\t\t\t";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " Lv" << myLvl << endl;
				blebleble = hpGUI(myHP);
				cout << "\t\t\t";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "HP";
				if (myLvl == 5 && myHP >= 14)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << endl;
				cout << "\t\t\t" << "     ";
				if (myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				else if (myHP <= (maxHP / 3) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << "/";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << maxHP << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				bliblibli = xpGUI(myExp);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "\t\t\t" << "     ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "EXP";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << bliblibli;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << endl << endl;

				cout << "O que vai " << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " fazer?" << endl;
			}
			else if (pkmType == "GRASS")
			{
				cout << "\t\t\t";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " Lv" << myLvl << endl;
				blebleble = hpGUI(myHP);
				cout << "\t\t\t";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "HP";
				if (myLvl == 5 && myHP >= 14)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << endl;
				cout << "\t\t\t" << "     ";
				if (myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				else if (myHP <= (maxHP / 3) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << "/";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << maxHP << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				bliblibli = xpGUI(myExp);
				cout << "\t\t\t" << "     ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "EXP";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << bliblibli;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << endl << endl;

				cout << "O que vai " << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " fazer?" << endl;
			}
			else if (pkmType == "WATER")
			{
				cout << "\t\t\t";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " Lv" << myLvl << endl;
				blebleble = hpGUI(myHP);
				cout << "\t\t\t";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "HP";
				if (myLvl == 5 && myHP >= 14)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 5 && myHP <= 13 && myHP >= 7)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 5 && myHP <= 6 && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 6 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 6 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 6 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 7 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 7 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 7 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 8 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 8 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 8 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 9 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 9 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 9 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 10 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 10 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 10 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 11 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 11 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 11 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 12 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 12 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 12 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 13 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 13 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 13 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 14 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 14 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 14 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				if (myLvl == 15 && myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << blebleble;
				}
				else if (myLvl == 15 && myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3 * 1))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << blebleble;
				}
				else if (myLvl == 15 && myHP <= (maxHP / 3 * 1) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << blebleble;
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << endl;
				cout << "\t\t\t" << "     ";
				if (myHP >= (maxHP / 3 * 2))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				else if (myHP <= (maxHP / 3) && myHP >= 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
					cout << myHP;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << "/";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << maxHP << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				bliblibli = xpGUI(myExp);
				cout << "\t\t\t" << "     ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "EXP";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << bliblibli;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << endl << endl;

				cout << "O que vai " << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " fazer?" << endl;
			}
		}	
	if (playerLanguage == "EN")
	{
		cout << "\t\t" << "1 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "FIGHT";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "2 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "BAG";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl;
		cout << "\t\t" << "3 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "POKEMON";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "4 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "RUN" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t\t" << "5 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "STATS";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "0 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "EXIT GAME" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t\tChoose: ";
	}
	else if (playerLanguage == "PT")
	{
		cout << "\t\t" << "1 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "LUTAR";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "2 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "MALA";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl;
		cout << "\t\t" << "3 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "POKEMON";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "4 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "FUGIR" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t\t" << "5 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "STATS";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "0 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "SAIR DO JOGO" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t\tO que vais fazer?: ";
	}
	
	cin >> escolhaMenuLuta;

	if (escolhaMenuLuta == 1) // FIGHT MENU
	{
		trigger = true;
		triggerNumber = 1;

		fight();
	}
	else if (escolhaMenuLuta == 2) // BAG MENU
	{
		trigger = true;
		triggerNumber = 2;

		bagMenuOption();
	}
	else if (escolhaMenuLuta == 3) // POKEMON MENU
	{
		trigger = true;
		triggerNumber = 3;

		waitAndClear();

		pokemonMenuOption();
	}
	else if (escolhaMenuLuta == 4) // RUN AWAY OPTION
	{
		trigger = true;
		triggerNumber = 4;

		runAway();
	}
	else if (escolhaMenuLuta == 5) // STATS MENU
	{
		waitAndClear();

		if (playerLanguage == "EN")
		{
			cout << "************************************************" << endl;
			cout << "*                  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << "YOUR STATS";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "                  *" << endl;
			cout << "************************************************" << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Name : ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << playerName << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Gender: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			if (playerGender == "Boy" || "Rapaz")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << playerGender;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (playerGender == "Girl" || "Rapariga")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 29);
				cout << playerGender;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Pokemon : ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			if (pkmType == "FIRE")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "GRASS")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "WATER")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Pokemon Type: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			if (pkmType == "FIRE")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << pkmType;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "GRASS")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << pkmType;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "WATER")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
				cout << pkmType;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Pokemon Level: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << myLvl << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Pokemon HP: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			if (myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Pokemon EXP: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << myExp;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Potions: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << potions << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "Your Poke Balls: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << pokeBalls;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "." << endl;
			cout << "************************************************" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "************************************************" << endl;
			cout << "*             ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << "As tuas Estat�sticas";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "             *" << endl;
			cout << "************************************************" << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "O teu nome: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << playerName << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "O teu g�nero: ";
			if (playerGender == "Boy" || "Rapaz")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << playerGender;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (playerGender == "Girl" || "Rapariga")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 29);
				cout << playerGender;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "O teu Pok�mon actual: ";
			if (pkmType == "FIRE")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "GRASS")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "WATER")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
				cout << currentPKM;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "O tipo do teu Pok�mon: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			if (pkmType == "FIRE")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << pkmType;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "GRASS")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << pkmType;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			if (pkmType == "WATER")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
				cout << pkmType;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "O n�vel do teu Pok�mon: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << myLvl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "A Vida do teu Pok�mon: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			if (myHP >= (maxHP / 3 * 2))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3 * 2 - 1) && myHP >= (maxHP / 3))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (myHP <= (maxHP / 3) && myHP >= 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << myHP;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "A Experi�ncia do teu Pok�mon: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << myExp;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "N�mero de po��es dispon�veis: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << potions << "." << endl;
			cout << "*  ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "N�mero de pok�bolas dispon�veis: ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
			cout << pokeBalls;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "." << endl;
			cout << "************************************************" << endl;
		}

		system("pause");

		waitAndClear();
		displayBattle(enemyHP);
	}
	else if (escolhaMenuLuta == 0)
	{
		waitAndClear();

		if (playerLanguage == "EN")
		{
			cout << "****************************************" << endl;
			cout << "*                                      *" << endl;
			cout << "*    Are you sure you want to exit?    *" << endl;
			cout << "*                                      *" << endl;
			cout << "*        1 - YES       2 - NO          *" << endl;
			cout << "*                                      *" << endl;
			cout << "****************************************" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "****************************************" << endl;
			cout << "*                                      *" << endl;
			cout << "*    Tens a certeza que queres sair?   *" << endl;
			cout << "*                                      *" << endl;
			cout << "*        1 - SIM      2 - N�O          *" << endl;
			cout << "*                                      *" << endl;
			cout << "****************************************" << endl;
		}
		
		int exitChoice = 0;

		cin >> exitChoice;

		if (exitChoice == 1)
		{
			waitAndClear();

			if (playerLanguage == "EN")
			{
				cout << "****************************************" << endl;
				cout << "*                                      *" << endl;
				cout << "*  Do you want to save your progress?  *" << endl;
				cout << "*                                      *" << endl;
				cout << "*        1 - YES       2 - NO          *" << endl;
				cout << "*                                      *" << endl;
				cout << "****************************************" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "****************************************" << endl;
				cout << "*                                      *" << endl;
				cout << "*    Queres guardar o teu progresso?   *" << endl;
				cout << "*                                      *" << endl;
				cout << "*        1 - SIM      2 - N�O          *" << endl;
				cout << "*                                      *" << endl;
				cout << "****************************************" << endl;
			}
			
			int saveChoice = 0;

			cin >> saveChoice;

			if (saveChoice == 1)
			{
				exitOption = 1;
				saveGame();

				waitAndClear();

				if (playerLanguage == "EN")
				{
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*         GAME SAVED SUCCESSFULY       *" << endl;
					cout << "*                                      *" << endl;
					cout << "*         THANK YOU FOR PLAYING!       *" << endl;
					cout << "*                                      *" << endl;
					cout << "****************************************" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*       JOGO GUARDADO COM SUCESSO      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*         OBRIGADO POR JOGARES!        *" << endl;
					cout << "*                                      *" << endl;
					cout << "****************************************" << endl;
				}

				system("pause");
				waitAndClear();

				exitGame();
			}
			else if (saveChoice == 2)
			{
				waitAndClear();

				if (playerLanguage == "EN")
				{
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*         THANK YOU FOR PLAYING!       *" << endl;
					cout << "*                                      *" << endl;
					cout << "****************************************" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*         OBRIGADO POR JOGARES!        *" << endl;
					cout << "*                                      *" << endl;
					cout << "****************************************" << endl;
				}
				

				system("pause");
				waitAndClear();

				exitGame();
			}
		}
		else if (exitChoice == 2)
		{
			waitAndClear();
			displayBattle(enemyHP);
		}
	}
	}

								////////////////////////////////////\\
								//									\\
								//		  END BATTLE FUNCTION		\\
								//									\\
								//////////////////////////////////////

void endBattleDisplay()
{
	waitAndClear();
	int escolhaMenuLuta = 0;

	string blablabla;
	string blebleble;

	if (playerLanguage == "EN")
	{
		cout << "****************************************" << endl;
		cout << "*                                      *" << endl;
		cout << "*        ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Post Screen Fight Stats       ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "*" << endl;
		cout << "*                                      *" << endl;
		cout << "****************************************" << endl << endl;
	}
	else if (playerLanguage == "PT")
	{
		cout << "****************************************" << endl;
		cout << "*       ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Estat�sticas P�s-Combate       ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "*" << endl;
		cout << "****************************************" << endl << endl;
	}
	

	if (pkmType == "FIRE")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "\t\t\t" << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	if (pkmType == "GRASS")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "\t\t\t" << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	if (pkmType == "WATER")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
		cout << "\t\t\t" << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	cout << " Lv" << myLvl << endl;
	blebleble = hpGUI(myHP);
	cout << "\t\t\t" << "HP" << blebleble;
	cout << endl;
	cout << "\t\t\t" << "     " << myHP << "/" << maxHP;
	cout << endl << endl;
	
	if (playerLanguage == "EN")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "PkMn Trainer ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "was ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "defeated!" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "****************************************" << endl << endl;
	}
	else if (playerLanguage == "PT")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Treinador PkMn ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "foi ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "derrotado!" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "****************************************" << endl << endl;
	}

	system("pause");
	waitAndClear();

	exp();

	attacked = 0;

	if (playerLanguage == "EN")
	{
		cout << "****************************************" << endl;
		cout << "*             ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "MENU DE LUTA";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "             *" << endl;
		cout << "****************************************" << endl << endl;
		cout << "Searching for more Pok�mon Trainers!" << endl << endl;
	}
	else if (playerLanguage == "PT")
	{
		cout << "****************************************" << endl;
		cout << "*             ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "MENU DE LUTA";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "             *" << endl;
		cout << "****************************************" << endl << endl;
		cout << "A Procurar por mais treinadores Pok�mon!" << endl << endl;
	}

	system("pause");
	waitAndClear();
	createBattle();
}

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											MENU OPTIONS										   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

								////////////////////////////////////\\
								//									\\
								//			FIGHT OPTION			\\
								//									\\
								//////////////////////////////////////

// FIGHT
void fight()
{
	while (enemyHP >= 0 && myHP >= 0)
	{
		waitAndClear();
		displayPokemonsUI(enemyHP);
		int chooseAttack;
		// SELECT WICH COLOR TO MAKE THIS MENU HERE
		// LightGreen 
		if (playerLanguage == "EN")
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "**********************************" << endl;
			cout << "*           ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "Moves List           ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "*" << endl;
			cout << "**********************************" << endl;
		}
		else if (playerLanguage == "PT")
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "**********************************" << endl;
			cout << "*        ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "Lista de Ataques        ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "*" << endl;
			cout << "**********************************" << endl;
		}
		
		// i will display some moves here.. EXAMPLE:

		cout << "1 - ";
		// Yellow
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
		cout << "Tackle";
		// LightGreen
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "2 - ";
		// Red
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "NONE" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "3 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "NONE";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "\t" << "4 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "NONE";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);

		if (playerLanguage == "EN")
		{
			cout << "What ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "Attack ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "do you choose ? " << endl;
			cout << "Choose: ";
		}
		else if (playerLanguage == "PT")
		{
			cout << "Que ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
			cout << "Ataque ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			cout << "� que vais escolher ? " << endl;
			cout << "Escolhe: ";
		}
		
		cin >> chooseAttack;

		if (chooseAttack == 1)
		{
			waitAndClear();

			if (playerLanguage == "EN")
			{
				cout << "****************************************" << endl;
				cout << "*            ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << "Your Attack Stats         ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << "*" << endl;
				cout << "****************************************" << endl << endl;
				cout << "You chose ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << "Tackle!" << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				randomMyAttacks();
				cout << "Causing ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << myDamage;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " Damage!" << endl << endl;

				if (myDamage >= enemyHP && attacked == 0)
				{
					cout << "A critical hit!" << endl << endl;
				}
			}
			else if (playerLanguage == "PT")
			{
				cout << "****************************************" << endl;
				cout << "*      ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << "Estat�sticas do teu ataque      ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << "*" << endl;
				cout << "****************************************" << endl << endl;
				cout << "Escolheste ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << "Tackle!" << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				randomMyAttacks();
				cout << "Causando ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
				cout << myDamage;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				cout << " de Dano!" << endl << endl;

				if (myDamage >= enemyHP && attacked == 0)
				{
					cout << "Um ataque cr�tico!" << endl << endl;
				}
			}
			system("pause");

			attacked = 1;
			
			enemyHP -= myDamage;
			if (enemyHP <= 0)
			{
				endBattleDisplay();
			}
			enemyAttack();
		}
		else if (chooseAttack == 2)
		{
			waitAndClear();
			fight();
		}
		else if (chooseAttack == 3)
		{
			waitAndClear();
			fight();
		}
		else if (chooseAttack == 4)
		{
			waitAndClear();
			fight();
		}
		trigger = false;
		triggerNumber = 0;
		// Now i have to show the Same Battle Interface.. How?..
		// Code here.
		if (myHP <= 0)
		{
			if (pokeCount >= 1)
			{
				waitAndClear();

				if (playerLanguage == "EN")
				{
					cout << "***************************************************" << endl;
					cout << "*                                                 *" << endl;
					cout << "*       It looks like you have " << pokeCount << " Pok�mons!      *" << endl;
					cout << "*                                                 *" << endl;
					cout << "*  1 - Choose Pok�mon  2 - Go to Pok�mon Center!  *" << endl;
					cout << "*                                                 *" << endl;
					cout << "***************************************************" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "***********************************************************" << endl;
					cout << "*                                                         *" << endl;
					cout << "*           Parece que tens " << pokeCount << " Pok�mons!          *" << endl;
					cout << "*                                                         *" << endl;
					cout << "*  1 - Escolher Pok�mon  2 - Ir Para Centro de Pok�mons!  *" << endl;
					cout << "*                                                         *" << endl;
					cout << "***********************************************************" << endl;
				}

				int dead;
				cin >> dead;

				if (dead == 1)
				{
					waitAndClear();
					pokemonMenuOption();
				}
				else if (dead == 2)
				{
					pokeCenter();
				}
				else
				{
					waitAndClear();
					if (playerLanguage == "EN")
					{
						cout << "Choose from the options provided!" << endl;
					}
					else if (playerLanguage == "PT")
					{
						cout << "Escolhe uma das op��es dispon�veis!" << endl;
					}
				}
			}
		}
		displayBattle(enemyHP);
		fight();
	}

	if (enemyHP <= 0)
	{
		endBattleDisplay();
	}
	else if (myHP <= 0)
	{
		if (pokeCount >= 1)
		{
			waitAndClear();

			if (playerLanguage == "EN")
			{
				cout << "***************************************************" << endl;
				cout << "*                                                 *" << endl;
				cout << "*       It looks like you have " << pokeCount << " Pok�mons!      *" << endl;
				cout << "*                                                 *" << endl;
				cout << "*  1 - Choose Pok�mon  2 - Go to Pok�mon Center!  *" << endl;
				cout << "*                                                 *" << endl;
				cout << "***************************************************" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "***********************************************************" << endl;
				cout << "*                                                         *" << endl;
				cout << "*           Parece que tens " << pokeCount << " Pok�mons!          *" << endl;
				cout << "*                                                         *" << endl;
				cout << "*  1 - Escolher Pok�mon  2 - Ir Para Centro de Pok�mons!  *" << endl;
				cout << "*                                                         *" << endl;
				cout << "***********************************************************" << endl;
			}

			int dead;
			cin >> dead;

			if (dead == 1)
			{
				waitAndClear();
				pokemonMenuOption();
			}
			else if (dead == 2)
			{
				pokeCenter();
			}
			else
			{
				waitAndClear();
				if (playerLanguage == "EN")
				{
					cout << "Choose from the options provided!" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "Escolhe uma das op��es dispon�veis!" << endl;
				}
			}
		}
		else
		{
			pokeCenter();
		}
	}
	waitAndClear();
	createBattle();
}

								////////////////////////////////////\\
								//									\\
								//	     ENEMY ATTACK OPTION		\\
								//									\\
								//////////////////////////////////////

void enemyAttack()
{
	/*
	enemyAttacks
	enemyDamage
	*/
	randomEnemyAttacks();
	waitAndClear();
	if (playerLanguage == "EN")
	{
		cout << "****************************************" << endl;
		cout << "*           ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Enemy Attack Stats         ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "*" << endl;
		cout << "****************************************" << endl << endl;
		cout << "Enemy Pokemon ";
	}
	else if (playerLanguage == "PT")
	{
		cout << "****************************************" << endl;
		cout << "*   ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Estat�sticas de luta do inimigo    ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "*" << endl;
		cout << "****************************************" << endl << endl;
		cout << "O Pok�mon inimigo ";
	}
	if (pkmType == "FIRE")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << enemyPKM << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else if (pkmType == "GRASS")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << enemyPKM << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else if (pkmType == "WATER")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
		cout << enemyPKM << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else
	{
		cout << enemyPKM << endl;
	}

	if (playerLanguage == "EN")
	{
		cout << "used ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << enemyAttacks;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " on you " << endl;
		cout << "causing ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << enemyDamage;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " damage!" << endl << endl;

		if (enemyDamage > 10)
		{
			if (enemyDamage >= enemyHP)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "A critical hit!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
		}
	}
	else if (playerLanguage == "PT")
	{
		cout << "usou ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << enemyAttacks;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " em ti " << endl;
		cout << "causando ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << enemyDamage;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " de dano!" << endl << endl;

		if (enemyDamage > 10)
		{
			if (enemyDamage >= enemyHP)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "Um ataque cr�tico!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
		}
	}
	

	

	system("pause");

	myHP -= enemyDamage;

	if (myHP <= 0)
	{
		if (pokeCount >= 1)
		{
			waitAndClear();

			if (playerLanguage == "EN")
			{
				cout << "***************************************************" << endl;
				cout << "*                                                 *" << endl;
				cout << "*       It looks like you have " << pokeCount << " Pok�mons!      *" << endl;
				cout << "*                                                 *" << endl;
				cout << "*  1 - Choose Pok�mon  2 - Go to Pok�mon Center!  *" << endl;
				cout << "*                                                 *" << endl;
				cout << "***************************************************" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "***********************************************************" << endl;
				cout << "*                                                         *" << endl;
				cout << "*           Parece que tens " << pokeCount << " Pok�mons!          *" << endl;
				cout << "*                                                         *" << endl;
				cout << "*  1 - Escolher Pok�mon  2 - Ir Para Centro de Pok�mons!  *" << endl;
				cout << "*                                                         *" << endl;
				cout << "***********************************************************" << endl;
			}

			int dead;
			cin >> dead;

			if (dead == 1)
			{
				waitAndClear();
				pokemonMenuOption();
			}
			else if (dead == 2)
			{
				pokeCenter();
			}
			else
			{
				waitAndClear();
				if (playerLanguage == "EN")
				{
					cout << "Choose from the options provided!" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "Escolhe uma das op��es dispon�veis!" << endl;
				}
			}
		}
		else
		{
			pokeCenter();
		}
	}
	waitAndClear();
	displayBattle(enemyHP);
}


								////////////////////////////////////\\
								//									\\
								//			BAG MENU OPTION			\\
								//									\\
								//////////////////////////////////////

void bagMenuOption()
{
	// CREATE A MENU OF ITEMS TO CHOOSE FROM (EX: POTIONS, POKEBALLS?, ETC.)
	waitAndClear();

	if (playerLanguage == "EN")
	{
		cout << "************************" << endl;
		cout << "*       ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "BAG MENU";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "       *" << endl;
		cout << "************************" << endl;
		cout << "1 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Potions:";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " " << potions << endl;
		cout << "2 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Pok�Balls: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << pokeBalls << endl << endl;
		cout << "0 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "Go Back" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);

		cout << "What do you want to choose? ";
	}
	else if (playerLanguage == "PT")
	{
		cout << "************************" << endl;
		cout << "*     ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Men� da Mala";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "     *" << endl;
		cout << "************************" << endl;
		cout << "* 1 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Po��es:";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " " << potions << endl;
		cout << "* 2 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Pok�bolas: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << pokeBalls << endl;
		cout << "* 0 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << "Voltar atr�s" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "************************" << endl << endl;

		cout << "O que queres fazer?: ";
	}
	
	int chooseBag = 0;

	cin >> chooseBag;

	if (chooseBag == 1)
	{
		if (potions >= 1 && myHP < maxHP)
		{
			cout << endl;
			if (playerLanguage == "EN")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "Restoring your " << currentPKM << " HP by " << potionHPAmount << " points." << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (playerLanguage == "PT")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "Restaurando a vida de " << currentPKM << " por " << potionHPAmount << " pontos." << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			
			myHP += potionHPAmount;
			if (myHP > maxHP)
				myHP = maxHP;
			potions = potions--;

			system("pause");
			waitAndClear();

			enemyAttack();
		}
		else if (potions >= 1 && myHP == maxHP)
		{
			cout << endl;
			if (playerLanguage == "EN")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "Your pok�mon health is maxed out!" << endl;
				cout << "You don't need to take a Potion!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (playerLanguage == "PT")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "A vida do teu pok�mon est� no m�ximo!" << endl;
				cout << "N�o precisas de tomar uma po��o!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}

			system("pause");
			waitAndClear();

			bagMenuOption();
		}
		else if (potions == 0)
		{
			cout << endl;
			if (playerLanguage == "EN")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "You don't have any Potions!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (playerLanguage == "PT")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "N�o tens nenhuma po��o!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}

			system("pause");
			waitAndClear();

			bagMenuOption();
		}
	}
	else if (chooseBag == 2)
	{
		if (pokeBalls >= 1)
		{
			waitAndClear();
			if (playerLanguage == "EN")
			{
				cout << playerName << " used" << endl;
				cout << "one Pok� Ball!" << endl << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << playerName << " usou" << endl;
				cout << "uma Pok�bola!" << endl << endl;
			}
			

			system("pause");
			waitAndClear();

			if (playerLanguage == "EN")
			{
				cout << enemyPKM << " was" << endl;
				cout << "caught!" << endl << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << enemyPKM << " foi" << endl;
				cout << "apanhado!" << endl << endl;
			}
			
			pokeCount = pokeCount + 1;

			system("pause");
			waitAndClear();

			// Make here the code to save current stats of enemy pokemon and save it to a file
			// So then the stats of the catched pokemon are correct
			createBattle();
		}
		else
		{
			if (playerLanguage == "EN")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "You don't have any Poke Balls!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			else if (playerLanguage == "PT")
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 30);
				cout << "N�o tens nenhuma pok�bola!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
			}
			system("pause");
			waitAndClear();
			bagMenuOption();
		}
	}
	else if (chooseBag == 0)
	{
		cout << endl;
		if (playerLanguage == "EN")
		{
			cout << "Leaving the bag.." << endl << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "Saindo da mala.." << endl << endl;
		}
		system("pause");
		waitAndClear();
		displayBattle(enemyHP);
	}
}

void randomMyPokemon()
{
}

								////////////////////////////////////\\
								//									\\
								//			POKEMON OPTION			\\
								//									\\
								//////////////////////////////////////

void pokemonMenuOption()
{
	// OPTION TO CATCH POKEMON
	if (playerLanguage == "EN")
	{
		cout << "*****************************************" << endl;
		cout << "*              ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "POK�MON MENU";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "              *" << endl;
		cout << "*****************************************" << endl;
		cout << "1 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Catch Pok�mon ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "(requires 1 Pok� Ball)" << endl;
		cout << "2 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Pok�mons" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "****************************************" << endl << endl;

		cout << "Choose: ";
	}
	else if (playerLanguage == "PT")
	{
		cout << "*****************************************" << endl;
		cout << "*              ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "MEN� POK�MON";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "              *" << endl;
		cout << "*****************************************" << endl;
		cout << "1 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Apanhar o Pok�mon ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "(requer 1 Pok�bola)" << endl;
		cout << "2 - ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Pok�mons" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "****************************************" << endl << endl;

		cout << "Escolhe: ";
	}
	
	int pokemonMenuChoose;
	cin >> pokemonMenuChoose;

	if (pokemonMenuChoose == 1)
	{
		if (pokeBalls >= 1)
		{
			waitAndClear();
			if (playerLanguage == "EN")
			{
				cout << playerName << " used" << endl;
				cout << "one ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << "Poke Ball!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				system("pause");
				waitAndClear();
				cout << enemyPKM << " was" << endl;
				cout << "caught!" << endl << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << playerName << " usou" << endl;
				cout << "uma ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
				cout << "Pok�bola!" << endl << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
				system("pause");
				waitAndClear();
				cout << enemyPKM << " foi" << endl;
				cout << "apanhado!" << endl << endl;
			}

			system("pause");
			waitAndClear();

			// Make here the code to save current stats of enemy pokemon and save it to a file
			// So then the stats of the catched pokemon are correct
			// Creates the pokemons.dat file
			ofstream pokemons("pokemons.dat");

			// If the file opens
			if (pokemons.is_open())
			{
				// Save variables in one line separated by spaces
				pokemons << enemyPKM << " ";
				pokemons << enemyType << " ";
				pokemons << enemyLvl << " ";
				pokemons << enemyHP << " ";
			}
			// Closes the file
			pokemons.close();
			createBattle();
		}
		else
		{
			if (playerLanguage == "EN")
			{
				cout << "You don't have any Pok� Balls!" << endl << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "N�o tens nenhuma pok�bola!" << endl << endl;
			}
			system("pause");
			waitAndClear();
			pokemonMenuOption();
		}
	}
	else if (pokemonMenuChoose == 2)
	{
		waitAndClear();
		
		string name, tmpPkm, type, tmpType;
		int level, tmpLvl, tmpHp, hp, num = 0;

		if (playerLanguage == "EN")
		{
			cout << "Pok�mons Available: " << endl << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "Pok�mons Dispon�veis: " << endl << endl;
		}

		ifstream file("pokemons.dat");
		if (file.is_open())
		{
			while (file >> name >> type >> level >> hp)
			{
				tmpPkm = name;
				tmpType = type;
				tmpLvl = level;
				tmpHp = hp;

				cout << num << " - " << tmpPkm << endl;
				num++;
			}
			
			if (playerLanguage == "EN")
			{
				cout << "2 - Return to Main Menu" << endl << endl;
				cout << "Choice: ";
				waitAndClear();
			}
			else if (playerLanguage == "PT")
			{
				cout << "2 - Voltar para o men� principal" << endl << endl;
				cout << "Escolhe: ";
				waitAndClear();
			}

			int chc;
			cin >> chc;

			// First Pokemon
			if (chc == 0 && tmpHp >= 1)
			{
				waitAndClear();
				if (playerLanguage == "EN")
				{
					cout << "Choosing " << tmpPkm << " .." << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "Escolhendo " << tmpPkm << " .." << endl;
				}
				currentPKM = tmpPkm;
				pkmType = tmpType;
				myLvl = tmpLvl;
				myHP = tmpHp;
				waitAndClear();
			}
			else if (chc == 0 && tmpHp <= 0)
			{
				cout << endl;
				if (playerLanguage == "EN")
				{
					cout << "This pok�mon is dead!" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "Este pok�mon est� morto!" << endl;
				}
			}
			// Second Pokemon
			if (chc == 1 && tmpHp >= 1 && pokeCount > 1)
			{
				waitAndClear();
				if (playerLanguage == "EN")
				{
					cout << "Choosing " << tmpPkm << " .." << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "Escolhendo " << tmpPkm << " .." << endl;
				}
				currentPKM = tmpPkm;
				pkmType = tmpType;
				myLvl = tmpLvl;
				myHP = tmpHp;
				waitAndClear();
			}
			else if (chc == 1 && tmpHp <= 0 && pokeCount > 1)
			{
				cout << endl;
				if (playerLanguage == "EN")
				{
					cout << "This pok�mon is dead!" << endl;
				}
				else if (playerLanguage == "PT")
				{
					cout << "Este pok�mon est� morto!" << endl;
				}
			}
			if (chc == 2)
			{
				displayBattle(enemyHP);
			}
		}
		pokemonMenuOption();
	}
	// DISPLAY LIST OF MY POKEMONS HERE TO CHOOSE FROM
}

								////////////////////////////////////\\
								//									\\
								//			RUN AWAY OPTION			\\
								//									\\
								//////////////////////////////////////

void runAway()
{
	if (myLvl < enemyLvl)
	{
		// I dont want to end the program here.. i want to continue to fight the same enemy.. :/
		// but this shit ends the game -.-'
		// End this shit you lazy bastard -.-' xD
		// DO SOMETHING I DON'T KNOW WHAT xD
		cout << endl;
		if (playerLanguage == "EN")
		{
			cout << "\t\tCan't Escape!" << endl << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "\t\tN�o podes escapar!" << endl << endl;
		}
		system("pause");
		waitAndClear();
		displayBattle(enemyHP);
	}
	else
	{
		cout << endl;
		if (playerLanguage == "EN")
		{
			cout << "\t\tYou got away safely!" << endl << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "\t\tConseguiste fugir!" << endl << endl;
		}
		system("pause");
		waitAndClear();
		// Display another battle
		createBattle();
		// Set triggers back to default
		trigger = false;
		triggerNumber = 0;
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//											END	MENU OPTIONS									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//										MISCELANEOUS FUNCTIONS									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////

								////////////////////////////////////\\
								//									\\
								//	  RANDOM MY POKEMON FUNCTION	\\
								//									\\
								//////////////////////////////////////
// As of 0.1b the pokemon is chosen at the start of the game
/*void randomMyPokemon()
{
string myPokemons[] = { "Pikachu", "Gyarados", "Snorlax", "Chikorita", "Totodyle" }; // Cool Pokemons x)

int id;
id = rand() % sizeof(myPokemons) / sizeof(myPokemons[0]);


currentPKM = myPokemons[id];
}*/

								////////////////////////////////////\\
								//									\\
								//	     POKE CENTER FUNCTION	    \\
								//									\\
								//////////////////////////////////////

void pokeCenter()
{
	waitAndClear();

	string blebleble;

	if (playerLanguage == "EN")
	{
		cout << "Your pok�mon died! Let's take him to a Pok�mon Center!" << endl << endl;
	}
	else if (playerLanguage == "PT")
	{
		cout << "O teu pok�mon morreu! Vamos lev�-lo para o Centro de Pok�mons!" << endl << endl;
	}

	cout << "\t\t\t" << currentPKM << " Lv" << myLvl << endl;
	blebleble = hpGUI(myHP);
	cout << "\t\t\t" << "HP" << blebleble;
	cout << endl;
	cout << "\t\t\t" << "     " << myHP << "/" << maxHP;
	cout << endl << endl;

	system("pause");
	waitAndClear();

	if (playerLanguage == "EN")
	{
		cout << "*******************************************" << endl;
		cout << "*              POK�MON CENTER             *" << endl;
		cout << "*******************************************" << endl;
		cout << "Welcome to our POK�MON CENTER!" << endl;
		cout << "*******************************************" << endl << endl;
	}
	else if (playerLanguage == "PT")
	{
		cout << "*******************************************" << endl;
		cout << "*            CENTRO DE POK�MONS           *" << endl;
		cout << "*******************************************" << endl << endl;
		cout << "Bem-vindo ao nosso centro de pok�mons!" << endl;
		cout << "*******************************************" << endl << endl;
	}

	system("pause");
	waitAndClear();
	
	if (playerLanguage == "EN")
	{
		cout << "*******************************************" << endl;
		cout << "*              POK�MON CENTER             *" << endl;
		cout << "*******************************************" << endl;
		cout << "Would you like me to heal your " << currentPKM;
		cout << "?" << endl;
		cout << "********************************************" << endl;
		cout << "            1 - YES      2 - NO            *" << endl;
		cout << "********************************************" << endl << endl;
		cout << "Choose: ";
	}
	else if (playerLanguage == "PT")
	{
		cout << "*******************************************" << endl;
		cout << "*              POK�MON CENTER             *" << endl;
		cout << "*******************************************" << endl;
		cout << "Quer que lhe revivamos o seu " << currentPKM;
		cout << "?" << endl;
		cout << "********************************************" << endl;
		cout << "            1 - SIM     2 - N�O            *" << endl;
		cout << "********************************************" << endl << endl;
		cout << "Escolhe: ";
	}
	int choiceHeal = 0;

	cin >> choiceHeal;

	if (choiceHeal == 1)
	{
		waitAndClear();

		if (playerLanguage == "EN")
		{
			cout << "*******************************************" << endl;
			cout << "*              POK�MON CENTER             *" << endl;
			cout << "*******************************************" << endl;
			cout << "Okay, I'll take your " << currentPKM << endl;
			cout << "for a few seconds." << endl << endl;
			cout << "*******************************************" << endl << endl;
			PlaySound(TEXT("sound/pokecenter.wav"), NULL, SND_FILENAME | SND_ASYNC);
			Sleep(1500);
		}
		else if (playerLanguage == "PT")
		{
			cout << "*******************************************" << endl;
			cout << "*              POK�MON CENTER             *" << endl;
			cout << "*******************************************" << endl;
			cout << "Okay, Vou-lhe levar o seu " << currentPKM << endl;
			cout << "por apenas alguns segundos." << endl << endl;
			cout << "*******************************************" << endl << endl;
			PlaySound(TEXT("sound/pokecenter.wav"), NULL, SND_FILENAME | SND_ASYNC);
			Sleep(1500);
		}

		system("pause");
		PlaySound(TEXT("sound/pokemon.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
		waitAndClear();

		myHP = maxHP;

		if (playerLanguage == "EN")
		{
			cout << "*******************************************" << endl;
			cout << "*              POK�MON CENTER             *" << endl;
			cout << "*******************************************" << endl;
			cout << "Here's your " << currentPKM << "." << endl;
			cout << "We hope to see you again!    *" << endl;
			cout << "*******************************************" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "*******************************************" << endl;
			cout << "*            CENTRO DE POK�MONS           *" << endl;
			cout << "*******************************************" << endl;
			cout << "Aqui est� o teu " << currentPKM << "." << endl;
			cout << "Esperamos voltar a v�-lo em breve!" << endl;
			cout << "*******************************************" << endl;
		}
		system("pause");
		waitAndClear();

		createBattle();
	}
	else if (choiceHeal == 2)
	{
		// Do Something
	}
}

								////////////////////////////////////\\
								//									\\
								//	RANDOM ENEMY POKEMON FUNCTION	\\
								//									\\
								//////////////////////////////////////

void randomEnemyPokemon()
{
	//	17 Pokemons       (!!!!! UPDATE IF NEEDED, YOU LAZY CUNT !!!!)
	string enemyPokemons[] = { "BULBASAUR", "CHARMANDER", "SQUIRTLE", "BEEDRILL", "PIDGEY", "RATTATA", "NIDORAN", "ZUBAT", "ODDISH", "PARAS", "PSYDUCK", "MANKEY", "ABRA", "MACHOP", "BELLSPROUT", "TENTACOOL", "GEODUDE", "ALAKAZAM", "EXEGGUTOR", "GRAVELER", "WEEDLE", "MEW", "MEWTWO", "VULPIX", "VICTREEBEL", "SHELDER" };
	// Pokemon Types
	string typeGrass = "GRASS";
	string typeFire = "FIRE";
	string typeNormal = "NORMAL";
	string typeElectric = "ELECTRIC";
	string typeFighting = "FIGHTING";
	string typeFlying = "FLYING";
	string typeBug = "BUG";
	string typeRock = "ROCK";
	string typeWater = "WATER";
	string typePsychic = "PSYCHIC";
	string typePoison = "POISON";
	// Acrescentar os tipos dos ultimos pokemons que acrescentei

	if (myLvl >= 5 && myLvl <= 10)
	{
		int enemyPokemonLevels[] = { 1, 2, 4, 3, 5 };
		int idlvl;

		idlvl = rand() % sizeof(enemyPokemonLevels) / sizeof(enemyPokemonLevels[0]);

		enemyLvl = enemyPokemonLevels[idlvl];
	}
	if (myLvl >= 10 && myLvl <= 20)
	{
		int enemyPokemonLevels[] = { 5, 7, 9, 6, 8, 10 };
		int idlvl;

		idlvl = rand() % sizeof(enemyPokemonLevels) / sizeof(enemyPokemonLevels[0]);

		enemyLvl = enemyPokemonLevels[idlvl];
	}
	if (myLvl >= 20 && myLvl <= 30)
	{
		int enemyPokemonLevels[] = { 10, 12, 14, 13, 15, 11 };
		int idlvl;

		idlvl = rand() % sizeof(enemyPokemonLevels) / sizeof(enemyPokemonLevels[0]);

		enemyLvl = enemyPokemonLevels[idlvl];
	}
	//  17 Levels      (!!!!! UPDATE IF NEEDED, YOU LAZY CUNT !!!!)
	
	int enemyPokemonHP = 20;

	int id;
	id = rand() % sizeof(enemyPokemons) / sizeof(enemyPokemons[0]); // DO NOT TOUCH THIS, THIS GET'S THE NUMBER OF POKEMONS AUTOMATICALLY!! You lazy cunt.
	 // DO NOT TOUCH THIS, THIS GET'S THE NUMBER OF POKEMON LEVELS AUTOMATICALLY!! You lazy cunt.
	// Assign things

	if (enemyPokemons[id] == "BULBASAUR")
	{
		enemyType = typeGrass;
	}
	if (enemyPokemons[id] == "CHARMANDER")
	{
		enemyType = typeFire;
	}
	if (enemyPokemons[id] == "SQUIRTLE")
	{
		enemyType = typeWater;
	}
	if (enemyPokemons[id] == "BEEDRILL")
	{
		enemyType = typeBug;
	}
	if (enemyPokemons[id] == "PIDGEY")
	{
		enemyType = typeFlying;
	}
	if (enemyPokemons[id] == "RATTATA")
	{
		enemyType = typeNormal;
	}
	if (enemyPokemons[id] == "NIDORAN")
	{
		enemyType = typePoison;
	}
	if (enemyPokemons[id] == "ZUBAT")
	{
		enemyType = typePoison;
	}
	if (enemyPokemons[id] == "ODDISH")
	{
		enemyType = typeGrass;
	}
	if (enemyPokemons[id] == "PARAS")
	{
		enemyType = typeBug;
	}
	if (enemyPokemons[id] == "PSYDUCK")
	{
		enemyType = typeWater;
	}
	if (enemyPokemons[id] == "MANKEY")
	{
		enemyType = typeFighting;
	}
	if (enemyPokemons[id] == "ABRA")
	{
		enemyType = typePsychic;
	}
	if (enemyPokemons[id] == "MACHOP")
	{
		enemyType = typeFighting;
	}
	if (enemyPokemons[id] == "BELLSPROUT")
	{
		enemyType = typeGrass;
	}
	if (enemyPokemons[id] == "TENTACOOL")
	{
		enemyType = typeWater;
	}
	if (enemyPokemons[id] == "GEODUDE")
	{
		enemyType = typeRock;
	}
	if (enemyPokemons[id] == "WEEDLE")
	{
		enemyType = typeBug;
	}
	// ACRESCENTAR OS TIPOS DOS ULTIMOS POKEMONS QUE ADICIONEI E SUAS RESPECTIVAS EVOLU��ES!!!!!!!!!!!!!!!!

	enemyPKM = enemyPokemons[id];
	enemyHP = enemyPokemonHP;
}

								////////////////////////////////////\\
								//									\\
								//	RANDOM ENEMY ATTACKS FUNCTION	\\
								//									\\
								//////////////////////////////////////

void randomEnemyAttacks()
{
	if (myLvl >= 5 && myLvl <= 10)
	{
		int enemyDamageList[] = { 1, 3, 5, 2, 4 };
		int damage;

		damage = rand() % sizeof(enemyDamageList) / sizeof(enemyDamageList[0]);

		if (enemyType == "WATER" && pkmType == "FIRE")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if(enemyType == "FIRE" && pkmType == "WATER")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (enemyType == "FIRE" && pkmType == "GRASS")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else
		{
			enemyDamage = enemyDamageList[damage];
		}
	}
	if (myLvl >= 10 && myLvl <= 15)
	{
		int enemyDamageList[] = { 6, 8, 7, 10, 9 };
		int damage;

		damage = rand() % sizeof(enemyDamageList) / sizeof(enemyDamageList[0]);

		if (enemyType == "WATER" && pkmType == "FIRE")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (enemyType == "FIRE" && pkmType == "WATER")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (enemyType == "FIRE" && pkmType == "GRASS")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else
		{
			enemyDamage = enemyDamageList[damage];
		}
	}
	if (myLvl >= 15 && myLvl <= 20)
	{
		int enemyDamageList[] = { 11, 13, 12, 15, 14 };
		int damage;

		damage = rand() % sizeof(enemyDamageList) / sizeof(enemyDamageList[0]);

		if (enemyType == "WATER" && pkmType == "FIRE")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (enemyType == "FIRE" && pkmType == "WATER")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (enemyType == "FIRE" && pkmType == "GRASS")
		{
			enemyDamage = enemyDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else
		{
			enemyDamage = enemyDamageList[damage];
		}
	}

	string enemyAttacksList[] = { "Tackle", "Scratch", "Tail Whip", "Splash", "Quick Attack", "Wing Attack" };

	int attacks;
	attacks = rand() % sizeof(enemyAttacksList) / sizeof(enemyAttacksList[0]);

	enemyAttacks = enemyAttacksList[attacks];
}

								////////////////////////////////////////\\
								//									    \\
								//	RANDOM MY POKEMON Attacks FUNCTION	\\
								//									    \\
								//////////////////////////////////////////

void randomMyAttacks()
{
	if (myLvl >= 5 && myLvl <= 10)
	{
		int myDamageList[] = { 5, 7, 9, 6, 8, 10 };
		int damage;

		damage = rand() % sizeof(myDamageList) / sizeof(myDamageList[0]);

		if (pkmType == "WATER" && enemyType == "FIRE")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (pkmType == "FIRE" && enemyType == "WATER")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (pkmType == "FIRE" && enemyType == "GRASS")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else
		{
			myDamage = myDamageList[damage];
		}
	}
	if (myLvl >= 10 && myLvl <= 15)
	{
		int myDamageList[] = { 11, 13, 12, 15, 14 };
		int damage;

		damage = rand() % sizeof(myDamageList) / sizeof(myDamageList[0]);

		if (pkmType == "WATER" && enemyType == "FIRE")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (pkmType == "FIRE" && enemyType == "WATER")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (pkmType == "FIRE" && enemyType == "GRASS")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else
		{
			myDamage = myDamageList[damage];
		}
	}
	if (myLvl >= 15 && myLvl <= 20)
	{
		int myDamageList[] = { 15, 17, 16, 19, 18 };
		int damage;

		damage = rand() % sizeof(myDamageList) / sizeof(myDamageList[0]);

		if (pkmType == "WATER" && enemyType == "FIRE")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (pkmType == "FIRE" && enemyType == "WATER")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else if (pkmType == "FIRE" && enemyType == "GRASS")
		{
			myDamage = myDamageList[damage] + 5;
			if (playerLanguage == "EN")
			{
				cout << "It's super";
				cout << "effective!" << endl;
			}
			else if (playerLanguage == "PT")
			{
				cout << "� super";
				cout << "efectivo!" << endl;
			}
		}
		else
		{
			myDamage = myDamageList[damage];
		}
	}
}

								////////////////////////////////////////\\
								//									    \\
								//	  EXPERIENCE & LEVEL UP FUNCTION	\\
								//									    \\
								//////////////////////////////////////////

void exp()
{
	int experience, expGained, tempExp;
	int experiencePoints[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	experience = rand() % sizeof(experiencePoints) / sizeof(experiencePoints[0]);

	expGained = experiencePoints[experience];
	tempExp = expGained;

	myExp += expGained;

	waitAndClear();

	if (playerLanguage == "EN")
	{
		cout << "****************************************" << endl;
		cout << "*      ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Experience & Level Up Stats     ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "*" << endl;
		cout << "****************************************" << endl << endl;

		cout << "Your ";
	}
	else if (playerLanguage == "PT")
	{
		cout << "*****************************************" << endl;
		cout << "*  ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "Experiencia e Estat�sticas de n�vel  ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << "*" << endl;
		cout << "*****************************************" << endl << endl;

		cout << "O teu ";
	}
	if (pkmType == "FIRE")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 28);
		cout << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else if (pkmType == "GRASS")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else if (pkmType == "WATER")
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 27);
		cout << currentPKM;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else
	{
		cout << currentPKM;
	}
	if (playerLanguage == "EN")
	{
		cout << " gained ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << tempExp;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " of ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "experience!" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	else if (playerLanguage == "PT")
	{
		cout << " ganhou ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << tempExp;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
		cout << " de ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 26);
		cout << "experi�ncia!" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 31);
	}
	
	system("pause");
	// 5 - 20
	// 7 - 23
	// 9 - 28
	// 10 - 33 ?
	


	// The 3 pokemons i chose for the initial ones evolve at level 16 then at level 32.
	if (myLvl == 5 && myExp >= 100)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 6 && myExp >= 250)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 7 && myExp >= 400)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 8 && myExp >= 550)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 9 && myExp >= 700)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 10 && myExp >= 850)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 11 && myExp >= 1000)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 12 && myExp >= 1150)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 13 && myExp >= 1300)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 14 && myExp >= 1450)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	if (myLvl == 15 && myExp >= 1600)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << currentPKM << " grew to" << endl;
			cout << "LV." << myLvl + 1 << "!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << currentPKM << " evoluiu para" << endl;
			cout << "NV." << myLvl + 1 << "!" << endl;
		}

		myLvl = myLvl + 1;
		hpPoints();
	}
	// Charmander
	if (myLvl == 16 && myID == 1)
	{
		waitAndClear();

		if (playerLanguage == "EN")
		{
			cout << "What?" << endl;
			cout << currentPKM << " is evolving!" << endl;

			system("pause");
			waitAndClear();

			cout << "Congratulations! Your " << currentPKM << endl;
			cout << "evolved into CHARMELEON!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "O que?" << endl;
			cout << currentPKM << " est� a evoluir!" << endl;

			system("pause");
			waitAndClear();

			cout << "Parab�ns! O teu " << currentPKM << endl;
			cout << "evoluiu para CHARMELEON!" << endl;
		}		
		system("pause");
		waitAndClear();

		currentPKM = "CHARMELEON";
		saveGame();
	}
	// Bulbasaur
	if (myLvl == 16 && myID == 2)
	{
		waitAndClear();
		if (playerLanguage == "EN")
		{
			cout << "What?" << endl;
			cout << currentPKM << " is evolving!" << endl;

			system("pause");
			waitAndClear();

			cout << "Congratulations! Your " << currentPKM << endl;
			cout << "evolved into IVYSAUR!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "O que?" << endl;
			cout << currentPKM << " est� a evoluir!" << endl;

			system("pause");
			waitAndClear();

			cout << "Parab�ns! O teu " << currentPKM << endl;
			cout << "evoluiu para IVYSAUR!" << endl;
		}
		system("pause");
		waitAndClear();

		currentPKM = "IVYSAUR";
		saveGame();
	}
	// Squirtle
	if (myLvl == 16 && myID == 3)
	{
		waitAndClear();

		if (playerLanguage == "EN")
		{
			cout << "What?" << endl;
			cout << currentPKM << " is evolving!" << endl;

			system("pause");
			waitAndClear();

			cout << "Congratulations! Your " << currentPKM << endl;
			cout << "evolved into WARTORTLE!" << endl;
		}
		else if (playerLanguage == "PT")
		{
			cout << "O que?" << endl;
			cout << currentPKM << " est� a evoluir!" << endl;

			system("pause");
			waitAndClear();

			cout << "Parab�ns! O teu " << currentPKM << endl;
			cout << "evoluiu para WARTORTLE!" << endl;
		}
		system("pause");
		waitAndClear();

		currentPKM = "WARTORTLE";
		saveGame();
	}
	waitAndClear();
}

void hpPoints()
{
	int experience2, expGained2, tempExp2;
	int experiencePoints[] = { 1, 2, 3 };

	experience2 = rand() % sizeof(experiencePoints) / sizeof(experiencePoints[0]);

	expGained2 = experiencePoints[experience2];
	tempExp2 = expGained2;

	maxHP += expGained2;

	cout << "HP + " << tempExp2 << endl;
}


								////////////////////////////////////\\
								//									\\
								//	  CREATE HEALTH GUI FUNCTION	\\
								//									\\
								//////////////////////////////////////

string hpGUI(int hp)
{
	string vidaUI = "";

	for (int i = 0; i < (hp / 2); i++)
	{
		vidaUI += "*";
	}
	return vidaUI;
}

string xpGUI(int xp)
{
	string xpUI = "";

	if (myLvl == 5)
	{
		for (int i = 0; i < (xp / 10); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 6)
	{
		for (int i = 0; i < (xp / 25); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 7)
	{
		for (int i = 0; i < (xp / 40); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 8)
	{
		for (int i = 0; i < (xp / 55); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 9)
	{
		for (int i = 0; i < (xp / 70); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 10)
	{
		for (int i = 0; i < (xp / 85); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 11)
	{
		for (int i = 0; i < (xp / 100); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 12)
	{
		for (int i = 0; i < (xp / 115); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 13)
	{
		for (int i = 0; i < (xp / 130); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 14)
	{
		for (int i = 0; i < (xp / 145); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 15)
	{
		for (int i = 0; i < (xp / 160); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
	else if (myLvl == 16)
	{
		for (int i = 0; i < (xp / 55); i++)
		{
			xpUI += "*";
		}
		return xpUI;
	}
}

void gameCredits()
{
	waitAndClear();
	if (playerLanguage == "EN")
	{
		cout << "************************************************" << endl;
		cout << "*                  Game Credits                *" << endl;
		cout << "************************************************" << endl;
		cout << "*      Thanks to everyone who participated     *" << endl;
		cout << "*  in the making of this game live on twitch!  *" << endl;
		cout << "*                                              *" << endl;
		cout << "*            (twitch.tv/ShadowOrigins)         *" << endl;
		cout << "************************************************" << endl << endl;
		system("pause");
		waitAndClear();

		cout << "************************************************" << endl;
		cout << "*                  Game Credits                *" << endl;
		cout << "************************************************" << endl;
		cout << "*              Special thanks to:              *" << endl;
		cout << "*                                              *" << endl;
		cout << "*    1 - Daviex     2 - dy     3 - RockoDk     *" << endl;
		cout << "************************************************" << endl << endl;

		system("pause");
		waitAndClear();

		cout << "************************************************" << endl;
		cout << "*                  Game Credits                *" << endl;
		cout << "************************************************" << endl;
		cout << "*    Game made by:          Language used:     *" << endl;
		cout << "*                                              *" << endl;
		cout << "*    ShadowOrigins               C++           *" << endl;
		cout << "************************************************" << endl << endl;
	}
	else if (playerLanguage == "PT")
	{
		cout << "*************************************************" << endl;
		cout << "*                Cr�ditos do Jogo               *" << endl;
		cout << "*************************************************" << endl;
		cout << "*     Obrigado a todos os que participaram      *" << endl;
		cout << "*  na constru��o deste jogo ao vivo no twitch!  *" << endl;
		cout << "*                                               *" << endl;
		cout << "*            (twitch.tv/ShadowOrigins)          *" << endl;
		cout << "************************************************" << endl << endl;
		system("pause");
		waitAndClear();

		cout << "************************************************" << endl;
		cout << "*                Cr�ditos do Jogo              *" << endl;
		cout << "************************************************" << endl;
		cout << "*         Agradecimento especial para:         *" << endl;
		cout << "*                                              *" << endl;
		cout << "*    1 - Daviex     2 - dy     3 - RockoDk     *" << endl;
		cout << "************************************************" << endl << endl;

		system("pause");
		waitAndClear();

		cout << "************************************************" << endl;
		cout << "*                Cr�ditos do Jogo              *" << endl;
		cout << "************************************************" << endl;
		cout << "*   Jogo feito por:         Linguagem usada:   *" << endl;
		cout << "*                                              *" << endl;
		cout << "*    ShadowOrigins               C++           *" << endl;
		cout << "************************************************" << endl << endl;
	}
	system("pause");
	waitAndClear();

	titleScreen();
}

								////////////////////////////////////\\
								//									\\
								//		WAIT AND CLEAR FUNCTION		\\
								//									\\
								//////////////////////////////////////

void waitAndClear()
{
	// Original: Sleep(2500);
	Sleep(500);
	system("CLS");
}

								////////////////////////////////////\\
								//									\\
								//		EXIT THE GAME FUNCTION		\\
								//									\\
								//////////////////////////////////////

int exitGame()
{
	exit(0);
}

void createLanguageFile()
{
	// Creates the save.dat file
	ofstream save("language.ini");

	// If the file opens
	if (save.is_open())
	{
		// Save variables in one line separated by spaces
		save << "The game will use the following language:" << "\n";
		save << playerLanguage;
	}
	// Closes the file
	save.close();
}

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//									END	MISCELANEOUS FUNCTIONS									   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////
/*

Color Codes :
0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
*/

///////////////////////////////////////////////////////////////////////////////////////////////////\\
//																								   \\
//										 SHIT CODE PLACE										   \\
//																								   \\
/////////////////////////////////////////////////////////////////////////////////////////////////////


/* !!!!!!!!!!!!!!!!! SHIT CODE PLACE XDDD !!!!!!!!!!!!!!!!!!!!
!THIS IS THE PLACE WHERE THE SHIT CODE GOES, YES.. INDEED.!
!SHIT CODE 4TW!											 !
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//int vidaAdv = 100, nivelPokemonAdv = 10, nivelMeuPokemon = 15, hp, vida = 100, escolhaMenuLuta;

// Pokemon apare�eu, luta a come�ar xD
/*  MORE SHIT CODE XD

Sleep(2000);
pokemonAdv = funcaoPokemonAdvRandom();
cout << "Um " << pokemonAdv << " Selvagem Apareceu!" << endl;
Sleep(2000);
cout << "Vai " << meuPokemon << " !!" << endl;
Sleep(2500);
system("CLS");*/


/*cout << pokemonAdv << "\t" << "Lv" << nivelPokemonAdv << endl;
vidaPokemon = hpGUI(vida);
cout << "\t" << "HP" << vidaPokemon;
cout << endl << endl << endl << endl;

cout << "\t\t\t" << meuPokemon << "\t" << " Lv" << nivelMeuPokemon << endl;
vidaMeuPokemon = hpGUI(vida);
cout << "\t\t\t" << "HP" << vidaMeuPokemon;
cout << endl << endl;


cout << "O que vai o " << endl;
cout << meuPokemon << " fazer?" << endl;

cout << "\t\t" << "1 - LUTAR" << "\t" << "2 - MALA" << endl;
cout << "\t\t" << "3 - POKEMON" << "\t" << "4 - FUGIR" << endl;
cout << "Escolhe: ";
cin >> escolhaMenuLuta;

SHIT CODE ONCE AGAIN HAHAHA xD
if(pkm == 1)
{
pokemon = "Bulbasaur";
return pokemon;
}
else if(pkm == 2)
{
pokemon = "Charmander";
return pokemon;
}
else if(pkm == 3)
{
pokemon = "Squirtle";
return pokemon;
}
else if(pkm == 4)
{
pokemon = "Beedrill";
return pokemon;
}
else
{
pokemon = "Pidgey";
return pokemon;
}


SHIT CODE XD
if(vida == 100)
{
string vidaUI = "**********";
return vidaUI;
}
else if(vida == 90)
{
string vidaUI = "*********";
return vidaUI;
}
else if(vida == 80)
{
string vidaUI = "********";
return vidaUI;
}
else if(vida == 70)
{
string vidaUI = "*******";
return vidaUI;
}
else if(vida == 60)
{
string vidaUI = "******";
return vidaUI;
}
else if(vida == 50)
{
string vidaUI = "*****";
return vidaUI;
}
else if(vida == 40)
{
string vidaUI = "****";
return vidaUI;
}
else if(vida == 30)
{
string vidaUI = "***";
return vidaUI;
}
else if(vida == 20)
{
string vidaUI = "**";
return vidaUI;
}
else if(vida == 10)
{
string vidaUI = "*";
return vidaUI;
}
else
{
string vidaUI = "";
return vidaUI;
}*/
