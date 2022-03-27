#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) {
    this->type = type;
};

Weapon::Weapon(){};

Weapon::~Weapon() {};

std::string const & Weapon::getType() {
    return this->type;
};

void    Weapon::setType(std::string type) {
    this->type = type;
}