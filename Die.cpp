//
// Created by Elijah Flader on 12/6/24.
//

#include <cstdlib>
#include <iostream>

#include "Die.h"

using namespace std;

Die::Die() {
    srand(time(0));
    sides = 6;
    faceValue = roll();
}

Die::Die(int newSides) {
    srand(time(0));
    sides = newSides >= 2 ? newSides : 6;
    faceValue = roll();
}

void Die::setSides(const int newSides) {
    if (newSides >= 2) {
        sides = newSides;
        faceValue = roll();
    }
}

int Die::getSides() const{
    return sides;
}

int Die::getFaceValue() const{
    return faceValue;
}

int Die::roll() {
    faceValue = rand() % sides+1;
    return faceValue;
}

void Die::print() const {
    // Output face value
    cout << "faceValue: " << faceValue << endl;

    // Example dice, with indexes:
    //  -------
    // | 0   1 |
    // | 2 3 4 |
    // | 5   6 |
    //  -------

    for (string line: getPrintStrings()) {
        cout << line << endl;
    }
    cout << endl;
}

vector<string> Die::getPrintStrings() const {
    bool faces[] = {false, false, false, false, false, false, false};
    vector<string> returnVector;

    switch (faceValue) {
        case 1:
            faces[3] = true;
        break;
        case 2:
            faces[0] = true;
        faces[6] = true;
        break;
        case 3:
            faces[0] = true;
        faces[3] = true;
        faces[6] = true;
        break;
        case 4:
            faces[0] = true;
        faces[1] = true;
        faces[5] = true;
        faces[6] = true;
        break;
        case 5:
            faces[0] = true;
        faces[1] = true;
        faces[3] = true;
        faces[5] = true;
        faces[6] = true;
        break;
        case 6:
            faces[0] = true;
        faces[1] = true;
        faces[2] = true;
        faces[4] = true;
        faces[5] = true;
        faces[6] = true;
        break;
        default:
            break;
    }

    if (faceValue > 0 && faceValue <= 6) {
        // Example dice, with indexes:
        //  -------
        // | 0   1 |
        // | 2 3 4 |
        // | 5   6 |
        //  -------
        string dots[7];

        for (int i = 0; i < 7; i++) {
            dots[i] = faces[i] ? "0" : " ";
        }


        returnVector.push_back(" -------");

        returnVector.push_back("| " + dots[0] + "   " + dots[1] + " |");
        returnVector.push_back("| " + dots[2] + " " + dots[3] + " " + dots[4] + " |");
        returnVector.push_back("| " + dots[5] + "   " + dots[6] + " |");

        returnVector.push_back(" -------");
    }

    return returnVector;
}

bool operator ==(Die die1, Die die2) {
    if (die1.faceValue == die2.faceValue) {
        return true;
    }
    return false;
}
