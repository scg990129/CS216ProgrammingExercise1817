#include <iostream>

using namespace std;

int main() {
    int list[] = {125, 100, 94, 88, 75, 71, 66, 58, 53, 37, 32, 28, 14, 10, 8};

    for(int i = 14; i >= 0; i--) {
        cout << list[i] << " ";
    }

    return 0;
}

/*
Instructions
Write a program to test the function you designed in Exercise 28 of this chapter.
Suppose that the elements of a list are in descending order and they need to be put in ascending order.
Write a C++ function that takes as input an array of items in descending order and the number of elements in the array.
The function rearranges the elements of the array in ascending order.
Your function must not incorporate any sorting algorithms, that is, no item comparisons should take place.

Use the following list to test your program.

125, 100, 94, 88, 75, 71, 66, 58,
53, 37, 32, 28, 14, 10, 8
 */