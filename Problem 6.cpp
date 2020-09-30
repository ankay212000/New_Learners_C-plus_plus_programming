// What does this program do??
// And what does the final output is called?

#include <iostream>
using namespace std;

int main()
{
    int rows, number = 1;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++number;
        }
        cout<<"\n";
    }
    return 0;
}
