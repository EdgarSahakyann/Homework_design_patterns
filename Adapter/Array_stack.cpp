#include "Array_stack.h"
#include <stdexcept>
#include <algorithm>

template <typename T>
ArrayStack<T>::ArrayStack(size_t capacity)
    : m_size(0), m_cap(capacity), m_val(new T[capacity]) {}

template <typename T>
ArrayStack<T>::ArrayStack(const ArrayStack& other)
    : m_size(other.m_size), m_cap(other.m_cap), m_val(new T[other.m_cap]) {
    for (size_t i = 0; i < m_size; ++i) {
        m_val[i] = other.m_val[i];
    }
}

template <typename T>
ArrayStack<T>::ArrayStack(ArrayStack&& other) noexcept
    : m_size(0), m_cap(0), m_val(nullptr) {
    std::swap(m_size, other.m_size);
    std::swap(m_cap, other.m_cap);
    std::swap(m_val, other.m_val);
}

template <typename T>
ArrayStack<T>::~ArrayStack() {
    delete[] m_val;
}

template <typename T>
ArrayStack<T>& ArrayStack<T>::operator=(const ArrayStack& other) {
    if (this != &other) {
        T* newVal = new T[other.m_cap];
        for (size_t i = 0; i < other.m_size; ++i) {
            newVal[i] = other.m_val[i];
        }

        delete[] m_val;
        m_val = newVal;
        m_size = other.m_size;
        m_cap = other.m_cap;
    }
    return *this;
}

template <typename T>
ArrayStack<T>& ArrayStack<T>::operator=(ArrayStack&& other) noexcept {
    if (this != &other) {
        delete[] m_val;
        m_val = other.m_val;
        m_size = other.m_size;
        m_cap = other.m_cap;

        other.m_val = nullptr;
        other.m_size = 0;
        other.m_cap = 0;
    }
    return *this;
}

template <typename T>
void ArrayStack<T>::push(const T& value) {
    if (m_size >= m_cap) {
        m_cap = m_cap == 0 ? 1 : m_cap * 2;
        T* newVal = new T[m_cap];
        for (size_t i = 0; i < m_size; ++i) {
            newVal[i] = m_val[i];
        }
        delete[] m_val;
        m_val = newVal;
    }
    m_val[m_size++] = value;
}

template <typename T>
void ArrayStack<T>::pop() {
    if (!empty()) {
        --m_size;
    }
}

template <typename T>
void ArrayStack<T>::clear() {
    m_size = 0;
}

template <typename T>
bool ArrayStack<T>::empty() const {
    return m_size == 0;
}

template <typename T>
size_t ArrayStack<T>::size() const {
    return m_size;
}

template <typename T>
T ArrayStack<T>::top() {
    if (empty()) throw std::out_of_range("Stack is empty");
    return m_val[m_size - 1];
}