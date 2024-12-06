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

    // Helper Functions
    void addPlayer(string name);
    void rollDice();

    // Solving Functions
    void CalculateScore(vector<Die> dice);
private:
    vector<Player> players;
    int turn;
    int;
};

#endif //YAHTZEE_H
