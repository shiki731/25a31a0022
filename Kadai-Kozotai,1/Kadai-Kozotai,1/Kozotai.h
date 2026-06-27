#pragma once
#include <string>

struct Parameter {
	char name[32];
	int hp;
	int attack;
	int defence;
};

void printStatus(Parameter Param);