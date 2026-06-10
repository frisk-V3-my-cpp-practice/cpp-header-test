#pragma once
#include <string>

class Engine{
private:
    std::string name;
    int version;

public:
    //コンストラクタの宣言
    Engine(const std::string& engine_name, int ver);

    //メンバ関数の宣言
    void Boot();

    //イントライン関数
    int GetVersion() const { return version; }
};
