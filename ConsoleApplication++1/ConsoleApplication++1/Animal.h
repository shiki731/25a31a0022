#pragma once

#include <string>
#include <iostream>

// 動物クラス
class Animal final
{
public:
    Animal();

    // コンストラクタの宣言
    Animal(const char* name,int footNum);

public:
    std::string     name_ = {};
    int             footNum_ = 0;
};

