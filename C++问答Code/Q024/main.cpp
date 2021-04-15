#include <iostream>

class Student{
public:
    Student(){//默认构造函数，没有参数
        std::cout << "---默认构造函数---" << std::endl;
        this->age = 20;
        this->num = 1000;
        std::cout << "age = " << this->age << " num = " << this->num << std::endl;
    };
    Student(int a, int n):age(a), num(n){ //初始化构造函数，有参数和参数列表
        std::cout << "---初始化构造函数---" << std::endl;
        std::cout << "age = " << this->age << " num = " << this->num << std::endl;
    };
    Student(const Student& s){//拷贝构造函数，这里与编译器生成的一致
        std::cout << "---拷贝构造函数---" << std::endl;
        this->age = s.age;
        this->num = s.num;
        std::cout << "age = " << this->age << " num = " << this->num << std::endl;
    };
    explicit Student(int r){   //转换构造函数,将int类型的r转换为Student类型的对象，对象的age为r，num为1004
        std::cout << "---转换构造函数---" << std::endl;
        this->age = r;
        this->num = 1004;
        std::cout << "age = " << this->age << " num = " << this->num << std::endl;
    };
    ~Student()= default;
public:
    int age;
    int num;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    //用默认构造函数初始化对象S1
    Student s1;
    //用初始化构造函数初始化对象S2
    Student s2(1002,18);
    Student  s3(s2);//将对象s2复制给s3。注意复制和赋值的概念不同
    Student s4;
    s4=s2;//这种情况叫做赋值
    std::cout << "s4 age = " << s4.age << " s4 num = " << s4.num << std::endl;
    int a = 10;
    Student s5(a);
    return 0;
}
