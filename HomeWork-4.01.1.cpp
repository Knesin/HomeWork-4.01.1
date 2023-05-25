#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> arr = { 4, 7, 9, 14, 12 };

    setlocale(LC_ALL, "Russian");
    std::cout << "Входные данные:  ";
    std::for_each(arr.begin(), arr.end(), [](int i) {
        std::cout << i << " ";
        });
    std::cout << std::endl;
    std::cout << "Выходные данные: ";
    std::for_each(arr.begin(), arr.end(), [](int& i) {
        if (i % 2) i *= 3;
        std::cout << i << " ";
        });
    std::cout << std::endl;
}