♻️ (_MinGW, Windows11, Codelite_)  
🔗 **Related Concepts**: [[Preprocessor Directives]], [[Functions - Parameters & Arguments]], [[References & Pointers]], [[cv-qualifiers]]
___
### 📝 Note: Constants

-   A **constant** is a value that **cannot change** during program execution.
-   A **named constant** is a constant associated with an identifier.    
-   A **literal constant** is a constant _not_ associated with an identifier (like `42` or `"hello"`).
___
### 🔹 Types of Named Constants

There are three main kinds in C++:
1.  **Constant Variable**  
    A variable that must be initialized and cannot change thereafter.    
2.  **Object-like Macro**  
    A preprocessor definition that performs simple text replacement.   
3.  **Enumerations**  
    Covered later in [[enums]].
___
### 🔹 Constant Variables

### ✅ Declaring a Constant

Use the `const` keyword adjacent to the type:
```cpp
const int x{5};
```
📝 While `int const x{5};` is also valid, it's more readable to write it like:

> “**const int x**” → like an adjective before a noun (e.g., “_green_ ball” not “ball, green”).
___
### ✅ Initialization is Mandatory

You **must** initialize a `const` variable at the point of definition:
```cpp
const int x;    // ❌ Error: uninitialized const
x = 10;         // ❌ Error: can't assign later

const int y{10}; // ✅ Correct
```

You can also initialize using:
-   Another variable (even non-const)
-   Another constant

```cpp
int base{10};
const int age{base};
const int maxAge{age * 2};
```
### 🔹 Naming Conventions (Style Choices)
Common styles for constants:

| Style | Example | Notes |
|-------|---------|-------|
| `camelCase` | `maxUsers` |✅ Your personal default |
| `CamelCase` | `MaxUsers` |Acceptable but uncommon in modern C++ |
| `kCamelCase` | `kMaxUsers` | ✅ Google-style constant |
| `ALL_CAPS` | `MAX_USERS` | ❌ Use for macros only |

📌 _Avoid `constAge`, `constHeight`, or `ConstX` — the `const` keyword already communicates intent. Redundant prefixes aren’t helpful._
___
### 🔹 `const` Function Parameters

```cpp
void print(const int x) {
  std::cout << x;
}
```
-   The parameter is initialized **at the function call site**    
-   `const` prevents the parameter from being modified **inside the function**    
-   But it’s still a **copy**, so modifying it wouldn’t affect the caller anyway
    
✅ TL;DR: `const` + **value** = protects only the copy. Not very useful.  
🧠 Save `const` for **reference or pointer parameters**, where it actually prevents side effects.
___
### ✅ Summary Table

| Use | When you want… |
|-----|----------------|
| `T` | A copy; you don’t care if it mutates |
| `const T` | A copy that cannot change |
| `T&` | A reference you **can** modify |
| `const T&` | A reference you **cannot** modify |

### 🔹 Returning `const` Values
You can make a return value `const`:
```cpp
const int getValue() {
  return 5;
}
```
But for **fundamental types**, this has no effect — `const` is ignored and may generate a compiler warning.

> ❗ Avoid using `const` with return-by-value unless there's a **specific, justified** reason.
___
### 🔹 Why Use Constants?

✅ Rule of thumb:

> “If a variable can be made constant, it **should** be.”

### ⚙️ Benefits:

1.  Prevents accidental modification (makes bugs easier to catch)    
2.  Allows more aggressive compiler optimization    
3.  Reduces cognitive load and complexity
___
### 🔹 Object-like Macros

From [[preprocessor directives]]:
```cpp
#define MY_NAME "John"

int main() {
  std::cout << MY_NAME;
}
```
-   The preprocessor **replaces `MY_NAME` with `"John"`**
-   These are just _textual substitutions_ — no type checking or scope
___
### ❌ Don’t Use Macros Instead of Const Variables

| Reason | Why it's a problem |
|--------|--------------------|
| ❌ Breaks scope rules | Macros are global and uncontrolled |
| ❌ Harder to debug | The compiler never sees the macro |
| ❌ Unsafe substitutions | Easy to misuse or create silent bugs |

Prefer:
```cpp
const std::string_view myName{ "John" };
```
___
### 🔹 Constants Across Multiple Files

If a constant is used **across translation units**, do not define it in each `.cpp` file. Instead:
-   Put it in a header as `inline const` (since C++17), or    
-   Define it in one `.cpp` and `extern` it in a header    

✅ Proper setup avoids duplication and linker errors.
___
### 🔹 Nomenclature: Type Qualifiers

-   `const` and `volatile` are **type qualifiers**    
-   Together, they are called **cv-qualifiers**    
-   `const` means "cannot be changed"    
-   `volatile` means "may be changed at any time (e.g. hardware or multithreaded)" — rarely used
___

| Term | Meaning |
|------|---------|
| `cv-qualified` | Has `const`, `volatile`, or both |
| cv-unqualified` | Has neither |

___
### 🔹 Key Terms

| Term | Definition |
|------|------------|
| **Constant** | A value that cannot change at runtime |
| **Constant Variable** | A named constant (initialized once, then read-only) |
| **Type Qualifier** | Keyword like `const` that modifies behavior of a type |
| **Const Qualifier** | Specifically refers to the `const` modifier on a type |