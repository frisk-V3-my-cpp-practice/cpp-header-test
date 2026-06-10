#include "Engine.hpp"
#include <iostream>

int main() {
    Engine myEngine("TestEngine", 1);
    myEngine.Boot();
    std::cout << "取得したバージョン: " << myEngine.GetVersion() << "\n";

    std::cin.get(); 

    return 0;
}
