#include <cstdio>
#include <thread>
#include <mutex>

int sushi_count = 5000;

void philosopher(std::mutex &first_chopstick, std::mutex &second_chopstick) {
    while (sushi_count > 0) {
        first_chopstick.lock();
        second_chopstick.lock();
        if (sushi_count) {
            sushi_count--;
        }
        second_chopstick.unlock();
        first_chopstick.unlock();
    }
}

int main() {
    std::mutex chopstick_a, chopstick_b;
    std::thread Dhiraj(philosopher, std::ref(chopstick_a), std::ref(chopstick_b));
    std::thread Kunal(philosopher, std::ref(chopstick_b), std::ref(chopstick_a));
    Dhiraj.join();
    Kunal.join();
    printf("The philosophers are done eating.\n");
}

/*

output : 
exe will stuck

*/