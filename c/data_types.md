# Data Types in C

A **data type** in C specifies the kind of value a variable can store, its range and precision, and the operations that can be performed on it.

Data types help the compiler determine how to represent and interpret data in memory.

---

## Classification of Data Types

C data types are commonly organized into three categories:

| Category | Description | Examples |
| --- | --- | --- |
| Primitive (basic) | Built-in types for representing values | `char`, `int`, `float`, `double`, `void` |
| Derived | Types formed from other types | Arrays, pointers, function types |
| User-defined | Types and aliases declared by programmers | `struct`, `union`, `enum`, `typedef` |

> **Note:** `typedef` creates an alias for an existing type; it does not create an entirely new distinct type. C also has other types, including `_Bool` and, in modern C, `_Complex`.

---
# Data Types in C

A **data type** specifies the kind of value a variable can store, its memory requirements, and the operations that can be performed on it.

## Classification of Data Types

| Category | Types | Description |
|---|---|---|
| Primitive | `char`, `int`, `float`, `double`, `void` | Basic built-in types |
| Derived | Arrays, pointers, function types | Types formed from other types |
| User-defined | `struct`, `union`, `enum`, `typedef` | Custom types and type aliases |

## 1. Primitive Data Types

| Type | Purpose | Typical Size | `printf()` |
|---|---|---|---|
| `char` | Character | 1 byte | `%c` |
| `int` | Whole numbers | 4 bytes | `%d` |
| `float` | Decimal numbers | 4 bytes | `%f` |
| `double` | Higher-precision decimals | 8 bytes | `%f` |
| `void` | No value | N/A | N/A |

*Sizes are implementation-dependent except that `sizeof(char)` is always 1 byte.*

```c
#include <stdio.h>

int main(void)
{
    int age = 20;
    char grade = 'A';
    float price = 12.5f;
    double pi = 3.141592;

    printf("%d\n", age);
    printf("%c\n", grade);
    printf("%f\n", price);
    printf("%f\n", pi);

    return 0;
}
```

**Output**
```text
20
A
12.500000
3.141592
```

`void` is commonly used for functions that return no value.

# 2. Derived Data Types

Derived types are constructed from other types. Common examples include arrays, pointers, and function types.

## Arrays

An array stores multiple elements of the same type in contiguous memory locations.

Array indexing starts at `0`.

```c
#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("First element: %d\n", arr[0]);
    printf("Third element: %d\n", arr[2]);
    printf("Number of elements: %zu\n",
           sizeof(arr) / sizeof(arr[0]));

    return 0;
}
```

**Output**

```text
First element: 10
Third element: 30
Number of elements: 5
```

**Explanation**

- `int arr[5]` declares an array of five integers.
- `arr[0]` accesses the first element.
- `arr[2]` accesses the third element.
- `sizeof(arr) / sizeof(arr[0])` calculates the number of elements when `arr` is an actual array in this scope.

## Pointers

A pointer stores the address of an object or function, depending on its pointer type.

The `&` operator obtains an object's address, while the unary `*` operator dereferences a pointer.

```c
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Value using pointer: %d\n", *ptr);

    *ptr = 25;

    printf("Updated value of x: %d\n", x);

    return 0;
}
```

**Output**

```text
Value of x: 10
Value using pointer: 10
Updated value of x: 25
```

**Explanation**

- `int *ptr` declares a pointer to an integer.
- `&x` obtains the address of `x`.
- `*ptr` accesses the integer stored at that address.
- Assigning `25` to `*ptr` changes the value of `x`.

To print an address, use `%p` and pass a `void *` pointer:

```c
printf("Address of x: %p\n", (void *)&x);
```

The actual address varies between program executions and systems.
<details>
  <summary>A bit confusing part(Skip it for clarity)</summary>
    
  ## Function Types

A function has a return type, a name, and a parameter list. Function types describe the return and parameter types of functions.

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("Sum: %d\n", add(10, 20));

    return 0;
}
```

**Output**

```text
Sum: 30
```

**Explanation**

- `int add(int a, int b)` defines a function that takes two integers and returns an integer.
- `add(10, 20)` calls the function with arguments `10` and `20`.
- The function returns `30`.

> **Note:** Functions are not objects, and C does not allow arrays of functions. However, pointers to functions can be declared and used.

</details>

---

# 3. User-Defined Data Types

<details>
    <summary>Advanced Section(Study it after you have a hold of coding in c)</summary>

User-defined types let programmers group related information, represent named constants, or create convenient aliases.

## Structure (`struct`)

A structure groups related members that may have different data types.

```c
#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main(void)
{
    struct Student s1 = {"Riya", 20};

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    return 0;
}
```

**Output**

```text
Name: Riya
Age: 20
```

**Explanation**

- `struct Student` defines a structure type.
- `name` and `age` are members of that structure.
- `struct Student s1` declares a structure variable.
- The dot operator (`.`) accesses a member.

## Union (`union`)

A union allows multiple members to share the same memory storage.

```c
#include <stdio.h>

union Data
{
    int i;
    float f;
};

int main(void)
{
    union Data data;

    data.i = 10;
    printf("Integer: %d\n", data.i);

    data.f = 5.5f;
    printf("Float: %.1f\n", data.f);

    return 0;
}
```

**Output**

```text
Integer: 10
Float: 5.5
```

**Explanation**

- `union Data` defines a union with an integer and a floating-point member.
- The members overlap in memory.
- Assigning a new value to `data.f` replaces the previously stored representation in the shared storage.
- After writing `data.f`, reading `data.i` is not a portable way to retrieve the previous integer value.

A union is useful when different representations need to occupy the same storage, provided the program handles the active representation correctly.

## Enumeration (`enum`)

An enumeration defines named integer constants, making code easier to read and maintain.

```c
#include <stdio.h>

enum Day
{
    MON, TUE, WED, THU, FRI, SAT, SUN
};

int main(void)
{
    enum Day today = WED;

    printf("Day value: %d\n", today);

    return 0;
}
```

**Output**

```text
Day value: 2
```

**Explanation**

- `MON` has the value `0` by default.
- `TUE` has the value `1`.
- `WED` has the value `2`.
- Each subsequent enumerator increases by one unless explicitly assigned a different value.

You can also assign values explicitly:

```c
enum Status
{
    FAILURE = 0,
    SUCCESS = 1,
    PENDING = 5
};
```

## Type Alias (`typedef`)

The `typedef` keyword creates an alternative name for an existing type.

```c
#include <stdio.h>

typedef unsigned int uint;

int main(void)
{
    uint count = 100;

    printf("Count: %u\n", count);

    return 0;
}
```

**Output**

```text
Count: 100
```

**Explanation**

- `typedef unsigned int uint;` defines `uint` as an alias for `unsigned int`.
- `uint count = 100;` declares a variable using that alias.
- `typedef` improves readability but does not create a distinct type.

---

</details>

# Size of Data Types

The size of a data type depends on the C implementation and platform. Use the `sizeof` operator to determine the size of a type or object at runtime or compile time.

```c
#include <stdio.h>

int main(void)
{
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));

    return 0;
}
```

**Typical output on many modern systems**

```text
Size of char: 1 byte(s)
Size of int: 4 byte(s)
Size of float: 4 byte(s)
Size of double: 8 byte(s)
```

**Explanation**

- `sizeof(type)` returns the size of a type in bytes.
- `sizeof(variable)` returns the size of the variable's type in bytes.
- The result type is `size_t`, so `%zu` is the appropriate conversion specifier for `printf()`.
- `sizeof(char)` is always `1`; the size of an ordinary `int`, `float`, or `double` is implementation-dependent.

For a more detailed inspection, you can also examine the sizes of modified types:

```c
printf("Size of short int: %zu\n", sizeof(short int));
printf("Size of long int: %zu\n", sizeof(long int));
printf("Size of long long int: %zu\n", sizeof(long long int));
printf("Size of long double: %zu\n", sizeof(long double));
```

---

# Type Modifiers

Type modifiers change the range or representation of certain integer and floating-point types.

The main modifiers are:

- `signed`
- `unsigned`
- `short`
- `long`

| Modified type | Description | Example |
| --- | --- | --- |
| `short int` | Short integer type | `short int x = 10;` |
| `long int` | Long integer type | `long int population = 100000L;` |
| `long long int` | Integer type with at least as much range as `long int` | `long long int n = 9000000000LL;` |
| `signed int` | Integer type that can represent negative and positive values | `signed int temperature = -10;` |
| `unsigned int` | Integer type that cannot represent negative values | `unsigned int count = 100U;` |
| `long double` | Floating-point type with at least as much precision as `double` | `long double value = 3.14159L;` |

**Example**

```c
#include <stdio.h>

int main(void)
{
    signed int temperature = -10;
    unsigned int count = 100;
    long long int population = 9000000000LL;

    printf("Temperature: %d\n", temperature);
    printf("Count: %u\n", count);
    printf("Population: %lld\n", population);

    return 0;
}
```

**Output**

```text
Temperature: -10
Count: 100
Population: 9000000000
```

> **Important:** The exact sizes and ranges of modified types depend on the implementation. Unsigned integers cannot represent negative values, and their arithmetic follows modulo rules.

---

# Quick Reference Table

| Data type | Purpose | Common size | `printf()` specifier |
| --- | --- | --- | --- |
| `char` | Character or small integer | 1 byte | `%c` |
| `int` | Whole numbers | 4 bytes | `%d` |
| `float` | Floating-point numbers | 4 bytes | `%f` |
| `double` | Higher-precision floating-point numbers | 8 bytes | `%f` |
| `short int` | Short integer | Often 2 bytes | `%hd` |
| `long int` | Long integer | Often 4 or 8 bytes | `%ld` |
| `long long int` | Extended-range integer | Often 8 bytes | `%lld` |
| `unsigned int` | Nonnegative integer | Often 4 bytes | `%u` |
| `long double` | Extended-precision floating point | Implementation-dependent | `%Lf` |
| `void` | No value | No object size | Not applicable |

*The sizes shown are common examples, not universal guarantees.*

---

## Additional Notes
<details>
<summary><strong>Common format specifiers</strong></summary>

| Specifier | Used with `printf()` |
| --- | --- |
| `%d` | `int` |
| `%u` | `unsigned int` |
| `%c` | Character |
| `%s` | Null-terminated character string |
| `%f` | `double` |
| `%e` | `double` in scientific notation |
| `%g` | `double` using a suitable decimal or scientific representation |
| `%ld` | `long int` |
| `%lld` | `long long int` |
| `%Lf` | `long double` |
| `%p` | Pointer address |
| `%zu` | `size_t` |

For `scanf()`, use the correct pointer-based conversion specifier. For example, `%f` reads a `float *`, whereas `%lf` reads a `double *`.

</details>

<details>
    <summary>Some totally optional stuff</summary>

<details>
<summary><strong>Integer ranges</strong></summary>

Integer ranges depend on the type's width and representation. For example, a 32-bit signed integer commonly has a range from `-2,147,483,648` to `2,147,483,647`.

Use `<limits.h>` to inspect integer limits:

```c
#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    return 0;
}
```

</details>

<details>
<summary><strong>Floating-point limits and precision</strong></summary>

Floating-point types have finite precision, so some decimal values cannot be represented exactly.

Use `<float.h>` to inspect implementation-specific limits:

```c
#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);
    printf("FLT_MAX: %g\n", FLT_MAX);
    printf("DBL_MAX: %g\n", DBL_MAX);

    return 0;
}
```

`FLT_DIG` and `DBL_DIG` indicate decimal precision characteristics, while `FLT_MAX` and `DBL_MAX` provide the maximum finite values for their respective types.

</details>
    
</details>




---

## Key Takeaways

- Data types define how C programs represent and manipulate values.
- Primitive types include `char`, `int`, `float`, `double`, and `void`.
- Arrays, pointers, and function types are derived from other types.
- Structures, unions, and enumerations let programmers define custom types.
- `typedef` provides an alias for an existing type.
- Use `sizeof()` to inspect storage size and the appropriate headers to inspect type limits.
- Always use the correct format specifier for the type being printed or read.
