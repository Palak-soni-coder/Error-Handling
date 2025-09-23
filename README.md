### EXPERIMENT 15
### Name: Palak Soni
### Class:ENTC A
### PRN: 24070123069
### Title: ERROR HANDLING


# Error Handling in C++

Error handling is the mechanism to detect and respond to runtime errors in a program. Proper error handling ensures that the program does not crash and can either recover or provide meaningful feedback to the user. C++ provides structured exception handling for this purpose.

---

## 1. What is an Exception?

- An **exception** is an abnormal condition that occurs during program execution.
- It interrupts the normal flow of the program.
- Examples: 
  - Division by zero
  - File not found
  - Invalid input
  - Out-of-memory errors
- In C++, exceptions are objects that are thrown when an error occurs.

---

## 2. Keywords in Exception Handling

| Keyword  | Purpose |
|----------|---------|
| `try`    | Contains the code that might generate an exception. |
| `throw`  | Used to **throw** an exception when an error occurs. |
| `catch`  | Catches and handles the exception thrown. |

---

## 3. Syntax of Exception Handling

```cpp
try {
    // Code that may throw an exception
    if (error_condition)
        throw exception_object;   // throw exception
}
catch (exception_type e) {
    // Code to handle the exception
    cout << "Error: " << e << endl;
}
