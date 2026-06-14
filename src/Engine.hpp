#pragma once

#include <string>
#include <stdexcept>
#include <ostream>

class Engine {
public:
    // コンストラクタ
    explicit Engine(const std::string& engine_name, int ver);
    
    // デフォルトコンストラクタを明示的に削除
    Engine() = delete;
    
    // ムーブセマンティクスのサポート
    Engine(Engine&& other) noexcept = default;
    Engine& operator=(Engine&& other) noexcept = default;
    
    // コピーの意図的な禁止（必要に応じて）
    Engine(const Engine&) = delete;
    Engine& operator=(const Engine&) = delete;
    
    // 仮想デストラクタ（継承を考慮）
    virtual ~Engine() = default;
    
    // パブリックメソッド
    void Boot();
    
    // ゲッター
    int GetVersion() const noexcept {
        return version;
    }
    
    const std::string& GetName() const noexcept {
        return name;
    }
    
    // ストリーム出力対応
    friend std::ostream& operator<<(std::ostream& os, const Engine& engine);

private:
    std::string name;
    int version;
};
