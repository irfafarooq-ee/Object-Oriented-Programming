#include <iostream>
#include <list>

template <class T>
T remove_multiples(T& L, int n) {
    for (auto i = L.begin(); i != L.end();) {
        if (*i % n == 0) {
            i = L.erase(i);
        }
        else {
            i++;
        }
    }
    return L;
}
int main() {
    std::list<int> List = { 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 6 };
    std::cout << "Default list is: " << std::endl;
    for (auto i : List) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "List without multiples of 2 is: " << std::endl;
    for (auto i : remove_multiples(List, 2)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}