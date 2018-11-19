//
// Created by neo on 2018/11/20.
//

#ifndef DEMO_CPP_WOLFMAN_H
#define DEMO_CPP_WOLFMAN_H


#include "Creature.h"

class Wolfman : public Creature {
public:
    Wolfman(int breed, int blood);
    void battle();
    void swallow() override;

    int getPowStrength() const;
};


#endif //DEMO_CPP_WOLFMAN_H
