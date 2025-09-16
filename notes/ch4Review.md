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
10. **Scientific Notation**: A way to represent very small or very large numbers in a more readable and compact form. It expresses a number as a **significand** multiplied by 10 raised to an exponent, which determines how many decimal places to move left or right.
11. **Floating Point Types**: Fundamental Data Types (`float`, `double`, `long double`) that can represent real numbers, including positive, negative, zero, and fractional values. Scientific notation is supported.
    1.  **Precision**: The number of significant digits a floating-point type can reliably store. `float` provides ~ 7 digits of precision. `double` provide ~ 15 digits.
    2.  **Rounding Error**: A small difference between the actual value and the stored value due to **precision limits** in floating-point representation. Even simple values like `0.1` cannot always be stored exactly in binary.
12. **Boolean Types**: A fundamental data type (named after George Boole) that stores **one of two values**: `true` or `false`. Booleans are considered integral types in C++, where `true` is represented by `1` and `false` by `0`. Booleans occupy 1 byte in memory, despite only needing 1 bit.
13. **if statement**: A conditional control statement where a **condition is evaluated for truthfulness**. If the condition is `true`, the body of the statement is executed. If the condition is `false`, the body is skipped.
14. **else statement**:Used to specify an **alternate block of code** that executes only if the preceeding `if` condition is `false`. It's as a sort of *otherwise* branch of the conditional statement.
15. **else if**: A conditional branch used to check an **additional condition** when the preceding `if` or `else if` condition is false.
16. **char**: A fundamental integral type that stores **alphanumeric** characters and symbols, typically using the ASCII encoding. `char` has a guaranteed size of 1 byte, and may be either signed or unsigned, depending on the compiler. Character literals are written using single quotes.
17. **static_cast**: An explicit type conversion operator used to convert between compatible types at compile time. It is safer that implicit conversion and also safer than the C-style casting.
___
### 🧠 Flashcards

#### Part One: Predict the output, behavior, or bug of the following snippets.

1.

```cpp
bool b = 5;
std::cout << b;
```
___
2.

```cpp
char c = 'A' + 3;
std::cout << c;
```
___
3.

```cpp
int x = 10;
if (x = 0)
    std::cout << "Zero";
else
    std::cout << "Non-zero";
```
___
4.

```cpp
std::cout << sizeof('A');
```
___
5.

```cpp
int x = -1;
unsigned int y = 1;
std::cout << (x < y);
```
___
6.

```cpp
std::cout << sizeof 42;
```
___
7.

```cpp
int x = 5;
double d = static_cast<double>(x) / 2;
std::cout << d;
```
___
8.

```cpp
char c = 65;
std::cout << static_cast<int>(c);
```
___
9.

```cpp
int a = 1;
if (a)
    std::cout << "True";
```
___
10.

```cpp
float f = 0.1f;
if (f == 0.1)
    std::cout << "Equal";
else
    std::cout << "Not Equal";
```
___

#### Part two: Terminology Check
Short answers or multiple choice — know your definitions cold.

11. What’s the smallest addressable unit of memory?

12. True or False: A bool is a floating-point type.

13. Which of the following is not a fundamental type?
A. nullptr_t
B. char
C. std::string
D. bool

14. What’s the range of an 8-bit unsigned integer?

15. What does static_cast<float>(42) do?

16. Name two places where void is commonly used.

17. What type is returned by sizeof()?

18. What’s a rounding error, and why does it happen?

19. Why is sizeof(Color) invalid without parentheses?

20. What’s the key behavioral difference between else and else if?

#### Part Three: Mini Code Challenge
Write a quick 1–3 line program fragment. Assume headers and main() exist.

21. Print the size of a double using sizeof.

22. Declare a variable c and assign it the ASCII character 'z'. Print its integer value.

23. Write an if statement that checks if a number is not zero, and prints "Valid" if so.

24. Create a size_t variable called length and initialize it to 512.

25. Use static_cast to convert an int to a double and print the result.

26. Write a boolean expression that evaluates to false using a non-zero int.

27. Define a float using scientific notation for the value 3.2 × 10^6.

28. Print the result of comparing -1 and 1U.

29. Declare a char with a numeric value, and print it as a letter.

30. Cast a char literal '!' to an int and print the ASCII code.

