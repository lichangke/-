#include <iostream>

void testPointer1(int* p) {

    std::cout << "testPointer1 *p = " << *p << std::endl;
    std::cout << "testPointer1 p = " << p << std::endl;
	int a = 12;
	p = &a;
    std::cout << "testPointer1 *p = " << *p << std::endl;
    std::cout << "testPointer1 p = " << p << std::endl;

}

void testPointer2(int* p) {

    std::cout << "testPointer2 *p = " << *p << std::endl;
    std::cout << "testPointer2 p = " << p << std::endl;
    int a = 12;
    *p = a; // 改变指向的内容
    std::cout << "testPointer2 *p = " << *p << std::endl;
    std::cout << "testPointer2 p = " << p << std::endl;

}

void testReference(int& p) {
	int a = 12;
	p = a;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a = 1024;
    int* b = &a;
    std::cout << "---testPointer1---" << std::endl;
    std::cout << "b = " << b << std::endl;
    testPointer1(b);//指针作为参数进行传递时，也是将实参的一个拷贝传递给形参，两者指向的地址相同，但不是同一个变量
    std::cout << "a = " << a << std::endl;
    std::cout << "*b = " << *b << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << "---testPointer2---" << std::endl;
    testPointer2(b);
    std::cout << "a = " << a << std::endl;
    std::cout << "*b = " << *b << std::endl;
    std::cout << "b = " << b << std::endl;

    a = 10;
    std::cout << "---testReference---" << std::endl;
    testReference(a);
    std::cout << "a = " << a <<  std::endl;


    return 0;
}
