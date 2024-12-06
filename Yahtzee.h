//
// Created by Elijah Flader on 12/6/24.
//

#ifndef YAHTZEE_H
#define YAHTZEE_H

#include <iostream>
#include <string>
#include <vector>

#include "Die.h"
#include "Player.h"

using namespace std;

class Yahtzee {
public:
    Yahtzee();
    Yahtzee(vector<string> names);

    vector<Die> getDice();

    // Helper Functions
    void addPlayer(string name);
    void rollDice();
    Player getPlayer();

    // Solving Functions
    void findPossibleScores(vector<Die> dice);

    void findThreeOfAKind();
    void findFourOfAKind();


private:
    vector<Player> players;
    int turn;

    // For all adding examples
    int addDice(int number);

    // Calulating scores of various wins
    int threeOfAKind();
    int fourOfAKind();
    int fullHouse();
    int smallStraight();
    int largeStraight();
    int yahtzee();

    int chance();

    void sortDice();
};

#endif //YAHTZEE_H
