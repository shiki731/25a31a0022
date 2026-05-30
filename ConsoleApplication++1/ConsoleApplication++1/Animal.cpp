#include "Animal.h"

// コンストラクタの定義
Animal::Animal()
{
    std::cout << "コンストラクタが呼ばれました" << std::endl;
    name_ = "動物";
    footNum_ = 4;
}

Animal::Animal(const char* A,int b)
{
    std::cout << "コンストラクタが呼ばれました" << std::endl;
    name_ = "動物";
    footNum_ = 4;
}

int main() {

}