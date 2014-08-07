#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <vector>

using namespace std;

enum unit_type_t {KING,BISHOP,ROOK,GOLD_GENERAL,SILVER_GENERAL,
	KNIGHT,LANCE,PAWN}

class unit
{
	int id;
	unit_type_t type;
	int x,y;
};

class player
{
	string name;
	vector<unit*> onBoard;
	vector<unit*> inHand;
};

player::player()
{
	unit *playerUnit = new unit[20];
	playerUnit[0]->type = LANCE;
	playerUnit[1]->type = KNIGHT;
	playerUnit[2]->type= SILVER_GENERAL;
	playerUnit[3]->type= GOLD_GENERAL;
	playerUnit[4]->type = KING;
	playerUnit[5]->type = GOLD_GENERAL;
	playerUnit[6]->type = SILVER_GENERAL;
	playerUnit[7]->type = KNIGHT;
	playerUnit[8]->type = LANCE;
	playerUnit[9]->type = BISHOP;
	playerUnit[10]->type = ROOK;
	for(int i=0;i<9;i++)
	{
		playerUnit[i+10]->type = PAWN;
	}
	onBoard.push_back(playerUnit);
}

class map
{
	int tile[9][9];
};

// FUNCTIONS
int init()
{
	map shogiBoard;
	player playerWhite,playerBlack;
	for(int i=0;i<20;i++)
	{
		if(i<9)
		{
			playerWhite.onBoard[i]->x=i;
			playerWhite.onBoard[i]->y=0;
			playerBlack.onBoard[i]->x=i;
			playerBlack.onBoard[i]->y=8;
		}else if(i<11)
		{
			if(i==9)
			{
				playerWhite.onBoard[i]->x=1;
				playerBlack.onBoard[i]->x=7;
			}else
			{
				playerWhite.onBoard[i]->x=7;
				playerBlack.onBoard[i]->x=1;
			}
			playerWhite.onBoard[i]->y=1;
			playerBlack.onBoard[i]->y=7;
		}else
		{
			playerWhite.onBoard[i]->x=i-9;
			playerWhite.onBoard[i]->y=2;
			playerBlack.onBoard[i]->x=i-9;
			playerBlack.onBoard[i]->y=6;
		}
	}
}

#endif
