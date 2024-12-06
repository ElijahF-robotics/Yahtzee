//
// Created by Elijah Flader on 12/6/24.
//

#include <iostream>
#include <string>
#include <vector>

#include "Die.h"
#include "Player.h"
#include "Yahtzee.h"

Yahtzee::Yahtzee() {
    turn = 0;
};

vector<Die> Yahtzee::getDice() {
    return players.at(turn).dice;
}

Player Yahtzee::getPlayer() {
    return players.at(turn);
}

void Yahtzee::addPlayer(string name) {
    if (!name.empty()) {
        Player p;
        p.name = name;
        p.score = 0;
        p.turn = players.size();

        for (int i = 0; i < 5; i++) {
            p.dice.push_back(Die(6));
        }

        players.push_back(p);
    }


}

// For all adding examples
int Yahtzee::addDice(int number) {
    int total = 0;
    for (Die d : getPlayer().dice) {
        if (d.getFaceValue() == number) {
            total += d.getFaceValue();
        }
    }

    return total;
}

// Calulating scores of various wins
int Yahtzee::threeOfAKind(int number) {

}

int Yahtzee::fourOfAKind(int number) {

}

int Yahtzee::fullHouse() {}

int Yahtzee::smallStraight() {}
int Yahtzee::largeStraight() {}
int Yahtzee::yahtzee() {}

int Yahtzee::chance() {}

void Yahtzee::sortDice() {
    vector<Die> dice = players.at(turn).dice;



}