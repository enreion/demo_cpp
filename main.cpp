#include <iostream>
#include "Vampire.h"
#include "Wolfman.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Vampire* vampire = new Vampire(99, 1000);
    Wolfman wolfman(98, 3000);
    std::cout << *vampire << std::endl;
    std::cout << wolfman << std::endl;

    std::string prevTrait = vampire->setTrait("bloodthirsty");
    std::string trait = vampire->getTrait();

    return 0;
}