#pragma once

class Singleton {
public:
    Singleton(const Singleton&) = delete;
    Singleton(Singleton&& instance) noexcept = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton& operator=(Singleton&&) noexcept = delete;

    static Singleton& getInstance();
    void doSomething();

private:
    Singleton();
    ~Singleton();
};