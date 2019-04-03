//
// Created by 1world0x00 on 2019-04-03.
//

#ifndef DESIGN_PATTERN_SINGLETON_H
#define DESIGN_PATTERN_SINGLETON_H


class Singleton {
public:
    static Singleton* getInstance();
    static int count;

private:
    Singleton();
    Singleton(const Singleton&){};
    Singleton& operator=(const Singleton&){};
    static Singleton* _inst;
};


#endif //DESIGN_PATTERN_SINGLETON_H
