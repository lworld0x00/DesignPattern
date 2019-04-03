#include <iostream>
#include "Factory.h"
#include "Product.h"
using namespace std;

int main() {
    Factory* fac = new ConcreteFactory();
    Product* p = fac->CreateProduct();
    return 0;
}