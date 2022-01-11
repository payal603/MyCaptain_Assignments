/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter age of a user:";
    cin>>age;

    if (age >= 18) {
        cout << "You are eligible for voting";
    } else {
        cout << "You are not eligible for voting";
    }

    return 0;
}
