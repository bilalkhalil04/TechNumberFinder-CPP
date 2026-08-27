**Tech Number Checker**

A simple C++ program that checks whether a given number is a Tech Number.

What is a Tech Number?

A Tech Number is an even-digit number that can be split into two equal parts. If the square of the sum of those two parts is equal to the original number, it is a Tech Number.

Example

2025

Split into: 20 and 25
Sum: 20 + 25 = 45
Square: 45² = 2025
Therefore, 2025 is a Tech Number.
How It Works
Take an integer as input.
Count the number of digits.
Check if the number has an even number of digits.
Split the number into two equal parts.
Add the two parts together.
Square the sum.
Compare the result with the original number.
Example Output
Enter an even number: 2025
2025 is a tech number
2025
Technologies Used
C++
iostream
cmath
How to Run

Compile the program using:

g++ tech-number.cpp -o tech-number

Then run:

./tech-number

