## C Language Cheatsheet(Work in Progress)
> This cheatsheet assumes that you know the basics of C
## Common C Format Specifiers

| Format Specifier | Data Type | Typical Size (Bytes) | Purpose |
|---|---|---:|---|
| `%d` | `int` | 4 | Signed integer |
| `%i` | `int` | 4 | Signed integer |
| `%f` | `float` (`printf`: `double`) | 4 (`float`) | Floating-point number |
| `%lf` | `double` in `scanf()` | 8 | Read a `double` |
| `%c` | `char` | 1 | Single character |
| `%s` | `char[]` | Variable | String |
| `%u` | `unsigned int` | 4 | Unsigned integer |
| `%ld` | `long int` | 4 or 8 | Long integer |
| `%lld` | `long long int` | 8 | Long long integer |
| `%x` | `unsigned int` | 4 | Hexadecimal (lowercase) |
| `%o` | `unsigned int` | 4 | Octal integer |
| `%p` | `void*` | Usually 4 or 8 | Pointer address |

> **Note:** Sizes are typical, not universal. `%f` in `printf()` expects a `double`, while `%f` in `scanf()` expects a `float*`. A string's size depends on its contents and includes the null terminator.
> Unsigned Variables can only store positive non-zero numbers, Whereas Signed Variables can store positive, negative and zero.

<details>
<summary>Other C Format Specifiers</summary>

| Format Specifier | Data Type / Purpose | Typical Size (Bytes) |
|---|---|---:|
| `%hhd` | `signed char` as integer | 1 |
| `%hhu` | `unsigned char` as integer | 1 |
| `%hd` | `short int` | 2 |
| `%hu` | `unsigned short int` | 2 |
| `%lu` | `unsigned long int` | 4 or 8 |
| `%llu` | `unsigned long long int` | 8 |
| `%jd` | `intmax_t` | Implementation-dependent |
| `%ju` | `uintmax_t` | Implementation-dependent |
| `%zu` | `size_t` | 4 or 8 |
| `%td` | `ptrdiff_t` | Implementation-dependent |
| `%e` | Scientific notation | Depends on argument type |
| `%E` | Scientific notation (uppercase) | Depends on argument type |
| `%g` | Shorter of decimal or scientific notation | Depends on argument type |
| `%G` | Same as `%g`, uppercase | Depends on argument type |
| `%a` | Hexadecimal floating-point notation | Depends on argument type |
| `%A` | Hexadecimal floating-point notation (uppercase) | Depends on argument type |
| `%Lf` | `long double` | 8, 12, or 16 |
| `%lc` | Wide character | Implementation-dependent |
| `%ls` | Wide-character string | Variable |
| `%n` | Stores the number of characters written so far | Depends on pointer type |
| `%%` | Prints a literal `%` | No data argument |
| `%5d` | Integer with minimum field width 5 | Usually 4 for `int` |
| `%.2f` | Floating-point output with 2 decimal places | Usually 8 for `double` in `printf()` |
| `%03d` | Integer padded with leading zeros | Usually 4 for `int` |
| `%-10s` | Left-aligned string in width 10 | Variable |
| `%+d` | Signed integer with sign shown | Usually 4 for `int` |

</details>
**Note:** For `%s`, a character array is normally passed without `&`.

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
