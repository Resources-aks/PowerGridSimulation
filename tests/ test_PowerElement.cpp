#include "PowerElement.h"
#include <iostream>
#include <cassert>

void testConstructor() {
    PowerElement element("TestElement", 110.0);
    std::cout << "Constructor test passed.\n";
}

void testPrint() {
    PowerElement element("TestPrint", 220.0);
    element.printInfo();  // You should visually inspect the output
}

int main() {
    testConstructor();
    testPrint();
    std::cout << "All tests completed.\n";
    return 0;
}
