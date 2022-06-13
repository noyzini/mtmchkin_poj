#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_

#include <iostream>
#include <fstream> //check if this is the include they used in tutorial!
#include <queue>
#include "Players/Player.h"
#include "Players/Wizard.h"
#include "Players/Rogue.h"
#include "Players/Fighter.h"
#include "Cards/Card.h"
#include "Cards/BattleCards/BattleCards.h"
#include "Cards/BattleCards/Dragon.h"
#include "Cards/BattleCards/Goblin.h"
#include "Cards/BattleCards/Vampire.h"
#include "Cards/Barfight.h"
#include "Cards/Fairy.h"
#include "Cards/Merchant.h"
#include "Cards/Pitfall.h"
#include "Cards/Treasure.h"

class Mtmchkin{
private:
    std::queue<Player*> m_players;
    std::queue<Card*> m_cards;
    std::deque<Player*> m_leaderboard;
    int m_round;
    int m_playersNumber;

    static const int MAX_LEVEL=10;

public:

    static Card* makeCard(std::string& cardName);
    /*
    * C'tor of Mtmchkin class
    *
    * @param filename - a file which contains the cards of the deck.
    * @return
    *      A new instance of Mtmchkin.
    */
    Mtmchkin(const std::string fileName);
    
    /*
    * Play the next Round of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void playRound();
    
    /*
    * Prints the leaderBoard of the game at a given stage of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void printLeaderBoard() const;
    
    /*
    *  Checks if the game ended:
    *
    *  @return
    *          True if the game ended
    *          False otherwise
    */
    bool isGameOver() const;
    
	/*
    *  Returns the number of rounds played.
    *
    *  @return
    *          int - number of rounds played
    */
    int getNumberOfRounds() const;
};



#endif /* MTMCHKIN_H_ */
