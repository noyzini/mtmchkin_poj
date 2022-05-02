//
// Created by Noy Zini on 02/05/2022.
//

#ifndef MTMCHKIN_PLAYER_H
#define MTMCHKIN_PLAYER_H
#include <string>

using namespace std;

class Player{

    string m_name;
    int m_level;
    int m_force;
    int m_maxHP;
    int m_HP;
    int m_coins;

public:
    Player(string& name, int maxHP = 100, int force = 5);
    Player(const Player&)=default;//ask on piaza if its ok
    Player& operator=(const Player&)=default;
    ~Player()=default;

    void printInfo();
    void levelUp();

};


#endif //MTMCHKIN_PLAYER_H
