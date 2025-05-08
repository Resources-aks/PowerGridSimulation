#ifndef POWERELEMENT_H
#define POWERELEMENT_H

#include <string>

class PowerElement {
public:
    PowerElement(const std::string& name, double voltage);

    void printInfo() const;

private:
    std::string name_;
    double voltage_;
};

#endif // POWERELEMENT_H
