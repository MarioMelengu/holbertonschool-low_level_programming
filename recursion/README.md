# C Recursion Project

This project demonstrates various recursive functions in C. Each task involves writing a recursive function to solve a specific problem. Below is a description of each task along with the respective filename.

## Tasks

1. **Task 0: Print a String with a New Line**
   - **Filename**: `0-puts_recursion.c`
   - **Description**: This task requires writing a recursive function that prints a string followed by a new line. The function prints each character of the string, calling itself recursively for the next character, until the end of the string is reached.

2. **Task 1: Print a String in Reverse**
   - **Filename**: `1-print_rev_recursion.c`
   - **Description**: Write a recursive function that prints a string in reverse. The function processes the string from the end to the beginning, printing each character in reverse order.

3. **Task 2: String Length Calculation**
   - **Filename**: `2-strlen_recursion.c`
   - **Description**: This task involves writing a recursive function that calculates and returns the length of a string. The function counts the characters of the string recursively until it reaches the null terminator (`\0`).

4. **Task 3: Factorial of a Number**
   - **Filename**: `3-factorial.c`
   - **Description**: Write a recursive function that returns the factorial of a given number. The function calculates the factorial by multiplying the current number by the factorial of the previous number, with the base case being the factorial of 0 (which is 1).

5. **Task 4: Power Function (x raised to the power of y)**
   - **Filename**: `4-pow_recursion.c`
   - **Description**: This task requires writing a recursive function that calculates the value of `x` raised to the power of `y`. The function repeatedly multiplies `x` by itself, recursively decreasing `y` until `y` reaches 0, at which point the result is 1.

6. **Task 5: Natural Square Root**
   - **Filename**: `5-sqrt_recursion.c`
   - **Description**: Write a recursive function that returns the natural square root of a number. If the number does not have an exact square root, the function should return `-1`. The function recursively checks the square of increasing integers until it finds a match or exceeds the number.

7. **Task 6: Prime Number Check**
   - **Filename**: `6-is_prime_number.c`
   - **Description**: This task requires writing a recursive function that determines whether a given number is a prime number. The function should return `1` if the number is prime, and `0` if it is not. It does so by checking divisibility starting from 2 up to the square root of the number.
