//Name: Bryan Barrios
//ID: 0562895
//Assignment: Lab 7.10 Varied amt of input data

#include <iostream>

using namespace std;
int main()
{
    // make an integer space variable to take in user value

   int x;

   cin>>x;

   // enter loop when input value is greater than 0
   while(x > 0)
   {
       //output to console the the values of the remainder divided by 2
  cout<<x % 2;

  //divide value of input until is less than 0
  x=x/2;

   }
    return 0;
}
