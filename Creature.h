//
// Created by neo on 2018/11/19.
//

#ifndef DEMO_CPP_CREATURE_H
#define DEMO_CPP_CREATURE_H


#include <string>
#include <tuple>
#include <ostream>

class Creature {
    std::string trait;
protected:
    int blood=100;
    int breed;
    int score;
public:
    Creature(int breed, int blood);
    virtual void swallow()=0;

    const std::string &getTrait() const;

    std::string setTrait(const std::string &trait);

    friend std::ostream &operator<<(std::ostream &os, const Creature &creature);

    bool operator<(const Creature &rhs) const;

    bool operator>(const Creature &rhs) const;

    bool operator<=(const Creature &rhs) const;

    bool operator>=(const Creature &rhs) const;

    bool operator==(const Creature &rhs) const {
        return std::tie(breed, blood, trait) == std::tie(rhs.breed, rhs.blood, rhs.trait);
    }

    bool operator!=(const Creature &rhs) const {
        return !(rhs == *this);
    }

    int getBreed() const;

    void setBreed(int breed);

    int getBlood() const;

    void setBlood(int blood);
};


#endif //DEMO_CPP_CREATURE_H
