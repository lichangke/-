#include <iostream>
class A{
public:
    int num1{};
    int num2{};
public:
    explicit A(int a=0, int b=0):num1(a),num2(b){
        printf("A(int a=0, int b=0):num1(a),num2(b) num1 = %d , num2 = %d\n" ,a,b);
    };
    A(const A& a){
        printf("A(const A& a)\n");
    };
    //重载 = 号操作符函数
    A& operator = (const A& a){
        printf("A& operator = (const A& a)\n");
        num1 = a.num1 + 1;
        num2 = a.num2 + 1;
        return *this;
    };
};
int main(){
    std::cout << "---1---" << std::endl;
    A a(1,1);
    std::cout << "---2---" << std::endl;
    A a1 = a; //拷贝初始化操作，调用拷贝构造函数
    std::cout << "---3---" << std::endl;
    A b;
    std::cout << "---4---" << std::endl;
    b = a;//赋值操作
    printf("a.num1 = %d , a.num2 = %d\n",a.num1,a.num2);
    printf("a1.num1 = %d , a1.num2 = %d\n",a1.num1,a1.num2);
    printf("b.num1 = %d , b.num2 = %d\n",b.num1,b.num2);
    return 0;
}
