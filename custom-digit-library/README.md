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

### ⚠️ Note

* **Index Scanning**: The `findDigit` utility scans numbers sequentially from right to left (the order in which digits are mathematically stripped using % 10).
* **Math Dependencies**: The library safely uses `abs()` and limits configurations internally to process negative integers gracefully without crashing.

### 🤝 Author
**Ritesh Jillewad**
