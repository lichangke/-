#include <iostream>

class Test{
public:
    explicit Test(int num){
        m_num = num;
        std::cout << "Test 构造函数 .. " << m_num << std::endl;
    }
    ~Test(){
        std::cout << "Test 析构函数 .. " << m_num << std::endl;
    }
    void show(){
        std::cout << "Test show函数 .. " << m_num << std::endl;
    }

public:
    int m_num;
};

Test g_test(1);

void fn1()
{
    std::cout << "calls fn1" << std::endl;
}

int main() {

    atexit(fn1);

    std::cout << "main int" << std::endl;

    std::cout << "=======" << std::endl;
    g_test.show();

    std::cout << "=======" << std::endl;
    Test test(2);
    test.show();

    std::cout << "main out" << std::endl;
    return 0;
}
