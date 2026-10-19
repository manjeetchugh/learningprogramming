# C Programming – Basic Rules and Syntax

## 1. Basic Rules in C

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

## 2. Statements That Require a Semicolon

```c
int a = 10;
int b = 20;
int sum;

sum = a + b;

printf("%d", sum);
scanf("%d", &a);

return 0;
