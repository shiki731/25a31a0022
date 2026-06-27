#include "Kozotai.h"
#include <iostream>
#include <string>

void printStatus(Parameter Param) {
    printf("Name: %s\n", Param.name);
    printf("HP: %d\n", Param.hp);
    printf("Attack: %d\n", Param.attack);
    printf("Defence: %d\n", Param.defence);
};