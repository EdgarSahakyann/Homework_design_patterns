#pragma once
#include "Stack.h"

template <typename T>
class ArrayStack : public Stack<T> {
public:
    ArrayStack(size_t capacity);
    ArrayStack(const ArrayStack&);
    ArrayStack(ArrayStack&&) noexcept;
    ~ArrayStack();

    ArrayStack<T>& operator=(const ArrayStack&);
    ArrayStack<T>& operator=(ArrayStack&&) noexcept;

    void push(const T&) override;
    void pop() override;
    void clear() override;
    bool empty() const override;
    size_t size() const override;
    T top() override;

private:
    size_t m_size;
    size_t m_cap;
    T* m_val;
};