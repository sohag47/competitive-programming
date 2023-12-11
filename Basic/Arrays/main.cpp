/*
! Accessing an Element of an Array in C++
*/

#include <iostream>
#include <typeinfo>
using namespace std;

void show(int output){
    cout << output << endl;
}

int main(){

    // array init
    int my_array[] = {1, 2, 3, 4, 5};
    int * pointer = my_array;

    // array iteration
    for (int i = 0; i < 5; i++) {
        show(my_array[i]);
    }

    show(pointer[1]);




    
    
    return 0;
}