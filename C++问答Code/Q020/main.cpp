#include <iostream>

// 不将基类的析构函数声明为虚函数：
class Base1
{
public:
    ~Base1(){
        std::cout << __FUNCTION__ << std::endl;
    }
};

class A : public Base1
{
public:
    ~A(){
        std::cout << __FUNCTION__ << std::endl;
    }
};

// 将基类的析构函数声明为虚函数：
class Base2
{
public:
    virtual ~Base2(){
        std::cout << __FUNCTION__ << std::endl;
    }
};

class B : public Base2
{
public:
    ~B() override{
        std::cout << __FUNCTION__ << std::endl;
    }
};

int main() {
    std::cout << "Test 不将基类的析构函数声明为虚函数：" << std::endl;
    Base1 *test1 = new A;
    delete test1; // ~Base1
    test1 = nullptr;
    std::cout << "Test 将基类的析构函数声明为虚函数：" << std::endl;
    Base2 *test2 = new B;
    delete test2; // ~B ~Base2
    test2 = nullptr;

    return 0;
}
