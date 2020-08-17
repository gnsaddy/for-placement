#include <iostream>

int main(void)
{
    int a[5] = {23, 443, 16, 49, 66};

    for (auto i : a)
        std::cout << i << "  ";

    // for (auto i : a)
    //     i = 5;
    // for (const auto &i : a)
    //     std::cout << i << std::endl;

    for (auto &i : a)
        i = 5;
    for (const auto &i : a)
        std::cout << i << std::endl;
}

// T             // I'm copying this
// T &       // I'm modifying this
// const T & // I'm reading this