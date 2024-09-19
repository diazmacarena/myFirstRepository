#include <iostream>
#include <string>
using namespace std;

int main() {

    int i{1};
    int j{2};
    int sum{0};

    while (j <= 4000000) {
        if (j % 2 == 0) {
            sum += j;
        }

        int h = i + j;
        i = j;
        j = h;
    }
    
    cout << "Sum of even-valued terms: " << sum << endl;
    return 0;
    
}
      
