## 📝 Note: Introduction to Type Conversion and static_cast
Consider the following program:
```cpp
#include <iostream>

void print(double x) {
  std::cout << x << '\n';
}

int main() {
  
  int num{ 5 };
  print(num);

  return 0;
}
```

Output:
```bash
5
```
Here's a question. is  the output 5 an `int`, or `double`? If you're unsure, You can also add this line to the function:

```cpp
void print(double x) {
  std::cout << x << '\n';
  std::cout << typeid(x).name(); // This line will tell you the type of 'x'.
}
```
If you're interested, run the first program in the debugger, and set add objects `num` and `x` to the watch window. 

#### Reminder
By default, floating point values whose value decimal part is 0 without decimal places (e.g. `5.0` prints as `5`).
___
### 🔹 Implicit Type Conversion
In the above example, the `print()` function has a parameter type `double`, but the caller is passing an `int`.  

C++ allows many fundamental types to be **implicitly converted** into others when needed. Here, the compiler sees an `int` being passed into a function expecting a `double`, so it quietly creates a temporary `double` holding the value `5`.  

#### Key insight
The original object (`num`) stays an `int`. The compiler just uses its value to create a **temporary of the target type** (`double`) for the function call. This is why implicit conversion behaves much like pass-by-value: the function gets a separate copy in the converted type, and the caller’s variable is unchanged.

#### Warnings
While implicit type conversion is sufficient for most cases where type conversion is needed, there are a few cases where it is not. Consider the following program:
```cpp
#include <iostream>

void print(int x) {
  std::cout << x << '\n';
}

int main() {

  print(5.3);
  return 0; 
}
```
Similar to first example, implicit type conversion happens here as well. The difference between the first example and this one is that this one would be generally considered unsafe, and here's why. Rather than the implicit conversion that widens from `int` to `double` in the first example, this time around the implicit conversion narrows the `double` literal to`int`.  With that in mind, run this new program now and consider the output.
```bash
5
```
#### Truncation
Notice how the output is `5`, rather than `5.3`. This happens because, as we know from our earlier notes on integer types, integer types **cannot** hold fractional parts.

You might have thought that upon an implicit type conversion from `float` to `int`,  it is rounding down to `5`. This is not the case. What happens is what is referred to as **truncation** . Rather than rounding, whatever is after the decimal point is cut off.  Even in the case of the number being `5.99999` before the type conversion, the number will be truncated to just `5`. 

This is why implicit type conversion where you're going from `int` to `float`  is considered safe; whereas generally going from `float` to `int` is considered unsafe.
 ___
### Explicit Type Conversion
What if we wanted to *intentionally* convert a value from one type to another? With our last example, what if we wanted to do an **explicit type conversion** from `double` to `int`, truncation and all? If that's the case, we would want to show intent in code. 
```cpp

```
___
### 📌 Key Definitions

___
### 🧠 Flashcards