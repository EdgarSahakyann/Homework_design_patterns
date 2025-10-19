#pragma once
#include <cstddef>

template <typename T>
struct Queue {
    virtual ~Queue() = default;
    virtual void enqueue(const T&) = 0;
    virtual void dequeue() = 0;
    virtual T front() = 0;
    virtual bool empty() const = 0;
    virtual size_t size() const = 0;
};
