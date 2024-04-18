#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    while (n != 1) {
        std::cout << n << " ";
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }

    std::cout << n << std::endl;
    return 0;
}
