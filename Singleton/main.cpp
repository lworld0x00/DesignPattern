#include <iostream>
#include <thread>
#include <future>
#include "Singleton.h"
using namespace std;
void getSingletonInstance(){
    cout << Singleton::getInstance() << endl;
}
int main() {

    thread threads[10];
    for(int i = 0; i < 10; ++i)
        threads[i] = thread(getSingletonInstance);
    for(auto& t : threads)
        t.join();
    return 0;
}