// kadai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

int point[5];

bool PCheck[5];

int Kekka = 0;

int main()
{
    //乱数生成
    srand((unsigned int)time(NULL));

    int A = rand() % 101;
    int B = rand() % 101;
    int C = rand() % 101;
    int D = rand() % 101;
    int E = rand() % 101;

    int total = A + B + C + D + E;
    float avarage = (float)total / 5.0f;

    //結果表示
    printf("国語:%d / 英語:%d / 数学:%d / 理科:%d / 社会:%d\n", A,B,C,D,E);
    printf("合計: %d点 / 平均: %.1f点\n", total, avarage);

    const int PassScore = 40;//合格点は４０

        bool PassA = (PassScore <= A);
        bool PassB = (PassScore <= B);
        bool PassC = (PassScore <= C);
        bool PassD = (PassScore <= D);
        bool PassE = (PassScore <= E);

        bool PassAll = PassA && PassB && PassC && PassD && PassE;

        const float PassAvarage = 60.0f;
        if (PassAvarage <= avarage && PassAll) {
            printf("合格\n");
    }
        else {
            printf("不合格\n");
            if (avarage < PassAvarage) {
                printf("平均点が60未満です\n");
            }

            if (!PassA) {printf("国語が40未満です\n");}
            if (!PassB) {printf("英語が40未満です\n");}
            if (!PassC) {printf("数学が40未満です\n");}
            if (!PassD) {printf("理科が40未満です\n");}
            if (!PassE) {printf("社会が40未満です\n");}
        }

}

/*srand((unsigned int)time(NULL));

for (int i = 0; i < 5; i++)
{
    point[i] = rand() % 100 + 1;
    printf("点数は%dです\n", point[i]);
}

int Sum = point[0] + point[1] + point[2] + point[3] + point[4];
int Ave = (point[0] + point[1] + point[2] + point[3] + point[4]) / 5;

printf("合計は%dです\n", Sum);
printf("平均は%dです\n", Ave);


for (int i = 0; i < 5; i++) {
    if (point[i] >= 60) {
        if (point[i] >= 40) {
            PCheck[i] = true;
        }
    }
}

for (int i = 0; i < 5; i++) {
    if (PCheck[i] == true) {
        Kekka += 1;
    }
}

if (Kekka >= 5) {
    printf("合格\n");
}
else {
    printf("不合格\n");
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
