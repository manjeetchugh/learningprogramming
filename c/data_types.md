# Data Types in C

A **data type** in C specifies the kind of value a variable can store, its range and precision, and the operations that can be performed on it.


Data types help the compiler determine how to represent and interpret data in memory.

## Table of Contents

- [Classification of Data Types](#classification-of-data-types)
- [1. Primitive Data Types](#1-primitive-data-types)
  - [Integer (`int`)](#integer-int)
  - [Character (`char`)](#character-char)
  - [Float (`float`)](#float-float)
  - [Double (`double`)](#double-double)
  - [Void (`void`)](#void-void)
- [2. Derived Data Types](#2-derived-data-types)
  - [Arrays](#arrays)
  - [Pointers](#pointers)
  - [Function Types](#function-types)
- [3. User-Defined Data Types](#3-user-defined-data-types)
  - [Structure (`struct`)](#structure-struct)
  - [Union (`union`)](#union-union)
  - [Enumeration (`enum`)](#enumeration-enum)
  - [Type Alias (`typedef`)](#type-alias-typedef)
- [Size of Data Types](#size-of-data-types)
- [Type Modifiers](#type-modifiers)
- [Quick Reference Table](#quick-reference-table)

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

# 1. Primitive Data Types

Primitive data types are the fundamental built-in types provided by C.

## Integer (`int`)

The `int` data type stores whole numbers, including positive numbers, negative numbers, and zero.

```c
#include <stdio.h>

int main(void)
{
    int age = 20;
    int temperature = -5;

    printf("Age: %d\n", age);
    printf("Temperature: %d\n", temperature);

    return 0;
}
```

**Output**

```text
Age: 20
Temperature: -5
```

**Explanation**

- `int age = 20;` declares an integer variable and initializes it to `20`.
- `%d` is used to print an `int` value with `printf()`.
- An `int` is commonly 4 bytes on modern systems, but C does not guarantee that exact size.

## Character (`char`)

The `char` data type stores a single byte-sized character or a small integer value.

```c
#include <stdio.h>

int main(void)
{
    char grade = 'A';

    printf("Grade: %c\n", grade);
    printf("Character code: %d\n", grade);

    return 0;
}
```

**Output on a typical ASCII-compatible system**

```text
Grade: A
Character code: 65
```

**Explanation**

- `char grade = 'A';` initializes a character variable.
- `%c` prints a character.
- `%d` prints the promoted integer value of the character.
- `sizeof(char)` is guaranteed to be `1` byte, although a C byte is not necessarily 8 bits.
- Whether plain `char` behaves as signed or unsigned is implementation-defined.

## Float (`float`)

The `float` data type represents floating-point numbers, including fractional values.

```c
#include <stdio.h>

int main(void)
{
    float price = 12.45f;

    printf("Price: %f\n", price);
    printf("Price (2 decimal places): %.2f\n", price);

    return 0;
}
```

**Output**

```text
Price: 12.450000
Price (2 decimal places): 12.45
```

**Explanation**

- `12.45f` is a floating-point constant of type `float`.
- `%f` prints a floating-point value passed to `printf()`.
- `%.2f` prints exactly two digits after the decimal point.
- `float` commonly occupies 4 bytes and typically provides about 6–7 significant decimal digits of precision.

## Double (`double`)

The `double` data type represents floating-point numbers with greater precision than `float` on typical systems.

```c
#include <stdio.h>

int main(void)
{
    double distance = 123.456789;

    printf("Distance: %f\n", distance);
    printf("Distance (3 decimal places): %.3f\n", distance);

    return 0;
}
```

**Output**

```text
Distance: 123.456789
Distance (3 decimal places): 123.457
```

**Explanation**

- `double` commonly occupies 8 bytes.
- It typically provides about 15–16 significant decimal digits of precision.
- `printf()` uses `%f` for `double`.
- `scanf()` uses `%lf` to read a `double`.

> **Important:** The correct conversion specifier for printing a `double` with `printf()` is `%f`, not `%lf`. For `scanf()`, use `%lf` to read a `double`.

## Void (`void`)

The `void` type represents the absence of a value or a type with no specified value representation.

It is commonly used for functions that do not return a value and for generic pointers.

```c
#include <stdio.h>

void greet(void)
{
    printf("Hello, welcome!\n");
}

int main(void)
{
    greet();

    return 0;
}
```

**Output**

```text
Hello, welcome!
```

**Explanation**

- `void greet(void)` declares a function that returns no value and takes no parameters.
- `void *` is a generic object pointer type that can hold a pointer to an object of any type.
- You cannot declare an ordinary object directly with type `void`, such as `void x;`.

---

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

---

# 3. User-Defined Data Types

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
    printf("Float: %.1f\n", data
