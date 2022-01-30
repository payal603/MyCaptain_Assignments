
#1.Write a C++ code to find the size of the datatypes int,float,double and char.
#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}
 
 #2.Write a C++ code to find the product of 2 numbers entered by the user.
#include <iostream>
using namespace std;

int main() {
  double num1, num2, product;
  cout << "Enter two numbers: ";

  // stores two floating point numbers in num1 and num2 respectively
  cin >> num1 >> num2;
 
  // performs multiplication and stores the result in product variable
  product = num1 * num2;  

  cout << "Product = " << product;    
    
  return 0;
}
