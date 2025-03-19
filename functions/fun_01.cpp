#include <bits/stdc++.h> 
using namespace std; 

// Forward declaration of fun2() since it's called in fun1() before its definition
void fun2();

/**
 * Function that prints a message and calls fun2()
 */
void fun1(){
    cout << "hello I'm fun1"; // Prints greeting message without newline
    fun2(); // Calls fun2() function
}

void fun2()
{
    cout << "fun 2" << endl; // Prints message with newline
}


int main()
{
    fun2(); // Calls fun2() function
    return 0; 
}