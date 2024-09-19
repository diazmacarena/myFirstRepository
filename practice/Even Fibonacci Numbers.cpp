#include <iostream>

int main() {
    int a = 1, b = 2, sum = 0;
    while (b <= 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }
        int next = a + b;
        a = b;
        b = next;
    }
    std::cout << "Sum of even-valued terms: " << sum << std::endl;
    return 0;
}
      
