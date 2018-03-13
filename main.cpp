#include <iostream>
#include <memory>
#include <vector>
#include "Game.h"
#include <bitset>
#include "MapCell.h"


using std::shared_ptr;
using  namespace std;





int main() {

    Game* game;
    game = Game::getInstance(R"(C:\Users\shachar\Downloads\init_file_example.csv)");
game->start_game();
delete game;


}