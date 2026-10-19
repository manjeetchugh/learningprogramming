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


# Now that you have learnt syntax of C, Check out [this juicy cheatsheet](cheatsheet.md)
