// Kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int FifHund;
int OneHund;
int Fif;
int Ten;
int Five;
int One;

int main()
{
    printf("1以上の整数を入力してください\n");
    int input;
    scanf_s("%d", &input);

    FifHund = input / 500;
    int A = input % 500;

    OneHund = A / 100;
    int B = A % 100;

    Fif = B / 50;
    int C = B % 50;

    Ten = C / 10;
    int D = C % 10;

    Five = D / 5;
    int E = D % 5;

    One = E / 1;
    int F = E % 1;

    if (A != 0) {
        printf("500円: %d 枚\n", FifHund);
    }
    if (B != 0) {
        printf("100円: %d 枚\n", OneHund);
    }
    if (C != 0) {
        printf("50円: %d 枚\n", Fif);
    }
    if (D != 0) {
        printf("10円: %d 枚\n", Ten);
    }
    if (E != 0) {
        printf("5円: %d 枚\n", Five);
    }
    if (F != 0) {
        printf("1円: %d 枚\n", One);
    }

    //printf("500円: %d 枚 / 100円: %d 枚 / 50円: %d 枚 / 10円: %d 枚 / 5円: %d 枚 / 1円: %d 枚", FifHund, OneHund, Fif, Ten, Five, One);
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
