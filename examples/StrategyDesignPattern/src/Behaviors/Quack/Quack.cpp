#include "Behaviors/Quack/Quack.h"

#include <iostream>
Quack::Quack() { std::cout << "Attaching Quack" << std::endl; }
Quack::~Quack() { std::cout << "Removing Quack" << std::endl; }
void Quack::quack() { std::cout << "Quack" << std::endl; }