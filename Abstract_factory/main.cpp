#include "Game_factory.h"
#include <memory>

int main() {
    bool isMedieval = false;

    std::unique_ptr<GameFactory> factory;

    if (isMedieval) {
        factory = std::make_unique<MedievalFactory>();
    }
    else {
        factory = std::make_unique<SciFiFactory>();
    }

    auto hero = factory->createHero();
    auto weapon = factory->createWeapon();

    hero->display();
    weapon->use();

    return 0;
}