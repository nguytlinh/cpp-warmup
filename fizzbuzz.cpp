// Name: Linh Le
// Date: Feb 24, 2021

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X; // 1st number
   cin >> Y; // 2nd number
   cin >> N; // range

   for (int i = 1; i <= N; i++)
   {    
       // divisible by both
       if (i % (X * Y) == 0) {          
           cout << "FizzBuzz" << endl;
       }

       // divisible by either
       else if (i % X == 0) {           
           cout << "Fizz" << endl;
       }
       else if (i % Y == 0) {
           cout << "Buzz" << endl;
       }

       // not divisible by input numbers
       else {
           cout << i << endl;
       }
   }
}

