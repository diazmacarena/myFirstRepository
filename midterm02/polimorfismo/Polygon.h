class Polygon {
    public:
    Polygon (int a, int b) : width(a), height(b) {}
    int area (void){return 0;}
    void printarea() {
        cout << this->area() << "\n"; 
    }
    protected:
    int width, height;
};