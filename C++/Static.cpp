#include <iostream>

class MyClass {
private:
    // Constant data member
    const int constantValue = 10;

    // Static data member
    static int staticValue;

public:
    // Member function to access constant data member
    void displayConstantValue() const {
        std::cout << "Constant Value: " << constantValue << std::endl;
    }

    // Static member function to access static data member
    static void displayStaticValue() {
        std::cout << "Static Value: " << staticValue << std::endl;
    }

    // Member function to modify static data member
    static void modifyStaticValue(int newValue) {
        staticValue = newValue;
    }
};

// Initialize static data member outside the class definition
int MyClass::staticValue = 20;

int main() {
    MyClass obj1, obj2;

    // Accessing constant data member and calling member function
    std::cout << "Object 1: ";
    obj1.displayConstantValue();

    // Accessing static data member and calling static member function
    std::cout << "Object 2: ";
    MyClass::displayStaticValue();

    // Modifying static data member
    MyClass::modifyStaticValue(30);

    // Displaying static value after modification
    std::cout << "Object 1 after modification: ";
    MyClass::displayStaticValue();

    return 0;
}
