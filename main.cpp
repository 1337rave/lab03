#include <iostream>

template<typename T>
void sumArrays(const T* arrayA, const T* arrayB, T* arrayC, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arrayC[i] = arrayA[i] + arrayB[i];
    }
}

int main() {
    const size_t size = 5; 

    int arrayA[size] = { 1, 2, 3, 4, 5 };
    int arrayB[size] = { 6, 7, 8, 9, 10 };
    int arrayC[size];

    sumArrays(arrayA, arrayB, arrayC, size);

    std::cout << "Array C(sum of arrays A and B): ";
    for (size_t i = 0; i < size; i++) {
        std::cout << arrayC[i] << " ";
    }

    return 0;
}
