## Chapter 6 Quiz

**Complete the Following Program**

```cpp
#include <iostream>

// Write the function getQuantityPhrase() here

// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
```

### Sample Output

```text
Mary has a few apples.
How many apples do you have? 1
You have a single apple.
```
### Functions

`getQuantityPhrase()` should take a single int parameter representing the quantity of something and return the following descriptor:
- `< 0 = "negative"`
- `0 = "no"`
- `1 = "a single"`
- `2 = "a couple of"`
- `3 = "a few"`
- `> 3 = "many"`

`getApples Pluralized()` should take a single int parameter representing the quantity of apples and return the following:
- `1 = "apple"`
- otherwise = `"apples"`

