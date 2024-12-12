#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
    CommissionEmployee commissionEmployee{"Sue", "Jones", "222-22-2222", 10000, .06};
    BasePlusCommissionEmployee basePlusCommissionEmployee{"Bob", "Lewis", "333-33-3333", 5000, .04, 300};

    cout << fixed << setprecision(2);

    cout << commissionEmployee.toString() << endl;
    cout << basePlusCommissionEmployee.toString() << endl;

    CommissionEmployee* commissionEmployeePtr{&commissionEmployee};
    cout << commissionEmployeePtr -> toString() << endl;

    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{&basePlusCommissionEmployee};
    cout << basePlusCommissionEmployeePtr->toString() << endl;

    commissionEmployeePtr = &basePlusCommissionEmployee;

    cout << commissionEmployeePtr->toString() << endl;
}
