//
// Created by shachar on 12/21/2017.
//

#include "Player.h"
#include "Map.h"


/*void set_movingSoldierStrategy(MovingSoldierStrategy* m) {
movingSoldierStrategy = m;
}
void set_healingSoldierStrategy(HealingSoldierStrategy* h) {
healingSoldierStrategy = h;
}
void set_collectingItemStrategy(CollectingItemStrategy* c) {
collectingItemStrategy = c;
}
void set_attckingSoldierStrategy(AttckingSoldierStrategy* a) {
attckingSoldierStrategy = a;
}

*/
/*void Player::set_movingSoldierStrategy(MovingSoldierStrategy * m)
{
    movingSoldierStrategy = m;
}

void Player::set_healingSoldierStrategy(HealingSoldierStrategy * h)
{
    healingSoldierStrategy = h;
}

void Player::set_collectingItemStrategy(CollectingItemStrategy * c)
{
    collectingItemStrategy = c;
}

void Player::set_attckingSoldierStrategy(AttckingSoldierStrategy * a)
{
    attckingSoldierStrategy = a;
}

void Player::do_movingSoldierStrategy() const
{
}

void Player::do_healingSoldierStrategy() const
{
}

void Player::do_collectingItemStrategy() const
{
}

void Player::do_attckingSoldierStrategy() const
{
}*/

void Player::init_soldiers(string type) {
    while (true)
    {

        if (type.empty())
            break;
        soldiers_of_player.push_back(Soldier::make_soldier(type,this->player_id));
    }
}

Player::Player(const string &player_id) : player_id(player_id) {std::cout << "constructor Player" << std::endl;}

Player::~Player() {std::cout << "destructor Player" << std::endl;}

void Player::play(Map *map) {
    for (auto &soldier: this->soldiers_of_player){
        //this->executeStrategy(map, soldier);
        this->playerStrategy->setMap(map);
        soldier->accept(this->playerStrategy);
    }

}





