# Functions in C

**Functions** are reusable blocks of code that perform specific tasks, helping divide large programs into smaller, manageable parts. They accept input values, execute statements, and optionally return results.

---

## Why Use Functions?

| Benefit | Description |
|---|---|
| **Avoid Repetition** | Write once, reuse multiple times |
| **Readable Code** | Break complex logic into meaningful steps |
| **Easy Debugging** | Fix errors in individual functions |
| **Modular Design** | Create independent, task-specific components |
| **Simpler Testing** | Verify functions separately |
| **Team Collaboration** | Multiple developers work on different modules |

---

## Function Syntax

```c
return_type function_name(parameter_list) {
    // Function body
    return value;  // Optional
}
```

### Components of a Function

| Component | Purpose |
|---|---|
| **Return Type** | Type of value returned (use `void` if none) |
| **Function Name** | Identifies the function |
| **Parameter List** | Input values (use `void` for no parameters) |
| **Function Body** | Statements enclosed in `{ }` |
| **Return Statement** | Ends execution and returns a value |

> [!NOTE]
> If a function is defined before its first use, a separate declaration is generally unnecessary because its definition also serves as a declaration.

---

## Function Declaration, Definition, and Calling

### 1. Declaration (Prototype)

Informs the compiler about the function before use.

```c
int add(int a, int b);
```

### 2. Definition

Provides the actual implementation of the function.

```c
int add(int a, int b) {
    return a + b;
}
```

### 3. Calling

Executes the function with arguments.

```c
int result = add(5, 3);
```

> [!TIP]
> Function declarations are essential when the compiler needs to know a function's type before encountering its definition. They enable functions to be called before their definitions appear in the source file and allow type checking of arguments and return values.

---

## Types of Functions

### 1. Library Functions

**Predefined functions** provided by the C standard library.

| Function | Purpose | Header File |
|---|---|---|
| `printf()` | Formatted output | `<stdio.h>` |
| `scanf()` | Formatted input | `<stdio.h>` |
| `sqrt()` | Square root | `<math.h>` |
| `strlen()` | String length | `<string.h>` |

> [!WARNING]
> Always include the appropriate header file to access library function declarations. Missing or incorrect declarations can cause compilation errors or warnings.

### 2. User-Defined Functions

Functions that programmers create for specific tasks.

They are classified into **four types** based on parameters and return values.

| Type | Parameters | Return Value | Use Case |
|---|---|---|---|
| No arguments, no return | ❌ | ❌ | Simple operations |
| Arguments, no return | ✅ | ❌ | Process input silently |
| No arguments, return | ❌ | ✅ | Fetch computed values |
| Arguments and return | ✅ | ✅ | Most common |

---

## Four Types of User-Defined Functions

### 1. No Arguments, No Return Value

- Does not accept any parameters.
- Does not return any value.
- Uses `void` as the return type and parameter list.

**Example:**

```c
#include <stdio.h>

void greet(void) {
    printf("Hello, World!\n");
}

int main(void) {
    greet();

    return 0;
}
```

**Output:**

```text
Hello, World!
```

### 2. Arguments, No Return Value

- Accepts parameters from the calling function.
- Does not return any value.
- Uses `void` as the return type.

**Example:**

```c
#include <stdio.h>

void displaySum(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int main(void) {
    displaySum(5, 3);

    return 0;
}
```

**Output:**

```text
Sum = 8
```

### 3. No Arguments, With Return Value

- Does not accept any parameters.
- Returns a value to the calling function.
- Uses an appropriate return type such as `int`.

**Example:**

```c
#include <stdio.h>

int getNumber(void) {
    return 10;
}

int main(void) {
    int number = getNumber();

    printf("Number = %d\n", number);

    return 0;
}
```

**Output:**

```text
Number = 10
```

### 4. Arguments, With Return Value

- Accepts parameters from the calling function.
- Performs the required operation.
- Returns the result to the calling function.

**Example:**

```c
#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main(void) {
    int result = multiply(4, 5);

    printf("Product = %d\n", result);

    return 0;
}
```

**Output:**

```text
Product = 20
```

> [!NOTE]
> Each function type serves a different purpose. The fourth type (arguments with a return value) is commonly used because it allows functions to accept input, process it, and return the result.

---

## How Functions Work

1. **Calling Function:** Invokes another function with arguments.
2. **Called Function:** Receives values through parameters.
3. **Function Body:** Executes the statements inside the function.
4. **Return Value:** Sends a result back to the caller, if applicable.
5. **Control Returns:** Execution continues from the statement immediately after the function call.

### Example Workflow

```c
#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void) {
    int result = square(5);

    printf("Square of 5 is: %d\n", result);

    return 0;
}
```

**Output:**

```text
Square of 5 is: 25
```

---

## Parameters vs Arguments

| Term | Definition | Example |
|---|---|---|
| **Parameters** | Variables declared in a function definition | `int add(int a, int b)` — `a` and `b` |
| **Arguments** | Actual values passed when calling a function | `add(10, 20)` — `10` and `20` |

### Example

```c
int add(int a, int b) {  // a and b are parameters
    return a + b;
}

int result = add(10, 20);  // 10 and 20 are arguments
```

> [!WARNING]
> In C, function arguments are passed **by value**. This means the function receives copies of the supplied values. If you need a function to modify variables in the caller, you must pass **pointers** instead.

---

## Memory Management of Functions

| Aspect | Behavior |
|---|---|
| **Allocation** | A stack frame is typically created for local variables and parameters on each function call. |
| **Deallocation** | The function's automatic local variables cease to exist when the function returns. |

> [!TIP]
> C automatically manages the lifetime of function-local variables with automatic storage duration. Their memory is typically managed using the call stack. When a function returns, these variables' lifetimes end. This eliminates the need for manual memory management for ordinary function-local variables.

---

## Quick Reference

| Concept | Example |
|---|---|
| **Declaration** | `int add(int a, int b);` |
| **Definition** | `int add(int a, int b) { return a + b; }` |
| **Calling** | `int result = add(5, 3);` |
| **No Return** | `void greet(void) { printf("Hello"); }` |
| **With Return** | `int getValue(void) { return 42; }` |

---
