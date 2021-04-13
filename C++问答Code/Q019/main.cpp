#include <iostream>
#include <cstring>

template<typename T> //函数模板
int compare(const T &v1,const T &v2)
{
    std::cout << __FUNCTION__ << std::endl;
    if(v1 > v2) return -1;
    if(v2 > v1) return 1;
    return 0;
}

//模板特例化,满足针对字符串特定的比较，要提供所有实参，这里只有一个T
template<>
int compare(const char* const &v1,const char* const &v2)
{
    std::cout << __FUNCTION__ << std::endl;
    return strcmp(v1,v2);
}

template<typename T>class Foo
{
public:
    void Bar(){
        std::cout << __FUNCTION__ << std::endl;
    }
};
template<> // 我们正在特例化一个模板
void Foo<int>::Bar() // 特例化Foo<int>的成员Bar
{
    //进行int类型的特例化处理
    std::cout << "void Foo<int>::Bar" << __FUNCTION__ << std::endl;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    compare(1,2);
    std::string s1 = "hi";
    std::string s2 = "hello";
    compare(s1.c_str(),s2.c_str());

    Foo<std::string> fs;
    Foo<int> fi;//使用特例化
    fs.Bar();//使用的是普通模板，即Foo<string>::Bar()
    fi.Bar();//特例化版本，执行Foo<int>::Bar()
    //Foo<string>::Bar()和Foo<int>::Bar()功能不同

    return 0;
}
