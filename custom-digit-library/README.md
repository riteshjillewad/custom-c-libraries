# 🔢 Custom Digit Library

[![Language](https://img.shields.io/badge/Language-C99-00599C?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-emerald?style=for-the-badge)](https://GitHub.com/yourusername/mydigitlib/graphs/commit-activity)

A lightweight, efficient, and custom **C library** dedicated entirely to mathematical digit manipulation, extraction, frequency mapping, and number property verifications.

---

## 🚀 Features

`mydigitlib` packs an array of robust utilities to pull apart and analyze integers without converting them to strings.

* **Extraction & Inspection:** Easily count, sum, reverse, or isolate even, odd, and prime digits.
* **Target Search:** Pinpoint the frequency or index location of specific digits.
* **Property Validation:** Inbuilt logic to test for advanced number patterns like Palindromes, Armstrong, Harshad, Automorphic, and Strong numbers.
* **Anomalies & Analytics:** Find the largest/smallest single digits or compare if two numbers are structural **digit anagrams**.

---

## 📁 Project Structure

Keep your project cleanly organized like this:
```text
mydigitlib/
├── mydigitlib.c    # Core function implementations
├── mydigitlib.h    # Header file with prototypes & dependencies
└── README.md       # This awesome documentation
```

## 📋 Available Functions Reference

| Category | Function Prototype | Return Type | Description |
| :--- | :--- | :--- | :--- |
| **Basic Digit Math** | `displayDigits(int num)` | `void` | Extracts and prints each individual digit of the number to the console. |
| | `sumDigits(int num)` | `int` | Calculates and returns the sum of all digits in the number. |
| | `productDigits(int num)` | `int` | Computes and returns the running product of all digits. |
| | `countDigits(int num)` | `int` | Counts and returns the total number of digits present. |
| | `reverseNumber(int num)` | `int` | Reverses the digit order (e.g., handles `1234` $\rightarrow$ `4321`). |
| **Filters & Extractors** | `countEvenDigits(int num)` | `int` | Counts and returns the number of even digits. |
| | `countOddDigits(int num)` | `int` | Counts and returns the number of odd digits. |
| | `displayPrimeDigits(int num)` | `void` | Isolates and displays only the prime digits (`2`, `3`, `5`, `7`). |
| | `getSmallestDigit(int num)` | `int` | Scans the number and returns the mathematically lowest single digit. |
| | `getLargestDigit(int num)` | `int` | Scans the number and returns the mathematically highest single digit. |
| **Search & Relations**| `digitFrequency(int num, int target)`| `int` | Counts how many times a `target` digit appears inside `num`. |
| | `findDigit(int num, int target)` | `void` | Finds and prints the 1-indexed position of `target` from right to left. |
| | `digitAnagrams(int num1, int num2)`| `bool` | Returns `true` if both numbers share identical digit frequencies. |
| **Property Checkers** | `isPalindrome(int num)` | `bool` | Checks if the integer reads the same forwards and backwards. |
| | `checkHarshad(int num)` | `bool` | Verifies if the number is divisible by the sum of its own digits. |
| | `checkStrong(int num)` | `bool` | Verifies if the sum of the factorials of its digits equals the number. |
| | `checkArmstrong(int num)` | `bool` | Verifies if the sum of its digits raised to the power of total digits equals the number. |
| | `checkAutomorphic(int num)`| `bool` | Checks if the square of the number ends in the same digits as the number. |
| **Internal Helpers** | `power(int base, int exponent)` | `int` | Custom implementation to calculate mathematical powers manually. |


## 💻 Usage

### **1. Include the Header**
Ensure you include the local header file in your main application code:
```
#include "mydigitlib.h"
```

### **2. Quick code example(`main.c`)**
```c
#include <stdio.h>
#include "mydigitlib.h"

int main() {
    int myNum = 145; 

    printf("--- Checking Stats for %d ---\n", myNum);
    printf("Total Digits: %d\n", countDigits(myNum));
    printf("Sum of Digits: %d\n", sumDigits(myNum));
    
    if (checkStrong(myNum)) {
        printf("%d is a Strong Number!\n", myNum);
    } else {
        printf("%d is not a Strong Number.\n", myNum);
    }

    return 0;
}
```

### **3. Compilation**
Compile your program alongside the library using `gcc`:
```c
gcc main.c mydigitlib.c -o myexe
./myexe
```

## ⚠️ Note

* **Index Scanning**: The `findDigit` utility scans numbers sequentially from right to left (the order in which digits are mathematically stripped using % 10).
* **Math Dependencies**: The library safely uses `abs()` and limits configurations internally to process negative integers gracefully without crashing.

## 🤝 Author
**Ritesh Jillewad**
