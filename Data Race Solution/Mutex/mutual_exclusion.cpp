#include <iostream>
#include <thread>
#include <mutex>

std::mutex g_PenMtx;

unsigned int g_Counter = 0;

void CounterThread()
{
    for(int i = 0 ; i < 1000000 ; i++)
    {
        g_PenMtx.lock();
        g_Counter++;
        g_PenMtx.unlock();
    }
}


int main(void)
{
    std::thread t1(CounterThread);
    std::thread t2(CounterThread);

    t1.join();
    t2.join();

    std::cout << "Count is : " << g_Counter << std::endl;

    return 0;
}

/*
OUTPUT :

\Parallel-and-Concurrent-Programming\Mutex\Data Race Solution>mutual_exclusion.exe
Count is : 2000000

\Parallel-and-Concurrent-Programming\Mutex\Data Race Solution>mutual_exclusion.exe
Count is : 2000000

\Parallel-and-Concurrent-Programming\Mutex\Data Race Solution>mutual_exclusion.exe
Count is : 2000000

 */