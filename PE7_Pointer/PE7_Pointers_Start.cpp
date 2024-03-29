#include "stdafx.h"
#include "PE7_Pointers_Start.h"
#include <iostream>
using namespace std;

class MovableObject
{
public:
	void PrintPos(int xPos, int yPos)
	{
		cout << "X:" << xPos << " Y:" << yPos << endl;
	}
};

class Player : public MovableObject
{
public:
	char* name;
	Player()
	{
		cout << "player stor " << endl;
		name = new char[15];
	}

	~Player()
	{
		cout << "player dtor" << endl;
		delete[] name;
	}
};

class Monster : public MovableObject
{
public:
	int damage;
};

int main()
{
	//Monster *boss = new Monster();
	//Player *pOne = new Player();

	MovableObject *boss = new Monster();
	MovableObject *pOne = new Player();
	Monster *fakeMonster = (Monster*)pOne;

	// add code here
	int xPos = 20;
	int yPos = 50;
	cout << "Boss address is " << endl;
	PrintPos(xPos, yPos);
	cout << "" << endl;

	xPos = 30;
	yPos = 12;
	cout << "Player address is " << endl;
	PrintPos(xPos, yPos);
	cout << "" << endl;
	
	xPos = 42;
	yPos = 29;
	PrintPos(xPos, yPos);
	cout << " " << endl;

	delete boss;
	delete pOne;
	delete fakeMonster;

	return 0;
}

//Step 2: The program is crashing due to the lack of Symbols not loading in
//Step 6: The player object is just being copied over and over again.