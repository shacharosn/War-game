//
// Created by shachar on 12/21/2017.
//

#include "GameState.h"

//GameState::GameState(const vector<shared_ptr<Player>> &players_left) : players_left(players_left) {}
GameState::GameState(int w, int h) : w(w), h(h) { std::cout << "constructor GameState" << std::endl; }

GameState::~GameState() {
    std::cout << "destructor GameState" << std::endl;
    delete this->map;
}

GameState::GameState(const string &csv_file) {
    ifstream ip(csv_file);


    if (!ip.is_open()) std::cout << "ERROR: File Open" << '\n';


    string ip_game;
    string ip_battlefieldSize;
    string ip_w;
    string ip_h;
    string ip_num_players_str;
    int ip_num_players_int;
    string ip_num_of_soliers_for_player_str;
    int ip_num_of_soliers_for_player_int;


    string soldier_id;
    string player_id;
    string players;
    string soldiers;
    string kind;
    string soldier_kind;
    string soldier_location;
    string soldier_weapon;

    string ip_objects;
    string ip_name_of_object;
    string ip_type_of_object;


    // string soldier_kind;
    string soldier_info;
    string soldier_sub_kind;

    char temp;
    double x, y;


    getline(ip, ip_game, '\n');
    getline(ip, ip_battlefieldSize, ',');
    getline(ip, ip_w, ',');
    getline(ip, ip_h, '\n');
    getline(ip, players, ',');
    getline(ip, ip_num_players_str, '\n');
    ip_num_players_int = std::stoi(ip_num_players_str);
    getline(ip, soldiers, ',');
    getline(ip, ip_num_of_soliers_for_player_str, '\n');
    ip_num_of_soliers_for_player_int = std::stoi(ip_num_of_soliers_for_player_str);

    //GameState* gameState = new GameState(std::stoi( ip_w ),std::stoi( ip_h ));
    this->h = std::stoi(ip_h);
    this->w = std::stoi(ip_w);


    map = new Map(this->h, this->w);


    for (std::size_t i = 0; i < ip_num_players_int; i++) {
        getline(ip, player_id, ',');
        getline(ip, kind, '\n');
        this->players_left.push_back(make_shared<Player>(player_id));

        for (std::size_t j = 0; j < ip_num_of_soliers_for_player_int; j++) {
            getline(ip, soldier_kind, ',');
            if (soldier_kind == "paramedic") {
                getline(ip, soldier_location, '\n');
                stringstream dosString;
                dosString << soldier_location;
                dosString >> temp >> x >> y >> temp;
                shared_ptr<Soldier> s1(Soldier::make_soldier(soldier_kind, player_id));
                s1.get()->setLocation(x, y);
                s1.get()->setOwner(player_id);
                players_left[i]->soldiers_of_player.push_back(s1);
                map->add(s1);
            } else {
                getline(ip, soldier_location, ',');
                getline(ip, soldier_weapon, '\n');
                stringstream dosString;
                dosString << soldier_location;
                dosString >> temp >> x >> y >> temp;
                shared_ptr<Soldier> s1(Soldier::make_soldier(soldier_kind, player_id));
                s1.get()->setLocation(x, y);
                s1.get()->setWeapon(Weapon::make_weapon(soldier_weapon));
                s1.get()->setOwner(player_id);
                players_left[i]->soldiers_of_player.push_back(s1);
                map->add(s1);
            }
        }
    }
    number_of_players = (int) players_left.size();


    string obj;
    string object_kind;
    string object_info;
    string object_sub_kind;
    getline(ip, obj, '\n');


    while (ip.good()) {


        getline(ip, object_kind, ',');
        getline(ip, object_sub_kind, ',');
        getline(ip, object_info, '\n');
        stringstream object_stream;
        object_stream << object_info;

        if (object_kind == "weapon") {
            shared_ptr<Weapon> w = Weapon::make_weapon(object_sub_kind, object_stream);
            map->add(w);
        } else {
            if (object_kind == "solid") {
                shared_ptr<FixedItem> f = FixedItem::make_fixedItem(object_sub_kind, object_stream);
                map->add(f);
            } else if (object_kind == "Armor") {
                shared_ptr<Armor> a = Armor::make_armor(object_sub_kind, object_stream);
                map->add(a);
            }
        }


    }


    ip.close();






    //delete gameState;




}
