#include "Engine.hpp"

int main() {
    // 1. Engineクラスのオブジェクトを作る
    Engine myEngine("MyTestEngine", 1);

    // 2. メンバ関数を呼び出してテストする
    myEngine.Boot();

    return 0;
}
