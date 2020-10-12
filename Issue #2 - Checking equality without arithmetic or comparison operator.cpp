/*
Program to find equality without 
using arithmetic or comparison operator
*/
#include <iostream> 
using namespace std;

/*
Function to check if two 
numbers are equal using 
XOR operator 
*/
void Equal() 
{
    int a;
    int b;
    cout << "Enter first number:\n";
    cin >> a;
    cout << "Enter second number:\n";
    cin >> b;

    if (a ^ b) 
        cout << "Not Same\n"; 
    else
        cout << "Same\n"; 
} 
  
// Driver Code 
int main() 
{ 
  
    // Calling function 
    Equal();
} 
