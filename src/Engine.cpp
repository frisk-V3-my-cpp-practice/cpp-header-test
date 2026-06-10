#include "Engine.hpp"
#include <iostream>

//コンストラクタ実装
Engine::Engine(const std::string& engine_name, int ver)
    : name(engine_name), version(ver) {}

//関数の実装
void Engine::Boot(){
    std::cout << name << " v" << version << "を起動中...\n";
}
