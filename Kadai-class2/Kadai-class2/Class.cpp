#include "Class.h"
#include <string>
#include <iostream>

AAA::AAA() {

}

AAA::AAA(int A) {

}

AAA::AAA(const AAA& aaa) {
	std::cout << "コピーされた" << std::endl;
}

AAA::~AAA() {
	std::cout << "デクトラクタされた" << std::endl;
}