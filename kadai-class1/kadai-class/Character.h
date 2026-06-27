#pragma once

#include <string>

class Character {
private:
    std::string name_;
    int hp_;
    int attack_;
public:
    void setParam(const std::string& name, int hp, int attack);

    void printStatus() const;
};