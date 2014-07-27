#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <vector>

using namespace std;

class unit
{
	int id;
	int type;
};

class player
{
	string name;
	vector<unit*> onBoard;
	vector<unit*> inHand;
};

player::player()
{
	unit playerUnit[20];
	playerUnit[0].id = 0;
	playerUnit[1].id = 1;
	playerUnit[2].id = 2;
	playerUnit[3].id = 3;
	playerUnit[4].id = 3;
	playerUnit[5].id = 4;
	playerUnit[6].id = 4;
	playerUnit[7].id = 5;
	playerUnit[8].id = 5;
	playerUnit[9].id = 6;
	playerUnit[10].id = 6;
	for(int i=0;i<9;i++)
	{
		playerUnit[i+10] = 7;
	}
}

// FUNCTIONS
int init()
{
}

#endif
