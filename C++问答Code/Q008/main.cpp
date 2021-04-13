#include <iostream>
#include <cstring>

int main() {
    const char* str = "Hello";
    int size = sizeof(str); // 取的是指针str的长度，是8
    std::cout << "size = " << size << std::endl;
    int len =  strlen(str); // 取的是这个字符串的长度，不包含结尾的 \0。大小是5
    std::cout << "len = " << len << std::endl;
    return 0;
}
