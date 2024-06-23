#include <cstdio>
#include <thread>
#include <mutex>


unsigned int pen_count = 0;
unsigned int student_count = 0;
std::mutex pencil;

void add_pen() {
    pencil.lock();
    pen_count++;
    pencil.unlock();
}

void add_student() {
    pencil.lock();
    student_count++;
    add_pen();
    pencil.unlock();
}

void shopper() {
    for (int i=0; i<10000; i++) {
        add_student();
        add_pen();
    }
}

int main() {
    std::thread t1(shopper);
    std::thread t2(shopper);
    t1.join();
    t2.join();
    printf("We should buy %u pen.\n", pen_count);
    printf("We should for %u student.\n", student_count);
}

/*
Output : 

stuck

*/