#include <cstdio>
#include <thread>
#include <mutex>

int sushi_count = 5000;

void philosopher(std::mutex &first_chopstick, std::mutex &second_chopstick) {
    while (sushi_count > 0) {
        std::scoped_lock lock(first_chopstick, second_chopstick);
        if (sushi_count) {
            sushi_count--;
        }
    }
}

int main() {
    std::mutex chopstick_a, chopstick_b;
    std::thread Kunal(philosopher, std::ref(chopstick_a), std::ref(chopstick_b));
    std::thread Dhiraj(philosopher, std::ref(chopstick_b), std::ref(chopstick_a));
    Kunal.join();
    Dhiraj.join();
    printf("The philosophers are done eating.\n");
}