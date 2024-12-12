#include <iostream>
using namespace std;

class CDummy
{
public:
    static int n;
    CDummy() { n++; }
    ~CDummy() { n--; }
};
