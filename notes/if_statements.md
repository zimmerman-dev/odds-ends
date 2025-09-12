## 📝 Note: If Statements

The `if` statement is a simple but powerful tool that introduces **conditional flow** into your programs. The idea is straightforward:

> "**If** a condition is `true`, execute the associated statement."

This allows your code to respond dynamically — skipping or executing logic depending on what's happening during runtime. Along with `else if` and `else`, the `if` statement forms the backbone of decision-making in C++.

---

### 🔹 Syntax
```cpp
if (condition) {
  // true_statement
}
```

If the *condition* of an `if` statement evaluates to the Boolean value `true`, then the *true_statement* is executed.
If the *condition* instead evaluates to `false`, then *true_statement* is skipped.

---

### 🔹 Sample 1
```cpp
#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  if (x == 0) {
    std::cout << "You entered zero.\n";
  }
  return 0;
}
```

---

### 🔹 Sample 2: Stacked `if`s
```cpp
#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  if (x == 0) {
    std::cout << "Your value is zero\n";
  }
  if (x != 0) {
    std::cout << "Your value is non-zero\n";
  }
  return 0;
}
```

---

### 🔹 `if` and `else`

#### Syntax:
```cpp
if (condition) {
  // true_statement
} else {
  // false_statement
}
```

Revised Sample 2:
```cpp
#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  if (x == 0) {
    std::cout << "Your value is zero.\n";
  } else {
    std::cout << "Your value is non-zero.\n";
  }
  return 0;
}
```

---

### 🔹 `if`, `else if`, and `else`

#### Sample 3
```cpp
#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  if (x > 0) {
    std::cout << "Your value is positive\n";
  } else if (x < 0) {
    std::cout << "Your value is negative\n";
  } else {
    std::cout << "Your value is zero.\n";
  }
  return 0;
}
```

---

### 🔹 Boolean Return Values

```cpp
// Returns true if x and y are equal, false otherwise
bool isEqual(int x, int y) {
  return x == y;
}
```

#### Sample 4
```cpp
#include <iostream>

bool isEqual(int x, int y) {
  return x == y;
}

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  std::cout << "Enter another integer: ";
  int y{};
  std::cin >> y;

  std::cout << std::boolalpha;

  if (isEqual(x, y)) {
    std::cout << x << " and " << y << " are equal!\n";
  } else {
    std::cout << x << " and " << y << " are not equal!\n";
  }
  return 0;
}
```

---

### ✅ Best Practices

- ✅ Use `else` or `else if` instead of repeating `if` unnecessarily.
- ✅ Prefer braces `{}` even for one-line blocks — it reduces future bugs.
- ✅ Keep your conditions simple and expressive (e.g., `x > 0`, `isReady()`).
- ✅ Try to return early when possible — it simplifies control flow.

---

### 📌 Key Definitions

- **Condition**: An expression that evaluates to a Boolean value (`true` or `false`).
- **Early Return**: A `return` statement that exits a function before reaching the end, often used to handle edge cases or simplify logic.

---

### 🧠 Flashcards

**Q:** What happens if an `if` statement condition evaluates to false?
**A:** The associated true_statement block is skipped.

**Q:** What is the difference between `if` and `if-else`?
**A:** `if` checks a condition and runs a block if true; `if-else` adds a fallback if the condition is false.

**Q:** Why is `else if` used?
**A:** To check additional conditions only if the previous `if` or `else if` fails.

**Q:** Can a function that returns a `bool` be used directly in an `if` statement?
**A:** Yes, the function's return value is used as the condition.

**Q:** What is an early return?
**A:** A return statement that exits the function before reaching the end of the function block.
