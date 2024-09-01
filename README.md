# Pointers_Operations_in_C-
## Aim
We learn operations performed in pointers in C++.
## Theory
In C++, functions can receive arguments either by value or by reference, determining how data is passed to the function.

**Call by Value:** When a function is called by value, a copy of the actual argument is passed to the function. Changes made to the parameter inside the function do not affect the original variable. This method is useful when you want to protect the original data from being modified. However, it can be inefficient for large data types, like structures or classes, because it involves copying data.

**Call by Reference:** In call by reference, the function receives a reference to the actual argument, meaning the function can directly modify the original variable. This is done by using the ampersand `&` in the function’s parameter list (e.g., `void func(int &x)`). Call by reference is more efficient for large data types as it avoids copying, but it allows the function to alter the original data, which may be undesirable in some cases.

Understanding the difference between these two methods is crucial for controlling data flow and ensuring efficient memory usage in C++.

## Output

![image](https://github.com/user-attachments/assets/f9999ac7-a6c1-48e8-b96d-e60d1444345b)

![image](https://github.com/user-attachments/assets/88e9729b-c606-40df-a82b-4fc4f98ef56b)

## Conclusion
We learnt about basic pointer operations in C++.
