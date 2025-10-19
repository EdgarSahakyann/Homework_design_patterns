#include <iostream>
#include "Queue_adapter.h"

int main() {
    QueueAdapter<int> queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Front: " << queue.front() << std::endl;

    queue.dequeue();

    std::cout << "Front after dequeue: " << queue.front() << std::endl;

    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60);

    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.dequeue();
    }

    std::cout << std::endl;

    return 0;
}
