//
// Created by 1world0x00 on 2019-04-03.
//

#ifndef FACTORY_FACTORY_H
#define FACTORY_FACTORY_H

#include "Product.h"
class Product;

class Factory {
public:
    virtual ~Factory() = 0;

    virtual Product* CreateProduct() = 0;

protected:
    Factory();
};
class ConcreteFactory:public Factory{
public:
    ConcreteFactory();
    ~ConcreteFactory();
    Product* CreateProduct();
};

#endif //FACTORY_FACTORY_H
