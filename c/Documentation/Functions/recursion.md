# C Recursion



Recursion is a programming technique where a function calls itself repeatedly until a specific base condition is met. A recursive function is one that performs self-calling behavior.

---

## Basic Example

```c
#include <stdio.h>

void rec(int n) {
    // Base Case
    if (n == 6) return;
    
    printf("Recursion Level %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
    return 0;
}
```

**Output:**
```
Recursion Level 1
Recursion Level 2
Recursion Level 3
Recursion Level 4
Recursion Level 5
```

> **Note:** The function `rec(n)` calls itself with an incremented value until reaching the base case `n == 6`.

---

## How Recursion Works

Recursion uses the **call stack** to manage function calls. Each recursive call saves its state on the stack, creating two phases:

| Phase | Description |
|-------|-------------|
| **Descending Phase** | Function calls itself, going deeper into recursion |
| **Ascending Phase** | Base case is reached, function returns back up the call stack |

### Stack Frame Example

```c
#include <stdio.h>

void f(int n) {
    printf("F(%d)'s Stack Frame Pushed\n", n);
    
    if (n > 1) {
        f(n - 1);
        f(n - 1);
    }
    
    printf("F(%d)'s Stack Frame Removed\n", n);
}

int main() {
    f(3);
    return 0;
}
```

**Output:**
```
F(3)'s Stack Frame Pushed
F(2)'s Stack Frame Pushed
F(1)'s Stack Frame Pushed
F(1)'s Stack Frame Removed
F(1)'s Stack Frame Pushed
F(1)'s Stack Frame Removed
F(2)'s Stack Frame Removed
F(3)'s Stack Frame Removed
```

> **Tip:** This example demonstrates **tree recursion**, where a function makes multiple recursive calls, creating a branching structure.

---

## Memory Management in Recursion

| Aspect | Details |
|--------|---------|
| **Storage** | Each recursive call creates a stack frame in memory |
| **Stack Behavior** | Stack frames stack on top of each other with each call |
| **Return Process** | When a function returns, its stack frame is removed and control passes to the previous function |
| **Instruction Pointer** | The compiler uses this to track where to return after execution |

> **Warning:** Unlike iteration, recursion heavily relies on the call stack. Deep recursion can exhaust available stack memory.

---

## Stack Overflow

> **Warning:** Stack overflow occurs when recursive calls exceed the call stack's fixed memory limit, causing the program to terminate abnormally. This often happens with excessively deep or infinite recursion.

---

## Applications of Recursion

- Tree and Graph Algorithms
- Mathematical Problems
- Divide and Conquer Algorithms
- Dynamic Programming
- Postfix to Infix Conversion
- Searching and Sorting Algorithms

---

## Advantages vs. Disadvantages

| Advantages | Disadvantages |
|-----------|----------------|
| Reduces code length significantly | Slower due to function call overhead |
| Ideal for problems like Tower of Hanoi and tree traversals | Consumes extra stack memory for each call |
| Natural fit for recursive data structures (linked lists, trees) | Difficult to understand and implement |

> **Tip:** Use recursion for naturally recursive problems, but consider iteration for performance-critical code or deeply nested scenarios.

give 
