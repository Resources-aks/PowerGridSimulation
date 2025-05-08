#include "PowerElement.h"
#include <iostream>

PowerElement::PowerElement(const std::string& name, double voltage)
    : name_(name), voltage_(voltage) {}

void PowerElement::printInfo() const {
    std::cout << "Element Name: " << name_ << ", Voltage: " << voltage_ << " V" << std::endl;
}
