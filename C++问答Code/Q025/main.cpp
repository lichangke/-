#include <iostream>
#include <cstring>

class Student
{
private:
    char *name;
public:
    Student(){
        name = new char(20);
        std::cout << "Student" << std::endl;
    };
    ~Student(){
        std::cout << "~Student " << &name << std::endl;
        delete name;
        name = nullptr;
    };
    Student(const Student &s){//拷贝构造函数
//        //浅拷贝，当对象的name和传入对象的name指向相同的地址
//        std::cout << "浅拷贝 Student" << std::endl;
//        name = s.name;

        //深拷贝
        std::cout << "深拷贝 Student" << std::endl;
        name = new char(20);
        memcpy(name, s.name, strlen(s.name));

    };
};

int main()
{
    Student s1;
    Student s2(s1);// 复制对象

    return 0;
}
