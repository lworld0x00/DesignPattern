//
// Created by 1world0x00 on 2019-04-03.
//

#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;

Factory::Factory() {

}
Factory::~Factory() {

}
ConcreteFactory::ConcreteFactory() {
    cout << "ConcreteFactory" << endl;
}
ConcreteFactory::~ConcreteFactory() {

}
Product* ConcreteFactory::CreateProduct() {
    return new ConcreteProduct();
}