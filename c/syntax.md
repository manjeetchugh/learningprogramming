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


# Now that you have learnt syntax of C, Check out [this juicy cheatsheet](cheatsheet.md)
