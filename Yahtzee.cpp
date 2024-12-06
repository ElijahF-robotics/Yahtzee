//
// Created by Elijah Flader on 12/6/24.
//

#include <iostream>
#include <string>
#include <vector>

#include "Die Class/Die.h"
#include "Player.h"
#include "Yahtzee.h"

Yahtzee::Yahtzee() {};

void Yahtzee::addPlayer(string name) {
    if (!name.empty()) {
        Player p;
        p.name = name;
        p.score = 0;
        p.turn = players.size();
        players.push_back(p);
    }
}