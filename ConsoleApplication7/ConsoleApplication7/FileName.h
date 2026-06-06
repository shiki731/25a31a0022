#pragma once
#include <iostream>

// 動物クラス
class Animal final
{
public:
    // コピー代入演算子オーバーロード
    Animal& operator =(const Animal& animal);

public:
    std::string     name_ = {};
    int             footNum_ = 0;
};
