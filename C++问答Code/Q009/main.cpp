#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a,b;
    int * const p1=&a; //常量指针 不能中途改变指向
    *p1=9;//操作成功
    //p=&b;//操作错误
    const int *p2=&a; // 指针常量 指向一个只读变量
    //那么分为一下两种操作
    //*p2=9;//操作错误
    p2=&b;//操作成功
    return 0;
}
