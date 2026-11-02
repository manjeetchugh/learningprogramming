# Parameter Passing Techniques in C

In C, parameter passing means providing data to a function when it's called. There are two main techniques:

## Overview

| Technique | Method | Efficiency | Original Value Changed? |
|-----------|--------|------------|------------------------|
| **Pass by Value** | Copies the argument to the function | May involve copying data | No |
| **Pass by Pointers** | Passes a copy of the argument's memory address | Avoids copying the entire object | Yes, through the pointer |

---

## Pass by Value

A **copy** of the argument is passed to the function. Changes inside the function don't affect the original variable.

```c
#include <stdio.h>

void func(int val) {
    val = 123;  // Modifies only the copy
}

int main() {
    int x = 1;
    func(x);
    printf("%d", x);  // Output: 1
    return 0;
}
```

> [!NOTE]
> The original variable `x` remains unchanged because `func()` receives a copy of its value.

---

## Pass by Pointers

A **pointer** containing the memory address of a variable is passed to the function. Dereferencing the pointer allows the function to modify the original variable.

```c
#include <stdio.h>

void func(int *val) {
    *val = 123;  // Modifies the original variable
}

int main() {
    int x = 1;
    func(&x);
    printf("%d", x);  // Output: 123
    return 0;
}
```

> [!NOTE]
> - `&x` returns the memory address of `x`.
> - `int *val` declares a pointer parameter.
> - `*val = 123` modifies the value stored at that address.

---

## Comparison Table

| Aspect | Pass by Value | Pass by Pointers |
|--------|---------------|------------------|
| What is passed? | Copy of the value | Copy of the address |
| Complexity | Simple | Requires pointer knowledge |
| Modifies original? | No | Yes, through dereferencing |
| Best for | Primitive types and small data | Modifying original data and accessing large objects |
| Error-prone? | Generally less | Yes, incorrect pointer usage can cause errors |

---

## Key Takeaways

> [!TIP]
> Use **pass by value** when a function only needs a copy of the data. Use **pointers** when a function needs to modify the caller's data or access large objects without copying the entire object.

> [!WARNING]
> Dereferencing invalid or null pointers can cause undefined behavior. Always ensure pointers are valid before accessing the memory they reference.

> [!IMPORTANT]
> C does not support true pass-by-reference. **C always passes arguments by value.** When a pointer is passed, the function receives a copy of the address. Dereferencing that pointer allows the function to modify the original object.
