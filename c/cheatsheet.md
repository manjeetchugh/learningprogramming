## C Language Cheatsheet(Work in Progress)
> This cheatsheet assumes that you know the basics of C
##  Common Format Specifiers

| Format Specifier | Data Type / Purpose |
|---|---|
| `%d` | Integer (`int`) |
| `%f` | Floating-point value (`float`) |
| `%lf` | `double` input with `scanf()` |
| `%c` | Single character (`char`) |
| `%s` | String (character array) |

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
