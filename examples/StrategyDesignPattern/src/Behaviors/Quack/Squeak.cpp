#include "Behaviors/Quack/Squeak.h"
#include <iostream>

Squeak::Squeak() { std::cout << "Attaching Squeak" << std::endl; }
Squeak::~Squeak() { std::cout << "Removing Squeak" << std::endl; }
void Squeak::quack() { std::cout << "Squeak" << std::endl; }