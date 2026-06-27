#include <iostream>
#include"Character.h"

void Character::setParam(const std::string& name, int hp, int attack) {
	name_ = name;
	hp_ = hp;
	attack_ = attack;
}

void Character::printStatus() const {
	std::cout << name_ << std::endl;
	std::cout << hp_ << std::endl;
	std::cout << attack_ << std::endl;
}