//
// Created by neo on 2018/11/20.
//

#ifndef DEMO_CPP_VAMPIRE_H
#define DEMO_CPP_VAMPIRE_H


#include "Creature.h"

class Vampire : public Creature {
public:
    Vampire(int breed, int blood);

    void swallow() override;
};


#endif //DEMO_CPP_VAMPIRE_H
