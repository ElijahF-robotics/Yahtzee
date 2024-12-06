//
// Created by Elijah Flader on 12/6/24.
//

#ifndef PLAYER_H
#define PLAYER_H

struct Player {
    string name;
    int score;
    int turn;

    vector<Die> dice;
};

#endif //PLAYER_H
