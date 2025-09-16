## 📝 Note: Chapter 4 Review

### ✅ Best Practices



___
### 📌 Key Definitions
1. **Bit**: Short for *binary digit*, is the **smallest unit of memory**, storing just **two states**: `0` or `1`.
2. **Byte**: Made up of *8 bits*, a byte is the **smallest *addressable* chunk of memory** that can be used to store a value in an object.
3. **Data Type**: A data type is a classification  the compiler uses to know what kind of data a variable or expression can hold, how much memory it needs, how to interpret the bits, and what operations can be performed on it.
4. **Fundamental Data Type**: These are data types that come built-in the C++ language, but stand apart from compound data types or library defined types. The fundamental types are `bool`, `char`, `int`, `float`, `void`, and `nullptr_t`.
5. **void**: The `void` data type is a **special type** that represent the absence of type. It's most common used for functions that don't return a value.
6. **sizeof**: The `sizeof` operator is an unary operator built into the C++ language used to express the size of a type or an object at compile time.
7. **signed integer**: A signed integer is a fundamental data type that stores whole numbers--positive, negative, or zero, and cannot have fractional parts. It's range is represented by $-(2^{n-1})$ to $(2^{n-1})-1$, where n is the number of bits. It is also the default state of keyword `int`. Overflow is UB for signed integral types.
8. **unsigned integer**: An unsigned integer is a fundamental data type that stores only non-negative whole numbers, from $0$ to $(2^n)-1$, where n is the number of bits. Overflow and underflow **wrap around** the range using **modulo arithmetic**, and this behavior is well-defined by the C++ standard.
9. **size_t**: `size_t` is an **implementation-defined**, but always an unsigned integer that is guaranteed to represent the size of any object in memory.
10. 
___
### 🧠 Flashcards