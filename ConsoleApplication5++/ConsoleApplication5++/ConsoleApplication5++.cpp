// ConsoleApplication5++.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

// 自動車クラス
class Car
{
public:
    virtual void carry();
};

void Car::carry() {
    std::cout << "何かを運ぶ" << std::endl;
}

// タンクローリークラス
class Tank : public Car
{
public:
    void carry() override;
};

void Tank::carry() {
    std::cout << "燃料を運ぶ" << std::endl;
}

// ダンプカークラス
class Dump : public Car
{
public:
    void carry() override;
};

void Dump::carry() {
    std::cout << "土砂を運ぶ" << std::endl;
}
// エントリー関数
int main()
{
    Car* car = new Car;
    Car* tank = new Tank;
    Car* dump = new Dump;

    car->carry();
    tank->carry();
    dump->carry();

    delete car;
    delete tank;
    delete dump;
}

/*#include <iostream>

// 自動車クラス
class Car
{
public:
   // Car() { std::cout << "Car のコンストラクタが処理されました" << std::endl; }
   // ~Car() { std::cout << "Car のデストラクタが処理されました" << std::endl; }


public:
    // エンジンを始動する
    void startEngine()
    {
        std::cout << "エンジンを始動する" << std::endl;
        running_ = true;
    }

    // エンジンを停止する
    void stopEngine()
    {
        std::cout << "エンジンを停止する" << std::endl;
        running_ = false;
    }

    virtual void carry();

protected:
    bool running_ = false; // エンジンが動いている

};

void Car::carry() 
{
    std::cout << "何かを運ぶ" << std::endl;
}

// タンクローリークラス
class Tank : public Car
{
public:
   // Tank() { std::cout << "Tank のコンストラクタが処理されました" << std::endl; }
   // ~Tank() { std::cout << "Tank のデストラクタが処理されました" << std::endl; }

    void carry() override;

public:
    // 燃料を送出する
    void pumpOut()
    {
        // running_ を宣言しているのは Car クラスだが、
        // Tank クラスが Car クラスを継承している為利用できる
        if (running_) {
            std::cout << "エンジンが動いているので燃料の送出は危険" << std::endl;
        }
        else
        {
            std::cout << "燃料を送出する" << std::endl;
        }
    }

};

void Tank::carry() 
{
    std::cout << "燃料を運ぶ" << std::endl;
}

// エントリー関数
int main()
{
    {
        Tank* tank = new Tank;
        // Tank のアドレスを Car ポインタで受け取る事が出来る
        Car* car = tank;

        // Car の carry() が呼び出される
        car->carry();
        // Car に 宣言されていないのでコンパイルエラー
        // car->pumpOut();

        delete tank;
    }
    /*
    Car car;
    car.carry();
    // 車のエンジンを始動する
    car.startEngine();

    Tank tank;
    tank.carry();
    // startEngine() と stopEngine() を定義しているのは Car クラスだが、
    // Tank クラスが Car クラスを継承している為利用できる
    tank.startEngine();
    tank.stopEngine();

    // 当然 Tank クラスで定義した関数は呼び出せる
    tank.pumpOut();
    
}
*/
// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
