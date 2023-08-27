// 25. Write a C++ program to create multilevel inheritance. (Hint: Classes A1, A2, A3)

#include <iostream>
#include <string>

class A1 {
protected:
    std::string infoA1;

public:
    A1(const std::string& info) : infoA1(info) {}

    void displayA1() {
        std::cout << "A1 Info: " << infoA1 << std::endl;
    }
};

class A2 : public A1 {
protected:
    std::string infoA2;

public:
    A2(const std::string& info1, const std::string& info2) : A1(info1), infoA2(info2) {}

    void displayA2() {
        displayA1();
        std::cout << "A2 Info: " << infoA2 << std::endl;
    }
};

class A3 : public A2 {
protected:
    std::string infoA3;

public:
    A3(const std::string& info1, const std::string& info2, const std::string& info3) : A2(info1, info2), infoA3(info3) {}

    void displayA3() {
        displayA2();
        std::cout << "A3 Info: " << infoA3 << std::endl;
    }
};

int main() {
    A3 objA3("InfoA1", "InfoA2", "InfoA3");
    objA3.displayA3();

    return 0;
}

/*
A1 Info: InfoA1
A2 Info: InfoA2
A3 Info: InfoA3
*/
