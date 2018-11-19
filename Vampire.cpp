//
// Created by neo on 2018/11/20.
//

#include "Vampire.h"

Vampire::Vampire(int breed, int blood) : Creature(breed, blood) {}

void Vampire::swallow() {
    blood += 10;
}
