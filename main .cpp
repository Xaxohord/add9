#include <iostream>
#include "arr.hpp"

int main() {
    int n;
    std::cin >> n;
    kr::Array mas(n);
    mas.getSize();
    for (int i = 0; i < n; i++)
    mas.add(i);
    std::cout << std::endl <<"Summa elementov:" << mas.summa() << std::endl;

    return 0;
}