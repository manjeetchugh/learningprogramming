# Operators in C

Operators in C are special symbols used to perform operations on variables, constants, and expressions. They enable arithmetic calculations, comparisons, logical decisions, memory access, and bit-level manipulations.

> [!NOTE]
> Operators can be unary, binary, or ternary based on the number of operands they require.

## Arithmetic Operators

Used for mathematical calculations on numeric values.

| Operator | Description | Example |
|----------|-------------|---------|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Modulus (remainder) | `a % b` |
| `++` | Increment | `a++` or `++a` |
| `--` | Decrement | `a--` or `--a` |
| `+` | Unary plus | `+a` |
| `-` | Unary minus | `-a` |

### Example

    int a = 25, b = 5;
    printf("a + b = %d\n", a + b);     // 30
    printf("a - b = %d\n", a - b);     // 20
    printf("a * b = %d\n", a * b);     // 125
    printf("a / b = %d\n", a / b);     // 5
    printf("a %% b = %d\n", a % b);    // 0

---

## Relational Operators

Compare two values and return **0** (false) or **1** (true).

| Operator | Description | Example |
|----------|-------------|---------|
| `<` | Less than | `a < b` |
| `>` | Greater than | `a > b` |
| `<=` | Less than or equal | `a <= b` |
| `>=` | Greater than or equal | `a >= b` |
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |

### Example

    int a = 25, b = 5;
    printf("a > b  : %d\n", a > b);    // 1 (true)
    printf("a == b : %d\n", a == b);   // 0 (false)
    printf("a != b : %d\n", a != b);   // 1 (true)

---

## Logical Operators

Combine multiple conditions and return logical results (true or false).

| Operator | Description | Example |
|----------|-------------|---------|
| `&&` | Logical AND | `a && b` (true if both are true) |
| `\|\|` | Logical OR | `a \|\| b` (true if either is true) |
| `!` | Logical NOT | `!a` (inverts the result) |

### Example

    int a = 25, b = 5;
    printf("a && b : %d\n", a && b);   // 1 (both non-zero)
    printf("a || b : %d\n", a || b);   // 1 (at least one non-zero)
    printf("!a     : %d\n", !a);      // 0 (a is non-zero)

---

## Bitwise Operators

Perform operations directly on binary representations of integers.

| Operator | Description | Example |
|----------|-------------|---------|
| `&` | Bitwise AND | `a & b` |
| `\|` | Bitwise OR | `a \| b` |
| `^` | Bitwise XOR | `a ^ b` |
| `~` | Bitwise NOT (complement) | `~a` |
| `<<` | Left shift | `a << b` |
| `>>` | Right shift | `a >> b` |

> [!TIP]
> Bitwise operations are useful for flags, masks, and hardware programming. They are not universally faster than arithmetic operations.

### Example

    int a = 25, b = 5;
    printf("a & b  : %d\n", a & b);   // 1
    printf("a | b  : %d\n", a | b);   // 29
    printf("a ^ b  : %d\n", a ^ b);   // 28
    printf("~a     : %d\n", ~a);      // -26 (typical result)
    printf("a << 5 : %d\n", a << 5);  // 800
    printf("a >> 5 : %d\n", a >> 5);  // 0

---

## Assignment Operators

Assign values to variables. Compound operators combine assignment with another operation.

| Operator | Description | Syntax |
|----------|-------------|--------|
| `=` | Simple assignment | `a = b` |
| `+=` | Add and assign | `a += b` |
| `-=` | Subtract and assign | `a -= b` |
| `*=` | Multiply and assign | `a *= b` |
| `/=` | Divide and assign | `a /= b` |
| `%=` | Modulus and assign | `a %= b` |
| `&=` | Bitwise AND and assign | `a &= b` |
| `\|=` | Bitwise OR and assign | `a \|= b` |
| `^=` | Bitwise XOR and assign | `a ^= b` |
| `<<=` | Left shift and assign | `a <<= b` |
| `>>=` | Right shift and assign | `a >>= b` |

### Example

    int a = 25, b = 5;
    a += b;    // a = a + b = 30
    a -= b;    // a = a - b = 25
    a *= b;    // a = a * b = 125

---

## Increment and Decrement Operators

Increment (`++`) increases a variable's value by one, while decrement (`--`) decreases it by one.

| Form | Description | Example |
|------|-------------|---------|
| Prefix increment | Increments first, then produces the new value | `++a` |
| Postfix increment | Produces the original value, then increments | `a++` |
| Prefix decrement | Decrements first, then produces the new value | `--a` |
| Postfix decrement | Produces the original value, then decrements | `a--` |

### Example

    int a = 5;

    printf("Post-increment: %d\n", a++);  // Prints 5
    printf("After a++: %d\n", a);         // Prints 6

    printf("Pre-increment: %d\n", ++a);   // Prints 7
    printf("After ++a: %d\n", a);         // Prints 7

> [!IMPORTANT]
> In `printf("Value: %d", a++)`, the original value of `a` is used for the output before the increment takes effect. With `++a`, the increment happens before the new value is produced.
>
> Avoid modifying the same variable multiple times in a single expression when the order of evaluation is not guaranteed.

---

## Special Operators

### sizeof Operator

Returns the size, in bytes, of a data type or variable.

    printf("sizeof(int) = %zu bytes\n", sizeof(int));

> [!NOTE]
> The size of a data type depends on the implementation. Use `%zu` to print a value of type `size_t`, which is the type returned by `sizeof`.

### Conditional Operator (Ternary)

The only ternary operator in C; provides a concise alternative to a simple `if...else` statement.

    condition ? expression_if_true : expression_if_false;

    int result = (10 < 5) ? 10 : 20;  // result = 20

### Comma Operator

Evaluates the first operand, discards its result, then evaluates and returns the second operand.

    int b;
    int a = (b = 5, b + 10);  // a = 15

### Member Access Operators

Access structure or union members.

| Operator | Use Case | Syntax |
|----------|----------|--------|
| `.` | Direct object access | `structure_var.member` |
| `->` | Pointer to object access | `struct_ptr->member` |

### Example

    struct Student {
        int age;
    };

    struct Student s = {18};
    struct Student *ptr = &s;

    printf("%d\n", s.age);    // 18
    printf("%d\n", ptr->age); // 18

### Cast Operator

Converts a value to another data type.

    int num = 10;
    float result = (float)num;  // 10.0

### Address-of and Dereference Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `&` | Address-of (returns memory address) | `&num` |
| `*` | Dereference (accesses value at address) | `*ptr` |

### Example

    int num = 10;
    int *ptr = &num;

    printf("Address: %p\n", (void *)&num);
    printf("Value: %d\n", *ptr);  // 10

---

## Complete Example

    #include <stdio.h>

    int main(void) {
        int num = 10;
        int *ptr = &num;

        printf("sizeof(num) = %zu bytes\n", sizeof(num));
        printf("&num = %p\n", (void *)&num);
        printf("*ptr = %d\n", *ptr);
        printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20);
        printf("(float)num = %f\n", (float)num);

        return 0;
    }

### Sample Output

    sizeof(num) = 4 bytes
    &num = 0x7ffdb58c037c
    *ptr = 10
    (10 < 5) ? 10 : 20 = 20
    (float)num = 10.000000

> [!NOTE]
> The size of `int` and the memory address shown in the output are examples. Actual results may differ depending on your system and compiler.

> [!WARNING]
> Dereferencing an uninitialized, null, or otherwise invalid pointer causes undefined behavior. Always ensure that a pointer refers to a valid object before dereferencing it.

---

## Quick Summary

| Category | Operators | Primary Purpose |
|---|---|---|
| Arithmetic | `+`, `-`, `*`, `/`, `%`, `++`, `--` | Mathematical calculations |
| Relational | `<`, `>`, `<=`, `>=`, `==`, `!=` | Comparing values |
| Logical | `&&`, `||`, `!` | Combining or inverting conditions |
| Bitwise | `&`, `|`, `^`, `~`, `<<`, `>>` | Manipulating individual bits |
| Assignment | `=`, `+=`, `-=`, `*=`, `/=`, `%=` | Assigning and updating values |
| Conditional | `?:` | Choosing between two expressions |
| Size | `sizeof` | Determining object or type size |
| Comma | `,` | Sequencing expressions |
| Member access | `.`, `->` | Accessing structure or union members |
| Type cast | `(type)` | Explicit type conversion |
| Pointer-related | `&`, `*` | Accessing addresses and pointed-to values |

> [!TIP]
> Understanding operators is essential for writing conditions, loops, functions, pointer operations, and efficient C programs. Practice each category with small programs to understand how the operators behave.
