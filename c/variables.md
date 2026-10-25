# Variables in C

A **variable** is a named memory location used to store a value that a program can access or modify. Each variable has a **data type** that determines what kind of value it can hold.

## 1. Declaring Variables

The syntax for declaring a variable is:

```c
data_type variable_name;
```

**Example:**

```c
int age;
char grade;
float temperature;
double distance;
```

| Data Type | Description | Example |
|---|---|---|
| `int` | Stores integers | `int age = 20;` |
| `char` | Stores a single character | `char grade = 'A';` |
| `float` | Stores floating-point numbers | `float price = 9.5f;` |
| `double` | Stores floating-point numbers with greater precision than `float` | `double pi = 3.14159;` |

> [!NOTE]
> A variable must be declared before it is used. The examples above declare variables without initializing them.

You can also declare multiple variables of the same type in one statement:

```c
int x, y, z;
```

## Naming Convention for Variables

| Rule | Description | Valid Examples | Invalid Examples |
|---|---|---|---|
| Start with letter or underscore | Must begin with `a-z`, `A-Z`, or `_` | `int age;` `int _count;` | `int 123var;` `int $money;` |
| Contains letters, digits, underscore | After first character, use letters, digits (0-9), or underscores | `int var_name;` `int myVar1;` | `int var-name;` `int var@name;` |
| Case-sensitive | `Age` and `age` are different variables | `int age;` `int Age;` | N/A |
| No spaces allowed | Variable names cannot contain spaces | `int firstName;` | `int first name;` |
| Cannot be C keywords | Cannot use reserved words like `int`, `if`, `for`, `while` | `int myInt;` `int counter;` | `int int;` `int for;` |
| Use meaningful names | Choose names that describe the variable's purpose | `int studentAge;` `int totalScore;` | `int x;` `int a;` |
| Use camelCase or snake_case | Follow consistent naming convention | `int firstName;` or `int first_name;` | `int firstname;` |
| Avoid single letters (except loops) | Use descriptive names, single letters only in loops | `for (int i = 0; i < 10; i++)` | `int x;` (outside loops) |
- Start with a letter (`A–Z`, `a–z`) or an underscore (`_`).
- Contain only letters, digits (`0–9`), and underscores.
- Must not contain spaces or special characters such as `@`, `#`, or `-`.
- Must not be a C keyword, such as `int`, `return`, or `if`.
- Are case-sensitive: `age`, `Age`, and `AGE` are different identifiers.
- Must be unique within their scope.

| Valid Names | Invalid Names | Reason |
|---|---|---|
| `age` | `2count` | Starts with a digit |
| `student_age` | `student age` | Contains a space |
| `count2` | `total-price` | Contains a hyphen |
| `_value` | `int` | Uses a C keyword |
| `totalMarks` | `user@name` | Contains an invalid character |

> [!TIP]
> Use meaningful names such as `student_age`, `total_marks`, and `temperature` to make your code easier to understand. Avoid identifiers beginning with underscores in many contexts, especially at file scope, because some such names are reserved to the implementation.

## 3. Variable Initialization and Assignment

**Initialization** means providing a variable with its initial value when it is declared.

```c
int age = 20;
char grade = 'A';
float temperature = 22.5f;
```

**Assignment** means giving a value to a variable after it has been declared.

```c
int score;
score = 100;
```

You can also change the value of a variable later:

```c
int score = 50;
score = 100;
```

The value of `score` is now `100`.

> [!WARNING]
> An uninitialized local variable with automatic storage duration has an indeterminate value. Do not read it before assigning a valid value.

## 4. Complete Example

```c
#include <stdio.h>

int main(void) {
    int age = 20;
    float height = 1.75f;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

**Output:**

```text
Age: 20
Height: 1.75
Grade: A
```

### Understanding the Format Specifiers

| Specifier | Used For |
|---|---|
| `%d` | Printing an `int` |
| `%f` | Printing a `float` or `double` argument in `printf` |
| `%c` | Printing a character |
| `\n` | Moving to a new line |

**Important:** In `printf`, a `float` argument is promoted to `double`, so `%f` is used for both `float` and `double` values. For `scanf`, the corresponding specifiers differ: use `%f` for `float *` and `%lf` for `double *`.

## 5. Key Takeaways

- A variable stores a value under a name.
- Every variable has a data type.
- Declare variables before using them.
- Initialize local variables before reading their values.
- Follow C naming rules and use descriptive identifiers.
- Use appropriate format specifiers when displaying values.


| No special characters | Cannot use `@`, `#`, `$`, `%`, etc. | `int myVar;` | `int my$var;` `int my#var;` |
