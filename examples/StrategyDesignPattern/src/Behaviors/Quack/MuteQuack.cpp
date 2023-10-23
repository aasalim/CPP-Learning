#include "Behaviors/Quack/MuteQuack.h"

#include <iostream>

MuteQuack::MuteQuack() { std::cout << "Attaching MuteQuack" << std::endl; }
MuteQuack::~MuteQuack() { std::cout << "Removing MuteQuack" << std::endl; }
void MuteQuack::quack() { std::cout << "<< Silence >>" << std::endl; }