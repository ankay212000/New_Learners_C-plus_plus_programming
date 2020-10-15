// explain every step by adding comments to every line 
// And what this program is doing

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,b;  // defining the variables
   cin>>a>>b; // taking input
   b=(a+b)-(a=b); // swapping takes place, in the part (a=b) 'a' takes the value of 'b' and then it's value is subtracted from the sum of 2 numbers 
   // effectively the operation is like (a+b)-b, which gives us 'a' that is assigned to b 
   // this is how the swapping takes place
   cout<<a<<" "<<b; // output the swaped value
   return 0;
}
