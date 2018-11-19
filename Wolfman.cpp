//
// Created by neo on 2018/11/20.
//

#include "Wolfman.h"

Wolfman::Wolfman(int breed, int blood) : Creature(breed, blood) {}

void Wolfman::swallow() {
    blood += 8;
}

void Wolfman::battle() {
    const auto powStrength = getPowStrength();
    if (blood > powStrength) {
        blood -= powStrength;
        score += powStrength;
    }
}

int Wolfman::getPowStrength() const { return breed / 20 + 2; }

