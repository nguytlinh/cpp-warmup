# cpp-warmup

Assignment 0: C++ warm-up. The purpose of this assignment is to familiarize ourselves with C++, cmake, and github.

## How to build

*Windows*

Open git bash to the directory containing this repository.

```
cpp-warmup $ mkdir build
cpp-warmup $ cd build
cpp-warmup $ cmake -G "Visual Studio 16 2019" ..
cpp-warmup $ start Cpp-Warmup.sln
```

Then open the solution file to write and test your programs.

*macOS*

Open terminal to the directory containing this repository.

```
cpp-warmup $ mkdir build
cpp-warmup $ cd build
cpp-warmup $ cmake ..
cpp-warmup $ make
```

To run each program from build, you would type

```
cpp-warmup $ ../bin/fizzbuzz
cpp-warmup $ ../bin/testcircle
```

## Program 1: FizzBuzz

In the file `fizzbuzz.cpp`, implement the program FizzBuzz, described [here](https://open.kattis.com/problems/fizzbuzz). 
In case you might not be familiar with reading and writing data from the console, we've given you the following starter code.

```
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X,Y,N;
   cin >> X;
   cin >> Y;
   cin >> N;
   
   // your code here
}
```

This program will sit and wait until you enter 3 values.

## Program 2: Circle class

Write a class, circle, that stores a radius and has the following methods

* [default constructor](https://en.cppreference.com/w/cpp/language/default_constructor) (radius is set to 0)
* constructor taking a radius as argument
* [copy constructor](https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm)
* [assignment operator](https://www.tutorialspoint.com/cplusplus/assignment_operators_overloading.htm)
* [output stream operator](https://www.tutorialspoint.com/cplusplus/input_output_operators_overloading.htm)
* [add operator](https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm) (should add the radii of two circles together)
* accessor (e.g. getter) for radius
* mutator (e.g. setter) for radius
* method for computing and returning the area
* [destructor](https://www.tutorialspoint.com/destructors-in-cplusplus)

Your class should also

* Split the class into a header and implementation file
* Define its methods as public, but data (the radius) as private

For example, running the program, `testcircle.cpp`, should give the following output.

```
#include <iostream>

#include "circle.h"

int main(int argc, char** argv)
{
   Circle c1; 
   Circle c2(10); 
   Circle c3 = c2;
   Circle c4 = c2 + c2;

   std::cout << "--------- Starting Values ----------\n";
   std::cout << "c1: " << c1 << std::endl;
   std::cout << "c2: " << c2 << std::endl;
   std::cout << "c3: " << c3 << std::endl;
   std::cout << "c4: " << c4 << std::endl;

   float area = c3.computeArea();
   std::cout << "Circle 3 has area: " << area << std::endl;

   c2 = c1;
   c1.setRadius(c3.getRadius() + 2);

   std::cout << "--------- Ending Values ----------\n";
   std::cout << "c1: " << c1 << std::endl;
   std::cout << "c2: " << c2 << std::endl;
   std::cout << "c3: " << c3 << std::endl;
   std::cout << "c4: " << c4 << std::endl;
}
```

Output

```
--------- Starting Values ----------
c1: 0
c2: 10
c3: 10
c4: 20
Circle 3 has area: 314.159
--------- Ending Values ----------
c1: 12
c2: 0
c3: 10
c4: 20
```
