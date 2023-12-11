/*
! Accessing an Element of an Array in C++
*/

#include <iostream>
using namespace std;

void show(int output){
    cout << output << endl;
}

int main(){

    // array init
    int my_array[] = {1, 2, 3, 4, 5};
    int n[] = {10, 20, 30};
    int * pointer = n;

    // array iteration
    for (int i = 0; i < 5; i++) {
        show(my_array[i]);
    }

    show(pointer[1]);
    
    return 0;
}