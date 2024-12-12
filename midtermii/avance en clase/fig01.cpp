#include <iostream>
using namespace std;

/*class Integer {
    public:
            //método que se invoca cuando se crea una instancia.
        Integer() { // constructor por defecto, sin argumentos 
            val = 0; cout << "default constructor" << endl;
    }
        int getVal() const {
            return val;
        }
        void setVal(int value) {
            val = value;
        }

    private:
        int val{0};
};

class IntegerWrapper {
    Integer val;
    Integerwrapper() {
        cout << "Integer wrapper default contructor"
    }
};*/

class Integer {
    public:
        int val;
        explicit Integer(int v) {
            val = v; cout << "constructor with arg " << v << endl; 
        }
};

class Integer2 {
public:
    int val;
    Integer2(int value = 0) {
        val = value;
    }
};

int main() {
    /*Integer i; //Instancia que invoca al constructor
    Integer arr[3];
    cout << arr[1].getVal() << endl;
    cout << arr[2].getVal() << endl;
    cout << arr[0].getVal() << endl;*/

    Integer i{3}; // explicit constructor i = x, not suitable
    Integer a[] = {Integer(2), Integer(5)};
    /*Integer b[2]; // error*/
    Integer2 k;
    Integer2 j(3);

}