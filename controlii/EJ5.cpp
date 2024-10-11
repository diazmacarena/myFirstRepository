void invertirArr(int array[], int size) {
    for (int i{0}; i < size/2; i++) {
        swap(array[i], array[size - i - 1]);
    }
}

void invertirPtr(int *array, int size) {
    int *ini = array;
    int *fin = array + size -1;
    while (ini <= fin)
        swapPtr(ini++, fin--);
}