//
// Created by 1world0x00 on 2019-04-03.
//

#ifndef FACTORY_PRODUCT_H
#define FACTORY_PRODUCT_H


class Product {
public:
    virtual ~Product() = 0;

protected:
    Product();
};

class ConcreteProduct:public Product{
public:
    ConcreteProduct();
    ~ConcreteProduct();
};


#endif //FACTORY_PRODUCT_H
