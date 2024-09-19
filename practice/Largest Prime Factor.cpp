#include <iostream>

long largestPrimeFactor(long long n) {
    long maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for (long i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    return maxPrime;
}

int main() {
    long long number = 600851475143;
    std::cout << "Largest Prime Factor: " << largestPrimeFactor(number) << std::endl;
    return 0;
}
