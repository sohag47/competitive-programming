/*
! Accessing an Element of an Array in C++
*/

#include <iostream>
using namespace std;


int main(){

    // array init
    int my_array[5] = {1, 2, 3, 4, 5};

    // array iteration
    for (int i = 0; i < 5; i++) {
        cout << my_array[i] << endl;
    }
    return 0;
}