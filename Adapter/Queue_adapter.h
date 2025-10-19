#pragma once
#include "Queue.h"
#include "Array_stack.h"

template <typename T>
class QueueAdapter : public Queue<T> {
private:
    ArrayStack<T> inStack;
    ArrayStack<T> outStack;

    void transfer() {
        while (!inStack.empty()) {
            outStack.push(inStack.top());
            inStack.pop();
        }
    }

public:
    QueueAdapter(size_t capacity)
        : inStack(capacity), outStack(capacity) {}

    void enqueue(const T& value) override {
        inStack.push(value);
    }

    void dequeue() override {
        if (outStack.empty()) {
            transfer();
        }
        if (!outStack.empty()) {
            outStack.pop();
        }
    }

    T front() override {
        if (outStack.empty()) {
            transfer();
        }
        return outStack.top();
    }

    bool empty() const override {
        return inStack.empty() && outStack.empty();
    }

    size_t size() const override {
        return inStack.size() + outStack.size();
    }
};