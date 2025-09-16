### 📝 Note: Chars

A `char` is a **fundamental integral type**, meaning it behaves like a small integer under the hood. It’s commonly used to store **character codes**, typically from the ASCII set.

---

### 🔹 Size and Range
- `char` has a **guaranteed size** of exactly `1 byte (8 bits)` — it's the smallest addressable unit in C++.  
- However, **signedness is implementation-defined** when using plain `char`. It may be either signed or unsigned depending on compiler.

✅ Use `signed char` or `unsigned char` if you need predictable behavior.

### 📌 Range Formulas
- **Signed char**: $-(2^{n-1})$ to $(2^{n-1}) - 1$ `-128 to 127`
- **Unsigned char**: $0$ to $(2^n) - 1$ `0 to 255`

---

### 🔹 Syntax
```cpp
char x{ 'A' };
```

### 🔹 Literals
A `char` literal is a single character enclosed in **single quotes**. These can be:

-   Alphabetic: `'A'`, `'z'`   
-   Numeric digits: `'1'`, `'9'` (these are _characters_, not integers)    
-   Punctuation: `'?'`, `'!'`, `'-'`    
-   Escape sequences: `'\n'`, `'\t'`, `'\v'`  
    ⛔ These are still stored as `char` — they just represent control codes.
 ___

####  Example: Assigning Different Char Forms
```cpp
#include <iostream>

int main() {
    char x{1};
    std::cout << "x = 1 -> " << x << '\n';

    x = '1';
    std::cout << "x = '1' -> " << x << '\n';

    x = 'A';
    std::cout << "x = 'A' -> " << x << '\n';

    x = 65;
    std::cout << "x = 65 -> " << x << '\n';

    x = 0b1000001;
    std::cout << "x = 0b1000001 -> " << x << '\n';

    return 0;
}
```  
#### Output
```bash
x = 1 -> 
x = '1' -> 1
x = 'A' -> A
x = 65 -> A
x = 0b1000001 -> A
```
### 🔹 Behavior in Expressions
-   `char x = 65;` prints `A` because 65 is the ASCII code for `'A'`.    
-   `x = '1';` prints `1` — that’s a char literal, ASCII code 49.    
-   `x = 1;` prints an unreadable control character: **SOH** (Start of Heading).   
- **ASCII codes 0–31** are control characters. They exist — they're just not meant to be shown.
___
### Special Values - Escape Sequences
The are some characters in C++ that have special meaning. If you didn't already know, escape sequences like `'\n'` are actually `char` types. So, given what we know, if `'\n'` is just a `char`, we should be able to store it in a named object, or even static cast it to an `int`.
#### Example
```cpp
#include <iostream>

int main() {

    char x{'\n'};

    std::cout << "Line 1" << x; 
    std::cout << "Line 2" << x;
    std::cout << "line 3" << x;
    std::cout << "Type casting 'x' to int: " << static_cast<int>(x) << '\n'; 

    return 0;
}
```
> Last `std::cout` outputs 10, the integer that represents the ASCII character `'\n'`.

|       Name       | Symbol |       Meaning     |
|------------------|--------|-------------------|
|       Alert      |  '\a'  |   alert sound     |
|     Backspace    |  '\b'  |   back one space  |
|     Formfeed     |  '\f'  |     Next page     |
|      Newline     |  '\n'  |     New line      |
|  Carriage Return |  '\r'  | Beginning of line |
| Horizontal Tab   |  '\t'  |    Print H. tab   |
|  Vertical Tab    |  '\v'  |    Print V. tab   |
|   Single Quote   |  '\''  | Prints one quote  |
|  Double Quote    |  '\"'  | Prints two quote  |


### Arithmetic Promotions

When `char` is used in arithmetic:
-   It’s **promoted to `int` automatically**  
-   Any result of arithmetic with `char` becomes an `int` unless you cast it back   
-   This prevents issues with overflow, but it means `char + char` ≠ `char` by default

```cpp
char a{'A'};
char b{1};
auto result = a + b; // result is int (66)
```

### ✅ Best Practices

-   Use `'A'`, not `"A"` — double quotes mean string, not char    
-   Always be clear about **signedness** when you care about the range    
-   If you are using `char` to hold ASCII characters, you don't need to be explicit about it's sign; however, if you are using `char` to store small integers (which you should avoid unless memory capacity absolutely demands it), you **should** be explicit about signedness.
- Avoid multi-character literals
 ___

### Other `char` types
When C++11 became the standard, `char16_t` and `char32_t` were added to provide support for 16-bit and 32-bit Unicode characters. These `char` types have the same size as `std::uint_least16_t` and `std::uint_least32_t`. `char8_t` was added in C++20 to provide support for 8-bit Unicode (UTF-8). They are distinct types that use the same representation as `unsiged char` For now, we will push this off for a deeper lesson for the future. 
___
### 🧠 Flashcards

#24

Here you go — 5 focused flashcards mixing behavior checks, ASCII reasoning, and output prediction:

----------

### 🧠 Flashcards

#### 1.

**Q:** What is the ASCII integer value of the `'\n'` character?  
**A:** `10`

----------

#### 2.

**Q:** Given `char x = 65;`, what will `std::cout << x;` output?  
**A:** `A` — because 65 is the ASCII code for `'A'`

----------

#### 3.

**Q:** True or False: `std::cin >> ch;` will read a space character `' '` into a `char`.  
**A:** False — `>>` skips whitespace. Use `.get()` to capture spaces.

----------

#### 4.

**Q:** What type is the result of this expression:

```cpp
char a = 'A';
char b = 1;
auto result = a + b;

```

**A:** `int` — `char` is promoted during arithmetic operations.

----------

#### 5.

**Q:** What’s the output of this program?

```cpp
char x{'\n'};
std::cout << static_cast<int>(x);

```

**A:** `10` — `'\n'` is a `char` with ASCII value 10.

----------


