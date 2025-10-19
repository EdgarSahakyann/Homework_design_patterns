#pragma once
#include <cstddef>

template <typename T>
struct Stack {
    virtual ~Stack() = default;

    virtual void push(const T&) = 0;
    virtual void pop() = 0;
    virtual void clear() = 0;
    virtual bool empty() const = 0;
    virtual size_t size() const = 0;
    virtual T top() = 0;
};
