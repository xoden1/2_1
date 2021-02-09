#include <iostream>
#include "String.h"

int main() {
    String input("Hello, World!");
    String ok("123123");
    String ok2("Hello, World!");
    std::cout << (input == ok) << std::endl;
    std::cout << (input == ok2) << std::endl;
    String ok3 = input;
    std::cout << ok3.len() << std::endl;
    std::cout << input.find("orld") << std::endl;
    String ok4("Hella, Warld!");
    String ok5 = input.replace('o','a');
    std::cout << (ok5 == ok4) << std::endl;
    std::cout << input[3] << std::endl;
    return 0;
}