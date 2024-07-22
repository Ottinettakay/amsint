#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>

int solveAGCD(const std::vector<int>& xs, int lambda) {
    // Calculate the product of all elements in xs
    int product = std::accumulate(xs.begin(), xs.end(), 1, std::multiplies<int>());

    // Calculate the GCD of the product raised to the power of lambda
    int result = 1;
    for (int i = 0; i < lambda; ++i) {
        result *= product;
    }

    return result;
}
