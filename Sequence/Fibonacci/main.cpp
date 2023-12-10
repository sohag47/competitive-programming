/*
! Fibonacci Sequence
? Math:  Fn = Fn-1 + Fn-2
? F0 = 0 and F1 = 1.
* input: n = 9
* output: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

TODO Write a function int fib(int n) that returns Fn. 
For example, 
if n = 0, then fib() should return 0. 
If n = 1, then it should return 1. 
For n > 1, it should return Fn-1 + Fn-2
*/

#include <iostream>

using namespace std;

int * Fibonacci(int n)
{
    // implement Fibonacci algorithm
    int result = 1;
    int carry = 0;
    static int resultArray[100];

    for (int i = 0; i <= n; i++)
    {
        if (i == 0 || i == 1)
        {
            resultArray[i] = i;
        }
        else
        {
            result = result + carry;
            carry = result - carry;
            resultArray[i] = result;
        } 
    }
    return resultArray;
}

void test(int n, int test_case_array[100])
{
    bool result = true;
    int * output_array;
    output_array = Fibonacci(n);
    for (int i = 0; i <= n; i++)
    {
        if (output_array[i] == test_case_array[i])
        {
            cout << output_array[i] << "==" << test_case_array[i] << " ✅ Test Case Success \n";
        }else{
            cout << output_array[i] << "!=" << test_case_array[i] << " ❌ Test Case Failed!";
            break;
        }
        
    }
}

int main()
{
    // root function
    int test_case_array[100] = {0,1,1,2,3,5,8,13,21,34};
    int n = 0;
    cout << "Enter Number: ";
    cin >> n;

    test(n, test_case_array);
    cout << "\n";
    
    return 0;
}