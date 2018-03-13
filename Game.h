//
// Created by shachar on 12/21/2017.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H

#include "GameState.h"

class Game
{
private:
	static bool instanceFlag;
	static Game *single;
	explicit Game(const string &csv_file);//



public:
	static Game* getInstance(const string &csv_file);
	GameState* gameState;

	//explicit Game(const string &csv_file);

	void start_game();
	void end_game();
	bool game_not_finished();
	virtual ~Game();

};



#endif //UNTITLED_GAME_H
