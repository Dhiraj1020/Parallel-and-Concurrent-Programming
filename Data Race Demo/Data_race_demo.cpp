#include <iostream>
#include <thread>

unsigned int g_Counter = 0;

void CounterThread()
{
    for(int i = 0 ; i < 1000000 ; i++)
        g_Counter++;
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

\Parallel-and-Concurrent-Programming\Mutex\Data Race Demo>Data_Race_Demo.exe
Count is : 1031719

\Parallel-and-Concurrent-Programming\Mutex\Data Race Demo>Data_Race_Demo.exe
Count is : 1029001

\Parallel-and-Concurrent-Programming\Mutex\Data Race Demo>Data_Race_Demo.exe
Count is : 1184627

\Parallel-and-Concurrent-Programming\Mutex\Data Race Demo>Data_Race_Demo.exe
Count is : 1045225

 */