#include <iostream>
//int Add(int left, int right)
//{
//    std::cout << "Add(int left, int right)" << std::endl;
//    return left + right;
//}
//double Add(double left, int right)
//{
//    std::cout << "Add(double left, int right)" << std::endl;
//    return left + right;
//}
//int main() {
//
//    Add(1, 2);
//    Add(1.0,2);
//    return 0;
//}

class Animal
{
public :
    virtual void sayHi() {
        std::cout << "Animal sya hi" << std::endl;
    }
};

class Cat : public Animal {
public :
    void sayHi() override {
        std::cout << "Cat sya hi" << std::endl;
    }
};
class Dog : public Animal {
public :
    void sayHi() override {
        std::cout << "Dog sya hi" << std::endl;
    }
};

void animalSayHi(Animal &animal) {
    animal.sayHi();
}

int main() {

    Animal a;
    Cat cat;
    Dog dog;
    animalSayHi(a);
    animalSayHi(cat);
    animalSayHi(dog);
    return 0;
}
