#include <iostream>
#include <vector>

template <typename T>
T identity(T arg) {
    return arg;
}

int main() {
    std::cout << identity(5) << std::endl;            // Outputs: 5
    std::cout << identity(std::string("hello")) << std::endl; // Outputs: hello
    std::vector<int> vec = identity(std::vector<int>{1, 2, 3});
    for(int i : vec) {
        std::cout << i << " ";                        // Outputs: 1 2 3 
    }
    return 0;
}
