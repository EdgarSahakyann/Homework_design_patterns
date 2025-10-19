#include "Game_factory.h"
#include <iostream>

void Knight::display() {
    std::cout << "Knight enters the battlefield" << std::endl;
}

void Sword::use() {
    std::cout << "Sword cuts the enemy!" << std::endl;
}

void SpaceMarine::display() {
    std::cout << "Space Marine drops from orbit." << std::endl;
}

void LaserGun::use() {
    std::cout << "Laser gun fires a laser!" << std::endl;
}

std::unique_ptr<Hero> MedievalFactory::createHero() {
    return std::make_unique<Knight>();
}

std::unique_ptr<Weapon> MedievalFactory::createWeapon() {
    return std::make_unique<Sword>();
}

std::unique_ptr<Hero> SciFiFactory::createHero() {
    return std::make_unique<SpaceMarine>();
}

std::unique_ptr<Weapon> SciFiFactory::createWeapon() {
    return std::make_unique<LaserGun>();
}