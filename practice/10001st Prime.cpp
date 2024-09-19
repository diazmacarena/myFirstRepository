#include <iostream>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    int number = 1;
    int prime;

    while (count < 10001) {
        number++;
        if (isPrime(number)) {
            count++;
            prime = number;
        }
    }

    std::cout << "The 10001st prime number is: " << prime << std::endl;
    return 0;
}
