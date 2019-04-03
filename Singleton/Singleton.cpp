//
// Created by 1world0x00 on 2019-04-03.
//

#include "Singleton.h"
#include <iostream>
#include <mutex>
using namespace std;

Singleton* Singleton::_inst = 0;
int Singleton::count = 0;

Singleton::Singleton() {
    cout << "Singleton" << endl;
}


Singleton* Singleton::getInstance() {
    mutex mtx;
    mtx.lock();
    if(_inst == 0){
        _inst = new Singleton();
        count++;
        cout << count << endl;
    }
    mtx.unlock();
    return _inst;
}