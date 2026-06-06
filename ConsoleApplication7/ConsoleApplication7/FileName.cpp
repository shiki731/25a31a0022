#include "FileName.h"

// コピー代入演算子オーバーロード
Animal& Animal::operator =(const Animal& src)
{
    // 引数で受け取ったインスタンス（参照）の内容で上書きする
    name_ = src.name_;
    footNum_ = src.footNum_;

    // 自分自身の参照を返す
    return *this;
}