//
// Created by neo on 2018/11/19.
//

#include "Creature.h"

Creature::Creature(int breed, int blood) : breed(breed), blood(blood) {}

int Creature::getBreed() const {
    return breed;
}

void Creature::setBreed(int breed) {
    Creature::breed = breed;
}

int Creature::getBlood() const {
    return blood;
}

void Creature::setBlood(int blood) {
    Creature::blood = blood;
}

bool Creature::operator<(const Creature &rhs) const {
    return std::tie(breed, blood, trait) < std::tie(rhs.breed, rhs.blood, rhs.trait);
}

bool Creature::operator>(const Creature &rhs) const {
    return rhs < *this;
}

bool Creature::operator<=(const Creature &rhs) const {
    return !(rhs < *this);
}

bool Creature::operator>=(const Creature &rhs) const {
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const Creature &creature) {
    os << "breed: " << creature.breed << " blood: " << creature.blood << " trait: " << creature.trait;
    return os;
}

const std::string &Creature::getTrait() const {
    return trait;
}

std::string Creature::setTrait(const std::string &trait) {
    std::string prevTrait=trait;
    Creature::trait = trait;
    return prevTrait;
}
