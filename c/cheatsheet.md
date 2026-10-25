## C Language Cheatsheet(Work in Progress)
> This cheatsheet assumes that you know the basics of C

## Common C Format Specifiers

| Format Specifier | Data Type | Typical Size (Bytes) | Purpose |
|---|---|---:|---|
| `%d` | `int` | 4 | Signed integer |
| `%f` | `float` (`printf`: `double`) | 4 (`float`) | Floating-point number |
| `%c` | `char` | 1 | Single character |
| `%s` | `char[]` | Variable | String |

> **Note:** Sizes are typical and depend on the system and compiler. In `printf()`, `%f` accepts a `double`; in `scanf()`, `%f` expects a `float*`, and `%lf` expects a `double*`.

<details>
<summary>Other C Format Specifiers — Explanation and Examples</summary>

### 1. Integer Specifiers

| Specifier | Data Type | Typical Size (Bytes) | Explanation | Example |
|---|---|---:|---|---|
| `%i` | `int` | 4 | Reads an integer; in `scanf()`, can detect decimal, octal, or hexadecimal from the prefix. | `scanf("%i", &n);` |
| `%u` | `unsigned int` | 4 | Displays or reads a non-negative integer value. | `printf("%u", n);` |
| `%o` | `unsigned int` | 4 | Represents an integer in octal (base 8). | `printf("%o", 10); // 12` |
| `%x` | `unsigned int` | 4 | Represents an integer in hexadecimal using lowercase letters. | `printf("%x", 255); // ff` |
| `%X` | `unsigned int` | 4 | Represents an integer in hexadecimal using uppercase letters. | `printf("%X", 255); // FF` |
| `%hd` | `short int` | 2 | Handles a short signed integer. | `printf("%hd", (short)25);` |
| `%hu` | `unsigned short int` | 2 | Handles a short unsigned integer. | `printf("%hu", (unsigned short)25);` |
| `%hhd` | `signed char` | 1 | Prints a signed character-sized integer. | `printf("%hhd", (signed char)-5);` |
| `%hhu` | `unsigned char` | 1 | Prints an unsigned character-sized integer. | `printf("%hhu", (unsigned char)250);` |
| `%ld` | `long int` | 4 or 8 | Handles a long signed integer. | `printf("%ld", 100L);` |
| `%lu` | `unsigned long int` | 4 or 8 | Handles a long unsigned integer. | `printf("%lu", 100UL);` |
| `%lld` | `long long int` | 8 | Handles a long long signed integer. | `printf("%lld", 100LL);` |
| `%llu` | `unsigned long long int` | 8 | Handles a long long unsigned integer. | `printf("%llu", 100ULL);` |
| `%jd` | `intmax_t` | Platform-dependent | Prints the widest standard signed integer type. | `printf("%jd", (intmax_t)100);` |
| `%ju` | `uintmax_t` | Platform-dependent | Prints the widest standard unsigned integer type. | `printf("%ju", (uintmax_t)100);` |
| `%zu` | `size_t` | Usually 4 or 8 | Prints a size value, commonly returned by `sizeof`. | `printf("%zu", sizeof(int));` |
| `%td` | `ptrdiff_t` | Platform-dependent | Prints the difference between two pointers. | `printf("%td", end - start);` |

### 2. Floating-Point Specifiers

| Specifier | Data Type / Purpose | Typical Size (Bytes) | Explanation | Example |
|---|---|---:|---|---|
| `%lf` | `double` with `scanf()` | 8 | Reads a double-precision floating-point value. In `printf()`, `%f` is used for `double`. | `scanf("%lf", &d);` |
| `%Lf` | `long double` | 8, 12, or 16 | Handles extended-precision floating-point values. | `printf("%Lf", 3.5L);` |
| `%e` | Floating-point | Depends on type | Displays a number in scientific notation with a lowercase exponent. | `printf("%e", 1200.0);` |
| `%E` | Floating-point | Depends on type | Scientific notation with an uppercase exponent. | `printf("%E", 1200.0);` |
| `%g` | Floating-point | Depends on type | Chooses a compact representation using decimal or scientific notation. | `printf("%g", 1200.0);` |
| `%G` | Floating-point | Depends on type | Like `%g`, but uses uppercase exponent notation. | `printf("%G", 1200.0);` |
| `%a` | Floating-point | Depends on type | Displays a hexadecimal floating-point representation. | `printf("%a", 3.5);` |
| `%A` | Floating-point | Depends on type | Like `%a`, but uses uppercase letters. | `printf("%A", 3.5);` |

### 3. Character, String, and Pointer Specifiers

| Specifier | Data Type / Purpose | Typical Size (Bytes) | Explanation | Example |
|---|---|---:|---|---|
| `%p` | `void*` | Usually 4 or 8 | Displays a pointer address. | `printf("%p", (void*)&n);` |
| `%lc` | Wide character | Platform-dependent | Prints a wide character using `wint_t` with `printf()`. | `wprintf(L"%lc", L'A');` |
| `%ls` | Wide-character string | Variable | Prints a wide-character string. | `wprintf(L"%ls", L"Hello");` |
| `%n` | Integer pointer | Depends on pointed-to type | Stores the number of characters printed so far; does not print a value itself. | `int count; printf("Hi%n", &count);` |
| `%%` | None | None | Prints a literal percent sign. | `printf("75%%"); // 75%` |

### 4. Width, Precision, and Flags

These are formatting variations, not separate data types.

| Format | Explanation | Example | Output |
|---|---|---|---|
| `%5d` | Minimum field width of 5 characters. | `printf("%5d", 42);` | `   42` |
| `%.2f` | Displays 2 digits after the decimal point. | `printf("%.2f", 3.14159);` | `3.14` |
| `%03d` | Pads an integer with leading zeros to width 3. | `printf("%03d", 7);` | `007` |
| `%-10s` | Left-aligns a string in a field of width 10. | `printf("%-10s!", "Hi");` | `Hi        !` |
| `%+d` | Displays a plus sign for positive signed integers. | `printf("%+d", 5);` | `+5` |
| `%.5s` | Prints at most 5 characters of a string. | `printf("%.5s", "HelloWorld");` | `Hello` |
| `%10.2f` | Uses width 10 and 2 digits after the decimal point. | `printf("%10.2f", 3.5);` | `      3.50` |

</details>


## Escape Sequences in C

Escape sequences are special character combinations that begin with a backslash (`\`). They are used to represent special characters and control how text is displayed.

| Escape Sequence | Meaning | Example Code | Output / Effect |
|---|---|---|---|
| `\n` | New line | `printf("Hello\nWorld");` | `Hello`<br/>`World` |
| `\t` | Horizontal tab | `printf("A\tB");` | `A    B` (tab space) |
| `\a` | Alert / Beep | `printf("\a");` | Alert sound, if supported by the system |
| `\b` | Backspace | `printf("AB\bC");` | Typically `AC` in a terminal that handles backspace by moving the cursor backward and overwriting `B` |
| `\r` | Carriage return | `printf("Hello\rHi");` | Typically `Hillo` in a terminal that returns to the line start and overwrites characters |
| `\f` | Form feed | `printf("Hello\fWorld");` | `Hello` followed by a form-feed character; display depends on the environment |
| `\v` | Vertical tab | `printf("A\vB");` | `A` followed by a vertical-tab character and `B`; spacing depends on the environment |
| `\\` | Backslash | `printf("\\");` | `\` |
| `\'` | Single quote | `printf("\'");` | `'` |
| `\"` | Double quote | `printf("\"");` | `"` |
| `\?` | Question mark | `printf("\?");` | `?` |

### Complete Example Program

```c
#include <stdio.h>

int main(void) {
    printf("1. New line: Hello\nWorld\n");
    printf("2. Horizontal tab: A\tB\n");
    printf("3. Alert / Beep: \a\n");
    printf("4. Backspace: AB\bC\n");
    printf("5. Carriage return: Hello\rHi\n");
    printf("6. Form feed: Hello\fWorld\n");
    printf("7. Vertical tab: A\vB\n");
    printf("8. Backslash: \\\n");
    printf("9. Single quote: \'\n");
    printf("10. Double quote: \"\n");
    printf("11. Question mark: \?\n");

    return 0;
}
```

### Important Notes

- **`\n`** and **`\t`** are among the most commonly used escape sequences.
- **`\a`** may not produce an audible beep on modern systems.
- **`\b`** and **`\r`** affect cursor positioning, so their visible results depend on the terminal.
- **`\f`** and **`\v`** may not produce an obvious visual effect in modern terminals.
- **`\\`**, **`\'`**, and **`\"`** are useful when you need to print special characters literally.
- **`\?`** prints a question mark. In modern C, it is usually unnecessary to escape it.

**Note:** The output shown for cursor-control characters is illustrative. Actual behavior may vary between terminals, IDE consoles, and operating systems.
