//
// Created by shachar on 12/21/2017.
//

#include "Game.h"


bool Game::instanceFlag = false;
Game* Game::single = nullptr;
Game* Game::getInstance(const string &csv_file) {
    if(! instanceFlag)
    {
        single = new Game(csv_file);
        instanceFlag = true;
        return single;
    }
    else
    {
        return single;
    }
}



Game::Game(const string &csv_file) {
    std::cout << "constructor Game" << std::endl;
    gameState= new GameState(csv_file);

}

Game::~Game() {

    std::cout << "destructor Game" << std::endl;
    delete this->gameState;
    instanceFlag = false;

}

void Game::start_game() {
    while(game_not_finished()){
        for (auto &player: gameState->players_left){
            player->play(this->gameState->map);
        }

    }
}

void Game::end_game() {

}

bool Game::game_not_finished() {
    return false;
}
