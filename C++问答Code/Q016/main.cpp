#include <iostream>

class Base
{
    virtual void print();
};

void Base::print() {
    std::cout << "Base::print" << std::endl;
}


class A : public Base
{
    void print() final; // final修饰函数, print 被override并且是最后一个override，在其子类中不可以重写
};

void A::print() {
    std::cout << "A::print" << std::endl;
}

class B final : A // final修饰类 指明B是不可以被继承的
{
    void print() override; // error: overriding final function ‘virtual void A::print()’
};

class C : B // error: cannot derive from ‘final’ base ‘B’ in derived type ‘C’
{
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
