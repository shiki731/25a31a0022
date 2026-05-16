// ConsoleApplication5.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

struct Parameter
{
    int hp;
    int mp;
    char speed;
    int pow;
    int def;
    float magic;
};

void DispParam(Parameter chara) {
    printf("HP:%d\n", chara.hp);
    printf("MP:%d\n", chara.mp);
    printf("素早さ:%c\n", chara.speed);
    printf("攻撃力:%d\n", chara.pow);
    printf("防御力:%d\n", chara.def);
    printf("魔力:%2.1f\n", chara.magic);
}

int main()
{
    Parameter playerParam;
    playerParam.hp = 100;
    playerParam.mp = 50;
    playerParam.speed = 'B';
    playerParam.pow = 11;
    playerParam.def = 15;
    playerParam.magic = 20.5;

    DispParam(playerParam);

    Parameter enemyParam = {
        30,10,'C',5,2,1.5
    };
    DispParam(enemyParam);

    Parameter p;
    int paramSize = sizeof(p);
    printf("Parameterのサイズは%d\n", paramSize);
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
