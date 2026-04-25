// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int answer = 0;
    int t = (int)time(nullptr);
    answer = t % 10;
    bool GameClear = false;
    while (!GameClear) {
        printf("数値を入力してください---\n");
        int input;
        scanf_s("%d", &input);
        int rank = 0;

        if (answer == input) {
            rank = 2;
            printf("一致！\n");
        }
        else if (answer < input) {
            printf("大きい！\n");
        }
        else if (answer > input) {
            printf("小さい！\n");
        }

        int sub = answer - input;

        if (sub > -3 && sub < 3 && sub != 0) {
            rank = 1;
            printf("惜しい！\n");
        }

        switch (rank) {
        case 2:
            printf("Sランク\n");
            break;
        case 1:
            printf("Aランク\n");
            break;
        default:
            printf("Bランク\n");
            break;
        }

        if (!GameClear) {
            printf("もう一度\n");
        }
        else {
            printf("ゲームクリア\n");
        }
    }

    return 0;
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
