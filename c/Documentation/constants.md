# Constants in C

Constants are values that should not change during program execution. In C, they can be defined using `const` or `#define`.

## 1. Using `const`

The `const` keyword makes a variable read-only after initialization.

```c
#include <stdio.h>

int main() {
    const int a = 10;

    printf("%d", a);
    return 0;
}
```

**Output**
```text
10
```

**Syntax**
```c
const data_type name = value;
```

**Note:** A `const` variable must be initialized when declared if you want to assign it a value. Attempting to modify it later causes a compilation error.

## 2. Using `#define`

The `#define` directive creates a symbolic constant that the preprocessor replaces with its value.

```c
#include <stdio.h>
#define PI 3.14

int main() {
    printf("%.2f", PI);
    return 0;
}
```

**Output**
```text
3.14
```

**Syntax**
```c
#define CONSTANT_NAME value
```

## `const` vs `#define`

| `const` | `#define` |
|---|---|
| Declares a read-only variable. | Defines a preprocessor macro. |
| Has a data type. | Does not have a data type of its own. |
| Follows normal scope rules. | Remains active from its definition until undefined or the end of the preprocessing unit. |
| Example: `const int MAX = 100;` | Example: `#define MAX 100` |

**Best practice:** Prefer `const` for typed, read-only variables. Use `#define` when a preprocessor macro is appropriate.
