//
// Created by Elijah Flader on 12/6/24.
//

#ifndef DIE_H
#define DIE_H

#include <vector>
#include <string>

using namespace std;

class Die {
public:
    Die();
    Die(int newSides);

    void setSides(int newSides);

    int getSides() const;
    int getFaceValue() const;

    int roll();
    void print() const;

    vector<string> getPrintStrings() const;

    friend bool operator ==(Die die1, Die die2);
private:
    int faceValue;
    int sides;
};

#endif //DIE_H
