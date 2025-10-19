#pragma once
#include <memory>

class Hero {
public:
    virtual void display() = 0;
    virtual ~Hero() = default;
};

class Weapon {
public:
    virtual void use() = 0;
    virtual ~Weapon() = default;
};

class GameFactory {
public:
    virtual std::unique_ptr<Hero> createHero() = 0;
    virtual std::unique_ptr<Weapon> createWeapon() = 0;
    virtual ~GameFactory() = default;
};

class Knight : public Hero {
public:
    void display() override;
};

class Sword : public Weapon {
public:
    void use() override;
};

class SpaceMarine : public Hero {
public:
    void display() override;
};

class LaserGun : public Weapon {
public:
    void use() override;
};

class MedievalFactory : public GameFactory {
public:
    std::unique_ptr<Hero> createHero() override;
    std::unique_ptr<Weapon> createWeapon() override;
};

class SciFiFactory : public GameFactory {
public:
    std::unique_ptr<Hero> createHero() override;
    std::unique_ptr<Weapon> createWeapon() override;
};