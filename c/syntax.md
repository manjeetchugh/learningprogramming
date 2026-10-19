# C Programming – Basic Rules and Syntax

##  Basic Rules in C

| Rule | Example |
|------|---------|
| Most statements end with a semicolon `;` | `int a = 10;` |
| `printf()` statements end with `;` | `printf("Hello");` |
| `scanf()` statements end with `;` | `scanf("%d", &a);` |
| Variable declarations end with `;` | `int age;` |
| Assignment statements end with `;` | `sum = a + b;` |
| `return` statements end with `;` | `return 0;` |
| Opening `{` must have a matching closing `}` | `{ ... }` |
| Opening `(` must have a matching closing `)` | `printf("Hello");` |
| Strings use double quotes | `"Hello World"` |
| Character values use single quotes | `'A'` |

---

##  Statements That Require a Semicolon

```c
int a = 10;
int b = 20;
int sum;

sum = a + b;

printf("%d", sum);
scanf("%d", &a);

return 0;

```
## Statements That Do Not Require a Semicolon After the Header

| Statement Type | Syntax | Example |
|---|---|---|
| If Statement | `if (condition) { ... }` | `if (a > b) { printf("A is bigger"); }` |
| For Loop | `for (init; condition; increment) { ... }` | `for (int i = 0; i < 5; i++) { printf("%d", i); }` |
| While Loop | `while (condition) { ... }` | `while (a < 10) { a++; }` |
| Function Definition | `return_type name() { ... }` | `int main() { return 0; }` |

**Important:** Do not add a semicolon immediately after an `if`, `for`, or `while` condition unless you intentionally want an empty statement.

##  Mathematical, Comparison, and Logical Operators

| Operator | Type | Meaning | Example |
|---|---|---|---|
| `+` | Mathematical | Addition | `sum = a + b;` |
| `-` | Mathematical | Subtraction | `diff = a - b;` |
| `*` | Mathematical | Multiplication | `product = a * b;` |
| `/` | Mathematical | Division | `result = a / b;` |
| `%` | Mathematical | Remainder | `rem = a % b;` |
| `==` | Comparison | Equal to | `if (a == b)` |
| `!=` | Comparison | Not equal to | `if (a != b)` |
| `>` | Comparison | Greater than | `if (a > b)` |
| `<` | Comparison | Less than | `if (a < b)` |
| `>=` | Comparison | Greater than or equal to | `if (a >= b)` |
| `<=` | Comparison | Less than or equal to | `if (a <= b)` |
| `&&` | Logical | Logical AND | `if (age >= 18 && age <= 60)` |
| `\|\|` | Logical | Logical OR | `if (a > 5 \|\| b > 5)` |
| `!` | Logical | Logical NOT | `if (!(a == b))` |
| `&` | Bitwise | Bitwise AND | `result = a & b;` |
| `\|` | Bitwise | Bitwise OR | `result = a \| b;` |
| `^` | Bitwise | Bitwise XOR | `result = a ^ b;` |
| `~` | Bitwise | Bitwise NOT (Complement) | `result = ~a;` |
| `<<` | Bitwise | Left Shift | `result = a << 2;` |
| `>>` | Bitwise | Right Shift | `result = a >> 2;` |

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
| No special characters | Cannot use `@`, `#`, `$`, `%`, etc. | `int myVar;` | `int my$var;` `int my#var;` |

 ## Naming Convention for Functions
| Rule | Description | Valid Examples | Invalid Examples |
|---|---|---|---|
| Start with letter or underscore | Must begin with `a-z`, `A-Z`, or `_` | `void calculateSum()` `int _helper()` | `void 123func()` `int $process()` |
| Contains letters, digits, underscore | After first character, use letters, digits (0-9), or underscores | `void printData();` `int getValue123();` | `void print-data();` `int get@value();` |
| Case-sensitive | `Calculate` and `calculate` are different functions | `void Calculate();` `void calculate();` | N/A |
| No spaces allowed | Function names cannot contain spaces | `void getUserInput();` | `void get user input();` |
| Cannot be C keywords | Cannot use reserved words | `void myFunc();` `int getData();` | `void if();` `int return();` |
| Use verb-based names | Function names should describe what they do (start with verb) | `void printData();` `int calculateTotal();` | `void data();` `int total();` |
| Use camelCase or snake_case | Follow consistent naming convention | `void getUserInput();` or `void get_user_input();` | `void getuserinput();` |
| Avoid abbreviations | Use full words for clarity | `void displayMessage();` | `void dispMsg();` |
| No special characters | Cannot use `@`, `#`, `$`, `%`, etc. | `void myFunction();` | `void my$function();` `void my#func();` |
| Lowercase for library functions | Standard C functions use lowercase | `printf();` `scanf();` `strlen();` | `Printf();` `SCANF();` |

<details>
  <summary>Restricted Keywords in C[Not very helpful tbh.Just skip it imo]</summary>

# C Programming Keywords

C has **32 reserved keywords** that cannot be used as variable names, function names, or identifiers. Here's a comprehensive breakdown organized by category.

## Data Types

| Keyword | Purpose |
|---------|---------|
| `int` | Integer data type |
| `float` | Floating-point data type |
| `double` | Double precision floating-point |
| `char` | Character data type |
| `void` | Absence of type / generic pointer |
| `short` | Short integer modifier |
| `long` | Long integer modifier |
| `signed` | Signed integer (default) |
| `unsigned` | Unsigned integer |

## Storage Classes

| Keyword | Purpose |
|---------|---------|
| `auto` | Automatic storage (default for local variables) |
| `static` | Static storage; maintains value between calls |
| `extern` | External linkage; variable declared elsewhere |
| `register` | Request CPU register storage (rarely used) |

## Type Modifiers & Qualifiers

| Keyword | Purpose |
|---------|---------|
| `const` | Constant value; cannot be modified |
| `volatile` | Value may change unexpectedly; avoid optimization |
| `struct` | Structure (composite data type) |
| `union` | Union (shared memory for multiple types) |
| `enum` | Enumeration (named integer constants) |
| `typedef` | Create alias for existing data type |

## Control Flow & Conditionals

| Keyword | Purpose |
|---------|---------|
| `if` | Conditional statement |
| `else` | Alternative condition |
| `switch` | Multi-way branching |
| `case` | Label in switch statement |
| `default` | Default case in switch |
| `break` | Exit loop or switch |
| `continue` | Skip to next iteration |
| `return` | Return from function |
| `goto` | Jump to labeled statement |

## Loop Statements

| Keyword | Purpose |
|---------|---------|
| `for` | Loop with initialization, condition, increment |
| `while` | Loop while condition is true |
| `do` | Do-while loop (executes at least once) |

## Operators & Utility

| Keyword | Purpose |
|---------|---------|
| `sizeof` | Operator to get size of data type/variable |

## Quick Reference - All 32 Keywords

| | | | | |
|---|---|---|---|---|
| `auto` | `break` | `case` | `char` | `const` |
| `continue` | `default` | `do` | `double` | `else` |
| `enum` | `extern` | `float` | `for` | `goto` |
| `if` | `inline` | `int` | `long` | `register` |
| `restrict` | `return` | `short` | `signed` | `sizeof` |
| `static` | `struct` | `switch` | `typedef` | `union` |
| `unsigned` | `void` | `volatile` | `while` | |

## Important Notes

- ✅ **Reserved**: These keywords cannot be used as identifiers (variable names, function names, etc.)
- ✅ **Case-Sensitive**: Keywords are lowercase (e.g., `Int` or `INT` are valid identifiers, but `int` is not)
- ✅ **No Override**: There is no way to use a keyword as a variable name—it will cause a compilation error
- ✅ **Standard**: All 32 keywords are part of the C standard and remain unchanged across C89/C99/C11

## Example - What NOT to Do

```c
// ❌ WRONG - Will cause compilation error
int int = 5;           // 'int' is a keyword
float float = 3.14;    // 'float' is a keyword
char for = 'a';        // 'for' is a keyword

// ✅ CORRECT - Valid identifiers
int integer = 5;
float value = 3.14;
char character = 'a';


</details>
```

# Now that you have learnt syntax of C, Check out [this juicy cheatsheet](cheatsheet.md)
