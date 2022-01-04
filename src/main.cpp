/**
 * @file main.cpp
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief 
 * @date 2022-01-04
 * 
 * @copyright Copyright Alyce (c) 2022
 */

#include "capitals.h"
#include "names.h"
#include <iostream>

int main()
{
    std::cout << "This is a test program!" << std::endl;
    std::cout << "Capitals enum size: " << ExtEnums::capitals::EnumSize() << std::endl;
    std::cout << "Capitals:" << std::endl;
    ExtEnums::capitals::Foreach([](const ExtEnums::capitals& value) {
        std::cout << value.ToString() << std::endl;
    });
    
    std::cout << std::endl;
    std::cout << "Names enum size: " << names::EnumSize() << std::endl;
    std::cout << "Names:" << std::endl;
    names::Foreach([](const names& value) {
        std::cout << value.ToString() << std::endl;
    });
    return 0;
}